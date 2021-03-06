#include "defs.h"
inherit ROOM_OBJ;

string *functions;

void setup() {
   string word;
   /* The following two lines define the description of the room when you 
    * glance at it, or enter it in brief mode.
    * It should be something that will make the sentence:
    * "This room is <determinate>+<short>." correct.
    * eg. here it would make: "This room is the entrance to learning."
    * This is also a useful test to see if you've used capital letters
    * correctly.
    */
   set_short( "room of function examples" );
   add_property( "determinate", "the " );
   /* The next command define the description you see when you look at it,
    * and when you enter it in verbose mode.
    * It should consist of complete sentences.  For normal rooms it should be
    * a description of the things the player can see.  
    * Remember to use two spaces beween sentences.
    */
   set_long( "This is the room that might lead you to better understanding "
            "of how to use some of the functions we have here.\n"
            "Try \"list\" to get a list of the functions known by the room, "
            "take the exit named by the function to get to a room with exits "
            "to the examples.\n" 
            "If you have something you'd like to see here, "
            "mail "+ CURRENT_LORD +" and suggest it.\n" );
   /* set_light sets the amount of light the room has.  See help light
    * for a list of what the number means:)
    */
   set_light( 50 );
   /* This adds the exits, you'd never have guessed
    */
   functions = SEARCH->query_functions();
   foreach( word in functions ) {
      add_exit( word, "??", "path" );
      modify_exit( word, ({ "obvious", 0 }) );
   }
   add_exit( "exit", ENTRANCE, "door" );
   /* add_property is used to add a value to an object, that can later be
    * queried for with query_property.
    * The "commented functions" and "keywords" properties are specific for 
    * rooms in the learning domain and is used to make it possible to search
    * for subjects. 
    * See /d/learning/handlers/search.c for the way this is done.
    */
   add_property( "commented functions", 
                ({ "set_long", "set_short", "add_property", "set_light" }) );
   add_property( "keywords", ({ }) );
} /* setup() */

void init() {
   ::init();
   add_command("list", "");
} /* init() */

int do_list() {
   write( sprintf( "The following functions have examples of use:\n%#-*s\n",
                  75, implode( functions, "\n" ) ) );
   return 1;
} /* do_list() */

/* set_destination is called whenever an exit is looked through or walked 
 * though.
 * The search handler will see if there's already a room defined by the 
 * function, and if not, it'll make one.
 */
void set_destination( string word ) {
   if( word != "exit" ) {
      /* the exit is a function, and need recalculation 
       */
      modify_exit( word, ({ "dest", SEARCH->find_function_room( word ) }) );
   }
} /* set_destination() */

