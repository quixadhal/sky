.DT
holding.c
$MUDNAME$ autodoc help
holding.c

.SH Description
.SP 5 5

This has the controlling code for holding/weilding objects.
.EP
.SP 10 5


Written by Pinkfish

.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^query_free_limbs%^RESET%^
.EI
.SI 5
int query_free_limbs()
.EI
.SP 7 5

This method returns the number of free limbs on the living object.
A free limb!  Yes, have a couple of free legs, beat the rush!
Buy now!
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the number of free limbs
.EP

.SI 3
* %^BOLD%^query_holding%^RESET%^
.EI
.SI 5
object * query_holding()
.EI
.SP 7 5

This method returns the current holding array of the living object.
This has one element in the array for each object and a 0 is in the
array if that limb is not holding anything.  The positions correspond
to the positions returned by the query_limbs() function.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
an array of held objects
.EP

.SI 3
* %^BOLD%^query_limbs%^RESET%^
.EI
.SI 5
mixed query_limbs()
.EI
.SP 7 5

This method returns the an array of the names of the limbs
on the living object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
an array of limbs

.EP

.SI 3
* %^BOLD%^query_weapons%^RESET%^
.EI
.SI 5
object * query_weapons()
.EI
.SP 7 5

This method returns the currently held weapons on the living object.
This is an array of held items which are weapons and can be used
in combat.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the array of held weapons
.EP

.SI 3
* %^BOLD%^set_hold%^RESET%^
.EI
.SI 5
int * set_hold(object ob, int pos)
.EI
.SP 7 5

This method sets the object as held.  It will attempt to hold it
starting at the given position in the limbs array.


The return array contains the index of the limbs from which the item was added, if the array is 0 size then no items were added.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object to hold
.EP
.SP 9 5
pos - the position in the limb array to start holding at
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a array of limb numbers
.EP

.SI 3
* %^BOLD%^set_unhold%^RESET%^
.EI
.SI 5
int * set_unhold(object ob)
.EI
.SP 7 5

This method sets the object as unheld.  It will attempt to remove
the object from a held limb.


The return array contains the index of the limbs from which the item was removed, if the array is 0 size then no items were removed.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object to unhold
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a array of limb numbers
.EP


