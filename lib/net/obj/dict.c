/**
 * MUD based dictionary, conforms to the DICT new protocol found in RFC 2229. 
 * See ftp://ds.internic.net/rfc/rfc2229.txt for more information.
 * @author Taffyd@Discworld
 */

#include <network.h>

#define DISCONNECTED 0
#define WAITING_FOR_CONNECT 1
#define READY 2
#define RECEIVING 3
#define SENDING_DEFINE 4
#define SENDING_MATCH 5

#define INACTIVE 0
#define DEFINE 1
#define MATCH 2

#define SEARCH_MODE_ALL "*"
#define DEFAULT_SEARCH_MODE "web1913"

//#define DEBUGGER "ceres"
#define DEBUGGER ""

/*
 * This class handles all of the connection details. I put it in here 
 * because having it has globals were a bit icky:)
 */
 
class connection_data {
  int fd;
  string host_name;
  string protocol;
  string msg_id;
  string *dictionaries;
  string *capabilities;
    
  string current_word;
  string message;
  mixed definitions;
  mixed *working;
    
  int status;
  int action;
  int count;
  string search_mode;
    
  object owner;
}

inherit CLIENT;
inherit "/std/object";

mapping _connections = ([ ]);

void create() {
  client::create();
  SetSocketType(STREAM);
  object::create();
} /* create() */

string calculate_short() {
  if ( !mappingp( _connections ) )
    return "dictionary";
    
  if ( _connections[ this_player() ] ) {
    return "open dictionary";
  }
    
  return "closed dictionary";
} /* calculate_short() */

void setup() {
  set_name("dictionary");
  set_short( (: calculate_short() :) );
  set_long("This is a fine dictionary with faded gold embossing.  You could "
           "probably do all manner of things with it such as defining "
           "and spelling words.\n");

  set_weight( 0 );
  _connections = ([ ]);
} /* setup() */

void close_socket( int fd, object who ) {
  if ( _connections[ who ] ) {
    eventWrite(fd, "QUIT\r\n" );
    eventAbortCallback( fd );
    eventSocketClose( fd );
    map_delete( _connections, who );

    if (( environment() == who ) || 
        ( environment( who ) == environment( this_object() ) ) ) {    
      if(query_verb() == "close") {
        tell_object( who, "You close the dictionary.\n" );
      } else {
        tell_object(who, "The dictionary closes.\n");
      }
    }
  }
} /* close_socket() */

void eventRead(int fd, string message) {
  class connection_data dict;
  mapping destination;
  object who;
  string *bits, *lines, line, word, extra, dictionary_name, text;
  mixed *bing;
  int i;

  /* Check to see if the message is valid. */       
  if ( !stringp( message ) )
    return;
  
  /* Find the user for this connection */
  destination = filter( _connections, (: $(fd) == $2->fd :) );
  
  if ( !sizeof( destination ) )
    return;        
  
  who = keys( destination )[ 0 ];
  dict = destination[ who ];
  lines = explode( message, "\r\n" );
  
  foreach ( line in lines ) {
    if ( !sizeof( line ) )
      line = "\n";
    if ( line == "." ) {
      dict->definitions += ({ dict->working });
      dict->count = -1;
      continue;
    }
        
    bits = explode( line, " " );
    if ( !sizeof( bits ) )
      continue;

    tell_creator(DEBUGGER, sprintf("Event %s received in status %d\n[%s]\n",
                                   bits[0], dict->status, line));

    switch ( bits[ 0 ] ) {
    case "150":
      dict->count++;
      dict->working = ({ });
      dict->status = RECEIVING;
      word = 0;
      extra = 0;
      dictionary_name = 0;
      break;
      
    case "151":                             
      if ( dict->status == RECEIVING && 
           ( sscanf( line, "151 \"%s\" %s \"%s\"", word, extra, 
                     dictionary_name ) == 3 ) )
        dict->working += ({ ({ word, dictionary_name, "" }) });
      else
        tell_creator( DEBUGGER, "Invalid 151 error code, %s, %s, %s.\n",
                      word, extra, dictionary_name );
      break;
      
    case "152":
      dict->count++;
      dict->working = ({ });
      dict->status = RECEIVING;
      word = 0;
      extra = 0;
      dictionary_name = 0;
      break;

    case "220":
      dict->status = READY;                
      dict->capabilities = explode( bits[ <2 ][1..<2], "." );
      break;
            
    case "250":
      text = "";
      switch(dict->action) {
      case DEFINE:
        for ( i = 0; i < sizeof( dict->definitions ); i++ ) {
          foreach( bing in dict->definitions[ i ] ) {
            bing[ 2 ] = replace( bing[ 2 ], 
                                 ({ "   ", " ", "\t", " " }) );
            text += who->fix_string( bing[ 2 ], 
                                     who->query_cols() - 5, 0 );
          }
          text += "\n";
        }
        tell_object( who, sprintf( "$P$Definition of %s$P$\n"
                                   "%s\n", dict->current_word, text ) );
        break;
      case MATCH:
        text = "";
        for(i=0; i<sizeof(dict->definitions); i++) {
          foreach(line in dict->definitions[i]) {
            if(sscanf(line, "%s \"%s\"", extra, word) == 2)
              text += word + "\n";
          }
        }
        tell_object(who, sprintf("$P$Spellings for %s$P$"
                                 "\n%-#*s", dict->current_word,
                                 who->query_cols(), text) + "\n");
      }
      dict->definitions = ({ });
      return;
      break;
      
    case "530":
      tell_object( who, sprintf( "The dictionary reports: %s\n"
                                 "Please contact a creator.\n", line ) );
      close_socket( fd, who );
      return;
      break;
      
    case "552":
      tell_object( who, "No definitions for " + 
                   dict->current_word + ".\n" );
      return;
      break;
      
    default:
      if ( dict->status == RECEIVING ) {
        switch(dict->action) {
        case DEFINE:
          dict->working[<1][<1] += line;
          break;
        case MATCH:
          dict->working += ({ line });
        }
      } else
        tell_creator(DEBUGGER, "Line not added, status " +
                     dict->status + "\n");
      break;
    }
  }
} /* eventRead() */

int do_open() {
  class connection_data dict;
  int new_fd;
    
  if ( _connections[ this_player() ] ) {
    add_failed_mess( "$D is already open!\n" );
    return 0;
  }
    
//  new_fd = eventCreateSocket("208.48.44.94", 2628);
  new_fd = eventCreateSocket("66.111.36.30", 2628);

  if (new_fd < 0) {
    add_failed_mess("$D quivers and starts to jump around.  You "
                    "get the feeling that it's not going to open.\n");
    return 0;
  }
    
  dict = new(class connection_data, fd : new_fd, owner : this_player(),
             status : WAITING_FOR_CONNECT, count : -1, definitions : ({ }) );

  _connections[ this_player() ] = dict;
    
  call_out( "close_socket", 120, new_fd, this_player() );
    
  add_succeeded_mess( "$N $V the dictionary.\n" );
  return 1;
} /* do_open() */

int do_close() {
  class connection_data dict;
    
  if ( undefinedp( _connections[ this_player() ] ) ) {
    add_failed_mess( "You have not opened the dictionary!\n" );
    return 0;
  }

  dict = _connections[ this_player() ];    
  close_socket( dict->fd, this_player() );
    
  add_succeeded_mess( "" );
  return 1;
} /* do_close() */

int do_define(mixed *args) {
  class connection_data dict;
       
  if ( !( dict = _connections[ this_player() ] ) ) {
    add_failed_mess( "The dictionary is closed!\n" );
    return 0;
  }
    
  dict->current_word = args[0];        
  if (sizeof(args) > 1)
    dict->search_mode = SEARCH_MODE_ALL;
  else
    dict->search_mode = DEFAULT_SEARCH_MODE;    
    
  dict->status = SENDING_DEFINE;
  dict->action = DEFINE;
  tell_creator(DEBUGGER, sprintf("DEFINE %s %s\r\n", dict->search_mode, 
                                 dict->current_word));
  eventWrite(dict->fd, sprintf("DEFINE %s %s\r\n", dict->search_mode, 
                               dict->current_word));
        
  add_succeeded_mess("Searching...\n");
  return 1;
} /* do_define() */

int do_spell(mixed *args) {
  class connection_data dict;
       
  if ( !( dict = _connections[ this_player() ] ) ) {
    add_failed_mess( "The dictionary is closed!\n" );
    return 0;
  }

  dict->current_word = args[0];
  if(sizeof(args) > 1)
    dict->search_mode = SEARCH_MODE_ALL;
  else
    dict->search_mode = DEFAULT_SEARCH_MODE;

  dict->status = SENDING_MATCH;
  dict->action = MATCH;
  tell_creator(DEBUGGER, sprintf("MATCH %s . %s\r\n", dict->search_mode, 
                                 dict->current_word));
  eventWrite(dict->fd, sprintf("MATCH %s . %s\r\n", dict->search_mode, 
                               dict->current_word));
  add_succeeded_mess("Searching...\n");
  return 1;
}

void init() {
  this_player()->add_command("open", this_object());
  this_player()->add_command("close", this_object());
  add_command("define", "<string> [all]", (: do_define($4) :));
  add_command("spell", "<string> [all]", (: do_spell($4) :));
} /* init() */

void dest_me() {
  class connection_data dict;
  object ob;
    
  foreach ( ob, dict in _connections ) {
    close_socket( dict->fd, ob );
  }

  object::dest_me();
  client::dest_me();
} /* dest_me() */
