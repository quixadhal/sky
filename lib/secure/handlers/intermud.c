/**
 * An intermud (3) handler;  Galileo, 12-05-98
 * Changed to work on Skylib; Shaydz; 2000
 * @changed Cleaned up a little, moved some of the includes
 * to here and added some documentation.
 * - Sandoz, June 2003.
 */

#define SAVE_FILE   "/secure/save/handlers/intermud"
/*
* #define ROUTERS     ({ ({"*gjs", "198.144.203.194 9000"}) })
*/
#define ROUTERS     ({ ({"*i4", "204.209.44.3 8080"}) })

inherit "/secure/std/modules/tcp_client";

#include <network.h>
#include <intermud.h>

class list {
    int id;
    mapping list;
} /* class list */

class intermud {
    int passwd, configured;
    class list channel_list, mud_list;
    string connected;
    mixed routers;
} /* class intermud */

class admin_channel {
    int type;
    string *members;
} /* admin_channel() */

nosave int shutdown, call_id;
nosave string *skylibs = ({ });
string *listen_channels = ({ });
mapping admin_channels = ([ ]);
class intermud config;

private void save_me();
mixed *packet_allocate(string);

#include "/include/localtime.h"

int use_gmt = 0;

int toggle_gmt() {
    if( use_gmt == 1 ) {
        use_gmt = 0;
    } else {
        use_gmt = 1;
    }
    return use_gmt;
}

nosave mapping hour_colors = ([
        "00" : "%^BOLD%^BLACK%^",
        "01" : "%^BOLD%^BLACK%^",
        "02" : "%^BOLD%^BLACK%^",
        "03" : "%^BOLD%^BLACK%^",
        "04" : "%^RED%^",
        "05" : "%^RED%^",
        "06" : "%^ORANGE%^",
        "07" : "%^ORANGE%^",
        "08" : "%^YELLOW%^",
        "09" : "%^YELLOW%^",
        "10" : "%^GREEN%^",
        "11" : "%^GREEN%^",
        "12" : "%^BOLD%^GREEN%^",
        "13" : "%^BOLD%^GREEN%^",
        "14" : "%^BOLD%^WHITE%^",
        "15" : "%^BOLD%^WHITE%^",
        "16" : "%^BOLD%^CYAN%^",
        "17" : "%^BOLD%^CYAN%^",
        "18" : "%^CYAN%^",
        "19" : "%^CYAN%^",
        "20" : "%^BOLD%^BLUE%^",
        "21" : "%^BOLD%^BLUE%^",
        "22" : "%^BLUE%^",
        "23" : "%^BLUE%^",
        ]);

// Get an hour::minute timestamp
varargs string getDayTime(string this_time) {
    mixed *the_time;

    if(undefinedp(this_time)) {
        the_time = localtime(time());
        // LT_GMTOFF is the offset in seconds you need to add to get GMT.
        if(use_gmt && the_time[LT_GMTOFF] != 0) {
            the_time = localtime(time() + the_time[LT_GMTOFF]);
        }
        this_time = sprintf("%02d:%02d", the_time[LT_HOUR], the_time[LT_MIN]);
    }
    return this_time;
}

// Get an hour:minute timestamp with daytime color.
varargs string getColorDayTime(string prefix, string suffix, string this_time) {
    string hour = "";
    string minute = "";

    if(undefinedp(prefix)) prefix = "";
    if(undefinedp(suffix)) suffix = "";

    this_time = getDayTime(this_time);
    hour = this_time[0..1];
    minute = this_time[3..4];

    return hour_colors[hour] + prefix + hour + ":" + minute + suffix + "%^RESET%^";
}

nosave mapping channel_colors = ([
        "admin"             : "%^BOLD%^MAGENTA%^",
        // chat
        "cre"               : "%^BOLD%^GREEN%^",
        "dchat"             : "%^CYAN%^",
        "ds"                : "%^YELLOW%^",
        "discworld-chat"    : "%^BOLD%^WHITE%^",
        "free_speech"       : "%^BOLD%^RED%^",
        "intercre"          : "%^ORANGE%^",
        "intergossip"       : "%^GREEN%^",
        // killers
        // learning
        // liason
        // lord
        // mudlib
        // newbie
        // nipples
        // nschat
        // nscre
        // playtesters
        // sage
        // senior
        // singing
        "skylib"            : "%^BOLD%^MAGENTA%^",
        "url"               : "%^BOLD%^WHITE%^",
        "wileymud"          : "%^YELLOW%^",

        "default"           : "%^BOLD%^BLUE%^",
        ]);

string getChannelColor(string ch) {
    if(member_array(lower_case(ch), keys(channel_colors)) >= 0)
        // If we have a color defined for this channel, use it!
        return channel_colors[lower_case(ch)];
    else
        return channel_colors["default"];
}

varargs string getColorChannelName(string ch, string prefix, string suffix) {
    string the_color;

    if(undefinedp(prefix)) prefix = "";
    if(undefinedp(suffix)) suffix = "";
    the_color = getChannelColor(ch);

    return the_color + prefix + ch + suffix + "%^RESET%^";
}

nosave string* chat_colors = ({
            "%^RED%^",
            "%^GREEN%^",
            "%^ORANGE%^",
            "%^BLUE%^",
            "%^MAGENTA%^",
            "%^CYAN%^",
            "%^BOLD%^BLACK%^",
            "%^BOLD%^RED%^",
            "%^BOLD%^GREEN%^",
            "%^YELLOW%^",
            "%^BOLD%^BLUE%^",
            "%^BOLD%^MAGENTA%^",
            "%^BOLD%^CYAN%^",
            "%^BOLD%^WHITE%^",

            "%^B_RED%^BOLD%^WHITE%^",
            "%^B_GREEN%^BOLD%^WHITE%^",
            "%^B_BLUE%^BOLD%^WHITE%^",
            "%^B_MAGENTA%^BOLD%^WHITE%^",

            "%^B_RED%^YELLOW%^",
            "%^B_GREEN%^YELLOW%^",
            "%^B_BLUE%^YELLOW%^",
            "%^B_MAGENTA%^YELLOW%^",

            "%^B_RED%^BLACK%^",
            "%^B_GREEN%^BLACK%^",
            "%^B_MAGENTA%^BLACK%^",
            "%^B_CYAN%^BLACK%^",
            "%^B_ORANGE%^BLACK%^",
            "%^B_WHITE%^BLACK%^",
        });

mapping chatters = ([ ]);
mapping renamed_chatters = ([ ]);
int chat_counter = 0;

// Sets a particular user to be a particular color.
int setSpeakerColor(string who, string color) {
    string shortwho;

    shortwho = lower_case(explode(who, "@")[0]);
    if(member_array(shortwho, keys(renamed_chatters)) >= 0) {
        shortwho = renamed_chatters[shortwho];
    }
    if(member_array(shortwho,keys(chatters)) >= 0) {
        chatters[shortwho] = color;
        save_me();
        return 1;
    }
    return 0;
}

// Rename a chatter, putting their old name in a renamed mapping.
int renameChatter(string who, string to, int keep_source_color) {
    string shortwho;
    string shortto;

    shortwho = lower_case(explode(who, "@")[0]);
    shortto = lower_case(explode(to, "@")[0]);
    if (member_array(shortwho,keys(chatters)) < 0) {
        // If the source doesn't exist, there's nothing to do.
        return 0;
    }
    // Copy the source value to the destination and then nuke the source.
    renamed_chatters[shortwho] = shortto;
    if(keep_source_color)
        chatters[shortto] = chatters[shortwho];
    map_delete( chatters, shortwho);
    save_me();
    return 1;
}

// Figure out what color to make this guy.
string getSpeakerColor(string who) {
    string color, shortwho;

    shortwho = lower_case(explode(who, "@")[0]);
    if(member_array(shortwho, keys(renamed_chatters)) >= 0) {
        shortwho = renamed_chatters[shortwho];
    }
    if (member_array(shortwho,keys(chatters)) >= 0) {
        color = chatters[shortwho];
    } else {
        color = chat_colors[chat_counter % sizeof(chat_colors)];
        chatters[shortwho] = color;
        chat_counter++;
        save_me();
    }
    return color;
}

// Show who is mapped to a particular color.
mapping mapSpeakerColors() {
    int i;
    mixed *k;
    mixed *v;
    mixed m;
    k = keys(chatters);
    v = values(chatters);
    m = ([]);

    for(i = 0; i < sizeof(k); i++) {
        m[v[i]] = undefinedp(m[v[i]]) ? ({ k[i] }) : m[v[i]] + ({ k[i] });
    }

    return m;
}

// Output a semi-pretty screen of colors mapped to speaker names.
varargs string showSpeakerColors(string who) {
    int i;
    mapping m;
    string s = "";
    mixed *k;
    int t = 0;
    int w;
    string color;
    string t_name = this_player()->query_term_name() || "dumb";
    mapping c_map = (mapping)TERM_H->set_term_type(t_name);

    if(!undefinedp(who)) {
        string shortwho = lower_case(explode(who, "@")[0]);
        if(member_array(shortwho, keys(renamed_chatters)) >= 0) {
            shortwho = renamed_chatters[shortwho];
        }
        if(member_array(shortwho,keys(chatters)) >= 0) {
            color = chatters[shortwho];
        }
    }
    //w= this_player()->GetScreen()[0] || 80;
    w = 80;
    m = mapSpeakerColors();
    k = sort_array(keys(m), 1);
    for(i = 0; i < sizeof(k); i++) {
        string nk;
        int c;
        string * lines;
        int j;

        if(!undefinedp(color)) {
            if(k[i] != color) {
                continue;
            }
        }
        nk = replace_string(k[i], "%^", "");
        c = sizeof(m[k[i]]);
        if(undefinedp(color)) {
            lines = explode( terminal_colour(implode(sort_array(m[k[i]], 1), ", "), c_map, w - 30, 0), "\n");
            for(j = 1; j < sizeof(lines); j++) {
                lines[j] = sprintf("%%^RESET%%^%29s%s%s", "", k[i], lines[j]);
            }
            s += sprintf("(%4d) %-20s: %s%s%s\n", c, nk, k[i], implode(lines, "\n"), "%^RESET%^");
        } else {
            s += sprintf("(%d) %s: %s%s%s\n", c, nk, k[i], implode(sort_array(m[k[i]], 1), ", "), "%^RESET%^");
        }

        t += c;
    }
    if(undefinedp(color)) {
        s += sprintf("(%4d) Total\n", t);
    }

    return s;
}

// Add the speaker's color to their name.
varargs string getColorSpeakerName(string speaker, string prefix, string suffix) {
    string the_color;

    if(undefinedp(prefix)) prefix = "";
    if(undefinedp(suffix)) suffix = "";
    the_color = getSpeakerColor(speaker);

    return the_color + prefix + speaker + suffix + "%^RESET%^";
}

private void create() {
    string host;
    int port;

    config = new( class intermud,
        mud_list     : new( class list, list : ([ ]) ),
        channel_list : new( class list, list : ([ ]) ) );

    tcp_client::mudlib_setup();
    config->routers = ROUTERS;
    sscanf( config->routers[0][1], "%s %d", host, port );

    listen_channels = DEFAULT_CHANNELS;

    unguarded( (: restore_object, SAVE_FILE, 1 :) );

    config->connected = NULL;
    config->configured = NULL;

    open_socket( host, port, MUD );

} /* create() */

private void save_me() {
    call_id = 0;
    unguarded( (: save_object, SAVE_FILE :) );
} /* save_me() */

/** @ignore yes */
void dest_me() {
    tcp_client::dest_me();
} /* dest_me() */

/**
 * This method queries whether the specified mud exists or not.
 * @param mud the mud to check
 * @return the name of the mud if it exists, or 0 if not
 */
string mud_exists( string mud ) {
    string *muds;

    muds = keys( config->mud_list->list );

    mud = lower_case(mud);

    for( int i = 0; i < sizeof(muds); i++ )
        if( lower_case( muds[i] ) == mud )
            return muds[i];

    return 0;

} /* mud_exists() */

/**
 * This method allocates a packet of the specified type.
 * @param type the type of the packet to allocate
 * @return the newly allocated packet
 */
mixed *packet_allocate( string type ) {
    mixed *packet;

    if( !undefinedp( PACKET_SIZES[type] ) ) {
        packet = allocate( S_P + PACKET_SIZES[type] );
    } else {
        log_file("INTERMUD_H", "%s: Invalid packet allocation - %s",
            ctime(time()), type );
        return 0;
    }

    packet[P_TYPE]   = type;
    packet[P_TTL]    = 5;
    packet[P_SOURCE] = MUD_NAME;

    return packet;

} /* allocate_packet() */

/** @ignore yes */
private void packet_invalid( mixed *packet ) {
    log_file("INTERMUD_H", "%s: Invalid packet\n%O\n",
        ctime(time()), packet );
} /* packet_invalid() */

#include "intermud/channel.h"
#include "intermud/emoteto.h"
#include "intermud/error.h"
#include "intermud/finger.h"
#include "intermud/locate.h"
#include "intermud/startup.h"
#include "intermud/tell.h"
#include "intermud/who.h"

private int find_string( string str, string find ) {
    return strsrch( lower_case(str), find, 1 ) != -1;
} /* find_string() */

// Update our mudlist information
private void mudlist_reply( mixed *packet ) {
    mapping mudlist;
    string *tmp;

    if( sizeof(packet) != ( S_P + SIZEOF_MUDLIST ) ) {
        packet_invalid(packet);
        return;
    }

    // Due to a change in the way mudlist packets are broken up and sent
    // in chunks by the server, we can't skip id's that are the same
    // as the last one we saw anymore.
    //
    // Change this to < instead of ==, so we still skip OLD packets,
    // if they somehow appear.
    //
    if( packet[ S_P + MUDLIST_ID ] == config->mud_list->id )
        return;

    // Find any muds using a version of the Skylib mudlib.
    skylibs |= keys( filter( packet[S_P + MUDLIST_INFO], (: sizeof($2) ?
        find_string( $2[MUDLIST_INFO_MUDLIB], "skylib") : 0 :) ) );

    // Find any muds using a version of Skylib as the base mudlib.
    skylibs |= keys( filter( packet[S_P + MUDLIST_INFO], (: sizeof($2) ?
        find_string( $2[MUDLIST_INFO_BMUDLIB], "skylib") : 0 :) ) );

    // Only cache active muds, it gets out of hands otherwise.
    mudlist = filter( packet[S_P + MUDLIST_INFO], (: sizeof($2) ?
              $2[MUDLIST_INFO_STATE] == -1 : 0 :) );
    config->mud_list->list += mudlist;

    // Remove muds that are going down, if they're in our list.
    tmp = keys( filter( packet[S_P + MUDLIST_INFO], (: sizeof($2) ?
                $2[MUDLIST_INFO_STATE] >= 0 : 0 :) ) );

    config->mud_list->list = filter( config->mud_list->list,
        (: member_array( $1, $3 ) == -1 :), tmp );

    skylibs -= tmp;

    if( config->configured && mud_name() == "Divided Sky")
        administrate_channel("skylib", skylibs, 0 );

    save_me();

} /* mudlist_reply() */

/**
 * This method is used by the mudlist command.
 * @param mud the mud to get info on
 * @param flags the flags
 * @return a string describing our progress
 */
string mudlist( string mud, mapping flags ) {
    string *muds, *f_keys, f_val;
    int index;

    if( strlen(mud) ) {
        if( mud = mud_exists(mud) ) {
            return sprintf("Name:     %s, %s\n"
                "IP:       %s %d\nTCP:      %d\n"
                "UDP:      %d\nMudLib:   %s\n"
                "BaseLib:  %s\nDriver:   %s\n"
                "Status:   %s\nAdmin:    %s\n"
                "Services: %s\n", mud,
                config->mud_list->list[mud][MUDLIST_INFO_MUDTYPE],
                config->mud_list->list[mud][MUDLIST_INFO_IPADDR],
                config->mud_list->list[mud][MUDLIST_INFO_PPORT],
                config->mud_list->list[mud][MUDLIST_INFO_TCPPORT],
                config->mud_list->list[mud][MUDLIST_INFO_UDPPORT],
                config->mud_list->list[mud][MUDLIST_INFO_MUDLIB],
                config->mud_list->list[mud][MUDLIST_INFO_BMUDLIB],
                config->mud_list->list[mud][MUDLIST_INFO_DRIVER],
                config->mud_list->list[mud][MUDLIST_INFO_STATUS],
                config->mud_list->list[mud][MUDLIST_INFO_EMAIL],
                implode( keys( config->mud_list->list[mud]
                [MUDLIST_INFO_SERVICES] ), ", ") );
        } else {
            return "No mud is registered with that name.\n";
        }
    }

    muds = keys( config->mud_list->list );
    f_keys = keys(flags);

    for( int i = 0; i < sizeof(f_keys); i++ ) {
        if( !sizeof(muds) )
            break;

        if( f_keys[i] == "S") {
            for( int j = 0; j < sizeof( flags[ f_keys[ i ] ] ); j++ ) {
                switch( flags[ f_keys[ i ] ][ j ] ) {
                  default : f_val = NULL;
                  case "a": f_val = "auth";    break;
                  case "A": f_val = "amcp";    break;
                  case "c": f_val = "channel"; break;
                  case "e": f_val = "emoteto"; break;
                  case "f": f_val = "finger";  break;
                  case "F": f_val = "file";    break;
                  case "h": f_val = "http";    break;
                  case "l": f_val = "locate";  break;
                  case "m": f_val = "mail";    break;
                  case "n": f_val = "news";    break;
                  case "N": f_val = "nntp";    break;
                  case "P": f_val = "ftp";     break;
                  case "r": f_val = "rcp";     break;
                  case "s": f_val = "smtp";    break;
                  case "t": f_val = "tell";    break;
                  case "u": f_val = "ucache";  break;
                  case "w": f_val = "who";     break;
                }

                if( f_val )
                    muds = filter( muds, (: config->mud_list->list[$1]
                        [MUDLIST_INFO_SERVICES][$(f_val)] :) );
            }
            continue;
        } else {
            f_val = flags[f_keys[i]];
        }

        if( f_keys[i] == "n") {
            muds = filter( muds, (: regexp( lower_case($1),
                lower_case( $(f_val) ) ) :) );
            continue;
        }

        switch( f_keys[i] ) {
          default : index = -1;                    break;
          case "d": index = MUDLIST_INFO_DRIVER;   break;
          case "i": index = MUDLIST_INFO_IPADDR;   break;
          case "m": index = MUDLIST_INFO_MUDLIB;   break;
          case "t": index = MUDLIST_INFO_MUDTYPE;  break;
          case "s": index = MUDLIST_INFO_STATUS;   break;
        }

        if( index != -1 )
            muds = filter( muds, (: regexp( lower_case(
                config->mud_list->list[$1][$(index)] ),
                lower_case( $(f_val) ) ) :) );
    }

    if( sizeof(muds) )
        return create_table( ({"Intermuds", "mud"}), muds, 1 );
    else
        return "No muds match your request.\n";

} /* mudlist() */

protected void client_close_callback( int fd ) {
    config->connected = NULL;
    tcp_client::client_close_callback(fd);
} /* client_close_callback() */

protected void client_write_callback( int fd ) {
    if( !config->connected )
        startup_req();
    tcp_client::client_write_callback(fd);
} /* client_write_callback() */

int is_connected() {
    if( config->connected )
        return 1;
    return 0;
} /* is_connected() */

protected void client_read_callback( int fd, mixed *packet ) {
    tcp_client::client_read_callback( fd, packet );

    if( !packet )
        return;

    switch (packet[P_TYPE]) {
      default:                      packet_invalid(packet);   return;
      case CHANNEL_E_PACKET:        channel_e(packet);        return;
      case CHANNEL_M_PACKET:        channel_m(packet);        return;
      case CHANNEL_T_PACKET:        channel_t(packet);        return;
      case CHANLIST_REPLY_PACKET:   chanlist_reply(packet);   return;
      case CHAN_WHO_REPLY_PACKET:   chan_who_reply(packet);   return;
      case CHAN_WHO_REQ_PACKET:     chan_who_request(packet); return;
      case EMOTETO_PACKET:          emoteto_reply(packet);    return;
      case ERROR_PACKET:            packet_error(packet);     return;
      case FINGER_REPLY_PACKET:     finger_reply(packet);     return;
      case FINGER_REQ_PACKET:       finger_request(packet);   return;
      case LOCATE_REPLY_PACKET:     locate_reply(packet);     return;
      case LOCATE_REQ_PACKET:       locate_request(packet);   return;
      case MUDLIST_PACKET:          mudlist_reply(packet);    return;
      case STARTUP_REPLY_PACKET:    startup_reply(packet);    return;
      case TELL_PACKET:             tell_reply(packet);       return;
      case WHO_REPLY_PACKET:        who_reply(packet);        return;
      case WHO_REQ_PACKET:          who_request(packet);      return;
    }

} /* client_read_callback() */

/**
 * This method initiates intermud shutdown.
 * It disconnects all channels etc.
 */
int shutdown() {
    mixed *packet;

    packet = packet_allocate(SHUTDOWN_PACKET);

    if( shutdown )
        return 0;  // Already in progress

    packet[P_DESTINATION] = config->routers[0][0];
    packet[S_P + SHUTDOWN_DELAY] = 180;

    map( available_channels(), (: listen_channel( $1, 0 ) :) );

    add_buffer( 0, packet );
    send_buffer( 0 );

    call_out("dest_me", 60 );
    shutdown = 1;

    return 1;

} /* shutdown() */
