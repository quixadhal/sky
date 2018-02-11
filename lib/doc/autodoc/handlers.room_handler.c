.DT
room_handler.c
$MUDNAME$ autodoc help
room_handler.c

.SH Description
.SP 5 5

This file contains all the bits needed to handle rooms, plus the code to
handle following when moving.
.EP
.SP 10 5


Written by Pinkfish
.EP



.SH See also
.SP 5 5
/std/room/basic_room.c, recycle_chatter(), recycle_door(), recycle_item(), get_chatter(), get_door() and get_item()

.EP
.SH Change history
.SP 5 5
Deutha Who knows
Severely changed, move the follow code in here from the living object

Sandoz - 09/09/02
Added recycling for chatters, doors and items.

Zrutu - 13/10/04
Added support for functions in exit / enter mess
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/player.h, /include/climate.h, /include/room.h and /include/playtesters.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_exit_type%^RESET%^
.EI
.SI 5
int add_exit_type(string type, mixed message, mixed obvious, int size, mixed func)
.EI
.SP 7 5

This method adds an exit type to the current list of available exit types.
This is used when the room handler is setup to add all the used exit
types.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the name of the exit type
.EP
.SP 9 5
message - the message to display when going through the exit
.EP
.SP 9 5
obvious - if the exit is obvious or not
.EP
.SP 9 5
size - the size of the exit (used for heigh restrictions)
.EP
.SP 9 5
func - the function to call when using the exit
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if successfuly added, 0 if not
.EP

.SI 3
* %^BOLD%^check_door%^RESET%^
.EI
.SI 5
void check_door(mixed args)
.EI
.SP 7 5

This method checks to see if the door exists or not.
It is passed in the room we are going from and the direction the
exit faces in the array.
.EP
.SP 7 5
({ room_from, direction })
.EP
.SP 7 5
This is the function which generates those door xx not found messages.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
args - the arguements passed into the function
.EP

.SI 3
* %^BOLD%^exit_move%^RESET%^
.EI
.SI 5
int exit_move(string verb, string extra, string special, object thing)
.EI
.SP 7 5

This is the main code for moving someone.  The move_thing code above
should not be called directly.  This code handlers all the followers
and any other things that need to be handled.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
verb - the movement verb
.EP
.SP 9 5
extra - extra information
.EP
.SP 9 5
special - special information
.EP
.SP 9 5
thing - the thing to move
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 on success, 0 on failure

.EP

.SI 3
* %^BOLD%^get_chatter%^RESET%^
.EI
.SI 5
object get_chatter()
.EI
.SP 7 5

This method gets a recycled chatter from the handler,
or clones a new one, if needed.  This is used by rooms.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a chatter object
.EP

.SI 3
* %^BOLD%^get_door%^RESET%^
.EI
.SI 5
object get_door()
.EI
.SP 7 5

This method gets a recycled door from the handler,
or clones a new one, if needed.  This is used by rooms.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a door object
.EP

.SI 3
* %^BOLD%^get_item%^RESET%^
.EI
.SI 5
object get_item()
.EI
.SP 7 5

This method gets a recycled item object from the handler,
or clones a new one, if needed.  This is used by rooms.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
an item object
.EP

.SI 3
* %^BOLD%^move_thing%^RESET%^
.EI
.SI 5
int move_thing(object thing, string dir, mixed dest, mixed exit, mixed enter, string move)
.EI
.SP 7 5

This is the code that actually moves the thing around the place.
It handles all the weirdness involved with dragging things and other
such stuff.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - what is being moved
.EP
.SP 9 5
dir - the direction we are going
.EP
.SP 9 5
dest - the destination room
.EP
.SP 9 5
exit - the exit name
.EP
.SP 9 5
enter - the enter name
.EP
.SP 9 5
move - the string to tell the object when it moves
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 on success, 0 on failure

.EP

.SI 3
* %^BOLD%^query_chatters%^RESET%^
.EI
.SI 5
mixed query_chatters()
.EI
.SP 7 5

This method returns the current list of rooms that are enabled for
chatting.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current chatters

.EP

.SI 3
* %^BOLD%^query_door_type%^RESET%^
.EI
.SI 5
mixed query_door_type(string type, string direc, mixed dest)
.EI
.SP 7 5

This method returns information about the door type, the door has
extra information associated with it than the standard exit type.
This function does a double job of trying to find the corresponding
door on the other side of the room.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the type of the door
.EP
.SP 9 5
direc - the direction the door points
.EP
.SP 9 5
dest - the destination of the door
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the door type array of information

.EP

.SI 3
* %^BOLD%^query_doors%^RESET%^
.EI
.SI 5
mixed query_doors()
.EI
.SP 7 5

This method returns the current list of doors handled by the room
handler.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current array of doors

.EP

.SI 3
* %^BOLD%^query_exit_type%^RESET%^
.EI
.SI 5
mixed query_exit_type(string type, string dir)
.EI
.SP 7 5

This method returns the information associated with the exit type.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the exit type to query
.EP
.SP 9 5
dir - the direction the type information is for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a huge amount of info as specified above

.EP

.SI 3
* %^BOLD%^recycle_chatter%^RESET%^
.EI
.SI 5
int recycle_chatter(object ob)
.EI
.SP 7 5

This method recycles a chatter object and is used by rooms.
It calls reload_object() on the chatter, removes it from the
chatters array and adds it to the recycled_chatters array.
It can then be re-used by using get_chatter().
Only objects whose base_name is CHATTER_OBJECT can be recycled.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the chatter object to recycle
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if successfully recycled, 0 if not
.EP

.SI 3
* %^BOLD%^recycle_door%^RESET%^
.EI
.SI 5
int recycle_door(object ob)
.EI
.SP 7 5

This method recycles a door object and is used by rooms.
It calls reload_object() on the door, removes it from the
doors array and adds it to the recycled_doors array.
It can then be re-used by using get_door().
Only objects whose base_name is DOOR_OBJECT can be recycled.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the door object to recycle
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if successfully recycled, 0 if not
.EP

.SI 3
* %^BOLD%^recycle_item%^RESET%^
.EI
.SI 5
int recycle_item(object ob)
.EI
.SP 7 5

This method recycles an item object and is used by rooms.
It calls reload_object() on the item and puts it in the
recycled_items array.
It can then be re-used by using get_item().
Only objects whose base_name is ITEM_OBJECT can be recycled.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the item object to recycle
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if successfully recycled, 0 if not
.EP

.SI 3
* %^BOLD%^remove_exit_type%^RESET%^
.EI
.SI 5
int remove_exit_type(string type)
.EI
.SP 7 5

This method remove the named exit from the type list.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the name of the exit type to remove
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
always returns 1
.EP


