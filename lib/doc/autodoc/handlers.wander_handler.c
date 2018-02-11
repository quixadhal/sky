.DT
wander_handler.c
$MUDNAME$ autodoc help
wander_handler.c

.SH Description
.SP 5 5

Handles NPCs wandering randomly around the place and NPCs
following a route to a destination.
.EP
.SP 10 5


Written by Wodan and Pinkfish
.EP



.SH See also
.SP 5 5
/str/npc->move_me_to()
.EP
.SH Change history
.SP 5 5
Rewritten by Wodan 19-6-1997.

Rewritten by Sandoz 23-6-2002.

.EP

.SH Classes

.SI 3
* %^BOLD%^route_traveller%^RESET%^
class route_traveller {
int movetime;
int delay;
string dest;
}

.EI
.SP 7 5

This class stores the data for a single NPC that is following a route.

.EP


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^delete_move_after%^RESET%^
.EI
.SI 5
void delete_move_after(object ob)
.EI
.SP 7 5

This method makes an NPC to stop wandering.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the NPC to stop wandering

.EP

.SI 3
* %^BOLD%^move_after%^RESET%^
.EI
.SI 5
void move_after(int runaway)
.EI
.SP 7 5

This method puts an NPC into the random movement group.
This is called from the set_move_after code in the NPC object.
You should not need to call this function directly.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
runaway - whether or not this is a wimpy attempt
.EP

.SI 3
* %^BOLD%^move_me_please%^RESET%^
.EI
.SI 5
int move_me_please(int delay, string dest)
.EI
.SP 7 5

Called from the NPC to start them moving.  This should not
need to be called inside your code.  It is called from the
function move_me_to in the NPC object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
delay - the delay between each move
.EP
.SP 9 5
dest - the destination room for the npc
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 if it failed and 1 on success

.EP

.SI 3
* %^BOLD%^query_moving%^RESET%^
.EI
.SI 5
mapping query_moving()
.EI
.SP 7 5

This method returns the mapping of move times and NPCs
that are going to move at a particular move time.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the moving NPCs mapping

.EP

.SI 3
* %^BOLD%^query_travellers%^RESET%^
.EI
.SI 5
mapping query_travellers()
.EI
.SP 7 5

This method returns the mapping of all travelling NPCs
and their related data.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a mapping of all travelling NPCs and their data

.EP

.SI 3
* %^BOLD%^query_wanderers%^RESET%^
.EI
.SI 5
mapping query_wanderers()
.EI
.SP 7 5

This method returns the mapping of all wandering NPCs
and their related data.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a mapping of all wandering NPCs and their data

.EP


