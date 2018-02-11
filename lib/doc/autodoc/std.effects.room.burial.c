.DT
burial.c
$MUDNAME$ autodoc help
burial.c

.SH Description
.SP 5 5
 An effect to keep track of things which are burried in a room.

.EP
.SP 10 5


Written by Pinkfish

.EP



.SH See also
.SP 5 5
help::effects
.EP
.SH Includes
.SP 5 5
This class includes the following files /include/effect.h and /include/cmds/bury.h.
.EP

.SH Classes

.SI 3
* %^BOLD%^arg_stuff%^RESET%^
class arg_stuff {
object cont;
object * obs;
int * added;
}

.EI


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^query_buried_container%^RESET%^
.EI
.SI 5
object query_buried_container(object room)
.EI
.SP 7 5

This method returns the container that has all the buried items
in it.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
room - the room to get the burial object from
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the container with the buried items

.EP

.SI 3
* %^BOLD%^query_buried_objects%^RESET%^
.EI
.SI 5
object * query_buried_objects(object room)
.EI
.SP 7 5

This method returns all the stuff buried here.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
room - the room to get the burial objects from
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the array of buried objects

.EP

.SI 3
* %^BOLD%^remove_from_burial%^RESET%^
.EI
.SI 5
int remove_from_burial(object room, object ob)
.EI
.SP 7 5

This method removes the specified object from the queue to be buried.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
room - the room to remove the object from the queue of
.EP
.SP 9 5
ob - the object to remove from the queue
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if it is removed, 0 if not

.EP


