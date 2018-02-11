.DT
living.c
$MUDNAME$ autodoc help
living.c

.SH Description
.SP 5 5

The main living inherit.  This inherits all the files
needed to be in a living object.
.EP
.SP 10 5


Written by Pinkfish
.EP

.SH Change history
.SP 5 5
Removed the effects inherit/code, because
/std/container already inherits all that.
- Sandoz, April 2003.

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /std/living/skills, /std/living/carrying, /std/living/respond_cmd, /std/living/body, /std/living/holding, /std/living/stats, /std/container, /std/living/health, /std/living/combat, /std/living/armour, /std/living/gender, /std/living/money, /std/living/spells and /std/living/force.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/position.h, /include/tune.h, /include/drinks.h, /include/dirs.h and /include/living.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_follower%^RESET%^
.EI
.SI 5
int add_follower(object ob)
.EI
.SP 7 5

This method adds a follower to the living object.  A follower will
happily follow around the person in front.  Used in the follow
command.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object to follow us
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 on success, 0 on failure

.EP

.SI 3
* %^BOLD%^adjust_al%^RESET%^
.EI
.SI 5
int adjust_al(int number)
.EI
.SP 7 5

This method adjusts the current alignment of the living
object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
number - the amount to change the alignment by
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the new alignment
.EP

.SI 3
* %^BOLD%^adjust_alignment%^RESET%^
.EI
.SI 5
int adjust_alignment(int number)
.EI
.SP 7 5

This method adjusts the current alignment of the living
object.  This is called when an object dies and handles the
mangling of the change value based on the current alignment and
the alignment of the thing dieing.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
number - the amount to change the alignment by
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the new alignment
.EP

.SI 3
* %^BOLD%^align_string%^RESET%^
.EI
.SI 5
string align_string()
.EI
.SP 7 5

This method returns the string associated with the current
alignment of the living object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the string associated with the alignment
.EP

.SI 3
* %^BOLD%^become_flummoxed%^RESET%^
.EI
.SI 5
void become_flummoxed()
.EI

.SI 3
* %^BOLD%^burden_string%^RESET%^
.EI
.SI 5
string burden_string()
.EI
.SP 7 5

This method returns the string representation of the current
burden level.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the burden string
.EP

.SI 3
* %^BOLD%^calc_burden%^RESET%^
.EI
.SI 5
void calc_burden()
.EI
.SP 7 5

This method calculates the current handicap of the living
object.  The handicap is based on the burden of the
person, the more burdened the higher the handicap.  The
handicap is 1 point of dexterity for every 25% burdened.
.EP

.SI 3
* %^BOLD%^cannot_walk%^RESET%^
.EI
.SI 5
int cannot_walk()
.EI
.SP 7 5

This method returns 1 if the creature is trapped, ie cannot walk.
By default, a creature is free to walk, hence the normal return
value of 0.  If you shadow this method, including a message about
why the player cannot move move is a good idea.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 means creature is free to move, 1 that it is trapped.
.EP

.SI 3
* %^BOLD%^check_doing_follow%^RESET%^
.EI
.SI 5
int check_doing_follow(object thing, string verb, string special)
.EI
.SP 7 5

This is a method to check to see if this object can actually follow
the person they are following.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the thing following us
.EP
.SP 9 5
verb - the direction they are going to
.EP
.SP 9 5
special - any special stuff
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if we are allowed to go there, 0 otherwise

.EP

.SI 3
* %^BOLD%^exit_command%^RESET%^
.EI
.SI 5
varargs int exit_command(string word, mixed verb, object thing)
.EI
.SP 7 5

This method is called whenever someone enters a command.
It is here that the exits of the room are checked to see
if the command entered is a move command.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the command entered
.EP
.SP 9 5
verb - no idea
.EP
.SP 9 5
thing - the object moving, not really used
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the command matched an exit and the move
was successful, 0 if not

.EP

.SI 3
* %^BOLD%^find_abs%^RESET%^
.EI
.SI 5
string find_abs(string word)
.EI

.SI 3
* %^BOLD%^find_rel%^RESET%^
.EI
.SI 5
string find_rel(string word, int from)
.EI

.SI 3
* %^BOLD%^living_commands%^RESET%^
.EI
.SI 5
void living_commands()
.EI
.SP 7 5

This method adds any commands needed by the living inherit.

.EP

.SI 3
* %^BOLD%^move_with_look%^RESET%^
.EI
.SI 5
varargs int move_with_look(mixed dest, string messin, string messout)
.EI

.SI 3
* %^BOLD%^no_use_doors%^RESET%^
.EI
.SI 5
int no_use_doors()
.EI
.SP 7 5

This method returns 1 if the creature shouldn't be able to use
closed doors.
By default, any creature is able to move through closed doors
by opening them, so the default value is 0.
If you shadow this method, including a message about why the
player cannot move in a particular direction, is a good idea.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 means creature is free to move through closed doors,
1 that it cannot.
.EP

.SI 3
* %^BOLD%^query_actual_weight%^RESET%^
.EI
.SI 5
int query_actual_weight()
.EI
.SP 7 5

This method returns the actual weight of the living object.
This is useful when you need to know the real weight of a ghost,
as ghosts weight nothing themselves.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the actual weight of the living

.EP

.SI 3
* %^BOLD%^query_al%^RESET%^
.EI
.SI 5
int query_al()
.EI
.SP 7 5

This method returns the current alignment of the living
object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current alignment
.EP

.SI 3
* %^BOLD%^query_always_use_default_position%^RESET%^
.EI
.SI 5
int query_always_use_default_position()
.EI
.SP 7 5

This method sets the always the flag to always use the default position.
If this is set then rooms cannot override the position message which is
displayed by the object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the always use default position flag
.EP

.SI 3
* %^BOLD%^query_arcane_shields%^RESET%^
.EI
.SI 5
string * query_arcane_shields()
.EI
.SP 7 5

This method can be shadowed by all forms of magical and
religious shields so that the shields command will give
the player a nice description.
The first element in the array should contain the description
as shown to the player, the second element should contain the
description shown to others.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
Array with description of shield.

.EP

.SI 3
* %^BOLD%^query_burden%^RESET%^
.EI
.SI 5
int query_burden()
.EI
.SP 7 5

This method returns the current burden level of the living
object.  This is returned as a percentage of the maximum
weight that the living can carry.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the burden level (0-100)

.EP

.SI 3
* %^BOLD%^query_current_room%^RESET%^
.EI
.SI 5
object query_current_room()
.EI
.SP 7 5

This method returns the current room of the object.  This was needed
previously to use in things like unique_array, before function
pointers came into existance.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the environment of the object

.EP

.SI 3
* %^BOLD%^query_default_position%^RESET%^
.EI
.SI 5
string query_default_position()
.EI
.SP 7 5

This method sets the default position of the object.  This is used to
allow things to default to some other exciting off beat and froopy
default position.  The value returned by this is the command code
used to put the object back into the default position or an
array which contains three or one elements, the first is the string
to use as the position, the second and third (if they exist) are
the string to tell the person when changing and the string to tell
everyone else when changing position.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the default position
.EP

.SI 3
* %^BOLD%^query_deity%^RESET%^
.EI
.SI 5
string query_deity()
.EI
.SP 7 5

This method returns the current deity the living object is
worshipping.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current deity
.EP

.SI 3
* %^BOLD%^query_destmsg%^RESET%^
.EI
.SI 5
string query_destmsg()
.EI
.SP 7 5

This is the message that is returned when they dest something.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the dest message

.EP

.SI 3
* %^BOLD%^query_dragging%^RESET%^
.EI
.SI 5
object query_dragging()
.EI

.SI 3
* %^BOLD%^query_facing%^RESET%^
.EI
.SI 5
mixed query_facing()
.EI

.SI 3
* %^BOLD%^query_followers%^RESET%^
.EI
.SI 5
mixed query_followers()
.EI
.SP 7 5

This method returns the current list of followers to the living
object.
.EP

.SI 3
* %^BOLD%^query_handicap%^RESET%^
.EI
.SI 5
int query_handicap()
.EI
.SP 7 5

This method returns the current handicap of the living
object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current handicap.
.EP

.SI 3
* %^BOLD%^query_it_them%^RESET%^
.EI
.SI 5
mixed query_it_them()
.EI
.SP 7 5

This method returns the current array used for calculating 'it' and
'them' in the find_match code.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the array of objects matching them
.EP

.SI 3
* %^BOLD%^query_mmsgin%^RESET%^
.EI
.SI 5
string query_mmsgin()
.EI
.SP 7 5

THis is the message to be used when the person is teleported.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the in message when they teleport

.EP

.SI 3
* %^BOLD%^query_mmsgout%^RESET%^
.EI
.SI 5
string query_mmsgout()
.EI
.SP 7 5

THis is the message to be used when the person is teleported.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the out message when they teleport

.EP

.SI 3
* %^BOLD%^query_msgin%^RESET%^
.EI
.SI 5
string query_msgin()
.EI
.SP 7 5

This is the method used to query the current message to use when
entering a room.   A $N in the string will be expanded to the
name and a $F will be expanded to the from direction.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the message to print when entering a room.
.EP

.SI 3
* %^BOLD%^query_msgout%^RESET%^
.EI
.SI 5
string query_msgout()
.EI
.SP 7 5

This is the method used to query the current message to use when
exiting a room.   A $N in the string will be expanded to the
name and a $T will be expanded to the to direction.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the message to print when entering a room.
.EP

.SI 3
* %^BOLD%^query_objective%^RESET%^
.EI
.SI 5
string query_objective()
.EI
.SP 7 5

This method returns the objective string of the living object.
An objective is "her", "him", "it".
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the objective string

.EP

.SI 3
* %^BOLD%^query_position%^RESET%^
.EI
.SI 5
string query_position()
.EI
.SP 7 5

This queries the current position of the object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current position of the living
.EP

.SI 3
* %^BOLD%^query_position_long%^RESET%^
.EI
.SI 5
string query_position_long()
.EI
.SP 7 5

This method returns the string used in the long description of the
living object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the long description of the position
.EP

.SI 3
* %^BOLD%^query_position_multiple%^RESET%^
.EI
.SI 5
int query_position_multiple()
.EI
.SP 7 5

This returns fact that the object being referenced is one of many.  So
you get something more like 'xx is sitting on one of the couches'.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 if non-multiple, 1 if multiple
.EP

.SI 3
* %^BOLD%^query_position_on%^RESET%^
.EI
.SI 5
object query_position_on()
.EI
.SP 7 5

This queries the current object being referenced.  This can be an
object or a string.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current object being referenced
.EP

.SI 3
* %^BOLD%^query_position_on_short%^RESET%^
.EI
.SI 5
string query_position_on_short()
.EI
.SP 7 5

This method returns the short description of the object
we are referencing.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the short description of the object, "" if none
.EP

.SI 3
* %^BOLD%^query_position_short%^RESET%^
.EI
.SI 5
string query_position_short()
.EI
.SP 7 5

This method returns the description used in the inventory listing
code.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the string used in inventory listings
.EP

.SI 3
* %^BOLD%^query_position_type%^RESET%^
.EI
.SI 5
string query_position_type()
.EI
.SP 7 5

This returns way the object is being referenced.
The 'on', 'at', 'beside'
or whatever strings.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current type string
.EP

.SI 3
* %^BOLD%^query_possessive%^RESET%^
.EI
.SI 5
string query_possessive()
.EI
.SP 7 5

This method returns the prossessive string of the living object.
A possessive is "her", "his", "its".
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the possessive string

.EP

.SI 3
* %^BOLD%^query_pronoun%^RESET%^
.EI
.SI 5
string query_pronoun()
.EI
.SP 7 5

This method returns the pronoun string of the living object.
A pronoun is "he", "she", "it".
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the pronoun string

.EP

.SI 3
* %^BOLD%^query_verbose%^RESET%^
.EI
.SI 5
int query_verbose(string type)
.EI
.SP 7 5

This method returns the current verbose mode setting of the player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
the - type of verbosity, by default it will return the normal stuff.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the verbose mode of the player

.EP

.SI 3
* %^BOLD%^query_verbose_types%^RESET%^
.EI
.SI 5
string * query_verbose_types()
.EI
.SP 7 5

This method returns the current verbose/brief types.

.EP

.SI 3
* %^BOLD%^remove_follower%^RESET%^
.EI
.SI 5
int remove_follower(object ob)
.EI
.SP 7 5

This method removes a follower from the living object.  A follower will
happily follow around the person in front.  Used in the unfollow
and lose commands.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object to remove from the follow list
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 on success, 0 on failure

.EP

.SI 3
* %^BOLD%^reorient_rel%^RESET%^
.EI
.SI 5
string reorient_rel(string word)
.EI

.SI 3
* %^BOLD%^reset_dragging%^RESET%^
.EI
.SI 5
void reset_dragging()
.EI

.SI 3
* %^BOLD%^return_to_default_position%^RESET%^
.EI
.SI 5
void return_to_default_position(int leaving)
.EI
.SP 7 5

This method returns the living object to its default position.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
leaving - this is if we are leaving the room
.EP

.SI 3
* %^BOLD%^room_look%^RESET%^
.EI
.SI 5
int room_look()
.EI

.SI 3
* %^BOLD%^run_away%^RESET%^
.EI
.SI 5
int run_away()
.EI
.SP 7 5

This method is called when the creature wimpies.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the wimpying was successful, 0 if not.

.EP

.SI 3
* %^BOLD%^set_al%^RESET%^
.EI
.SI 5
void set_al(int number)
.EI
.SP 7 5

This method sets the current alignment of the living
object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
number - the new alignment for the object
.EP

.SI 3
* %^BOLD%^set_always_use_default_position%^RESET%^
.EI
.SI 5
void set_always_use_default_position(int flag)
.EI
.SP 7 5

This method sets the always the flag to always use the default position.
If this is set then rooms cannot override the position message which is
displayed by the object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
flag - if we should always use the default position
.EP

.SI 3
* %^BOLD%^set_default_position%^RESET%^
.EI
.SI 5
void set_default_position(mixed str)
.EI
.SP 7 5

This sets the default position of the object.  This is used to
allow things to default to some other exciting off beat and froopy
default position.  The paramater to this is the command code
used to put the object back into the default position or an
array which contains three or one elements, the first is the string
to use as the position, the second and third (if they exist) are
the string to tell the person when changing and the string to tell
everyone else when changing position.  The paramer can also be
a function pointer, if it is then it will be evaluated and
have two parameters passed into the function.  The first is
the object returing to the position and the second is the leaving
flag.


Please note!  After setting the position you will need to make the object return to the default position to use it. 

A second note!  A room can also define a query_default_position() function which will be called, if this returns a value (and the override flag is not set) then that will be used for the default position.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the new default position
.EP

.SI 3
* %^BOLD%^set_deity%^RESET%^
.EI
.SI 5
void set_deity(string word)
.EI
.SP 7 5

This method sets the current deity the living object is
worshipping.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the new deity
.EP

.SI 3
* %^BOLD%^set_destmsg%^RESET%^
.EI
.SI 5
int set_destmsg(string str)
.EI
.SP 7 5

The dest message. Used when the cre dests something.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the message to be seen

.EP

.SI 3
* %^BOLD%^set_dragging%^RESET%^
.EI
.SI 5
void set_dragging(object thing)
.EI

.SI 3
* %^BOLD%^set_facing%^RESET%^
.EI
.SI 5
void set_facing(mixed args)
.EI

.SI 3
* %^BOLD%^set_it_them%^RESET%^
.EI
.SI 5
void set_it_them(mixed args)
.EI
.SP 7 5

This method sets the current array used for calculating 'it' and
'them' in the find_match code.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
args - the new array of objects
.EP

.SI 3
* %^BOLD%^set_mmsgin%^RESET%^
.EI
.SI 5
int set_mmsgin(string str)
.EI
.SP 7 5

The teleport in message.  Sets the message to be seen when
a player telerpots into the room.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the message to be seen

.EP

.SI 3
* %^BOLD%^set_mmsgout%^RESET%^
.EI
.SI 5
int set_mmsgout(string str)
.EI
.SP 7 5

Sets the teleport out message.  If the player teleports out, this
is the message seen.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the teleport message

.EP

.SI 3
* %^BOLD%^set_msgin%^RESET%^
.EI
.SI 5
int set_msgin(string str)
.EI
.SP 7 5

This is the method used to set the current message to use when
entering a room.   A $N in the string will be expanded to the
name and a $F will be expanded to the from direction.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the message to print when entering a room
.EP

.SI 3
* %^BOLD%^set_msgout%^RESET%^
.EI
.SI 5
int set_msgout(string str)
.EI
.SP 7 5

This is the method used to query the current message to use when
exiting a room.   A $N in the string will be expanded to the
name and a $T will be expanded to the to direction.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the message to print when entering a room.
.EP

.SI 3
* %^BOLD%^set_position%^RESET%^
.EI
.SI 5
void set_position(string name)
.EI
.SP 7 5

This sets the current position of the object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the string to use for the position
.EP

.SI 3
* %^BOLD%^set_position_multiple%^RESET%^
.EI
.SI 5
void set_position_multiple(int mult)
.EI
.SP 7 5

This sets fact that the object being referenced is one of many.  So
you get something more like 'xx is sitting on one of the couches'.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
mult - 0 if non-multiple, 1 if multiple
.EP

.SI 3
* %^BOLD%^set_position_on%^RESET%^
.EI
.SI 5
void set_position_on(mixed ob)
.EI
.SP 7 5

This sets the current object which is being referenced as being
'on', 'beside' or 'at'.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object being referenced
.EP

.SI 3
* %^BOLD%^set_position_type%^RESET%^
.EI
.SI 5
void set_position_type(string type)
.EI
.SP 7 5

This sets way the object is being referenced.  The 'on', 'at', 'beside'
or whatever strings.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the new type string
.EP

.SI 3
* %^BOLD%^set_verbose%^RESET%^
.EI
.SI 5
void set_verbose(string type, int val)
.EI
.SP 7 5

This method sets the verbosity for a given type.

.EP

.SI 3
* %^BOLD%^test_add%^RESET%^
.EI
.SI 5
int test_add(object ob, int flag)
.EI
.SP 7 5

This method handles the cannot get flags.  This is placed
into the living object so that things which are marked as
being unable to be picked up can still be put into normal
containers.  The upwards checking of containers stops here.
This should make it so that objects marked as unable to be
picked up cannot be put into objects in the players
inventory.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the object can be added, 0 if not.

.EP

.SI 3
* %^BOLD%^test_remove%^RESET%^
.EI
.SI 5
int test_remove(object ob, int flag, mixed dest)
.EI
.SP 7 5

This method handles the cannot drop flags.  This is placed
into the living object so that things which are marked as
being unable to be dropped can still be remove from normal
containers.  This does all sorts of other exciting checks
now.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the object can be added, 0 if not.

.EP


