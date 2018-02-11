.DT
tattoo.c
$MUDNAME$ autodoc help
tattoo.c

.SH Description
.SP 5 5

This is the effect skelton docs.  This effect
has a classification of "body.tattoo".


This effect takes an array of two members as the argument, the first member of which is the name of the bodypart onto which to add the tattoo, and the second member is the message to add.
.EP
.SP 10 5


Written by Aksu in July 1997
.EP



.SH See also
.SP 5 5
help::effects
.EP
.SH Change history
.SP 5 5
Rewritten partly - Sandoz, 18/10/2002.

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/effect.h.
.EP

.SH Classes

.SI 3
* %^BOLD%^tattoo_area%^RESET%^
class tattoo_area {
string full;
string area;
}

.EI


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^expand_tattooable%^RESET%^
.EI
.SI 5
string expand_tattooable(string bodypart, string replace)
.EI
.SP 7 5

This method returns the full tattoo area description and does the $p
expansion on it.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
bodypart - the bodypart to get the full description for
.EP
.SP 9 5
replace - what to expand the $p to

.EP

.SI 3
* %^BOLD%^query_tattoo_covered%^RESET%^
.EI
.SI 5
object * query_tattoo_covered(object player, string part)
.EI
.SP 7 5

This method scans through a player's clothes/armour and checks
whether or not a tattoo area is visible.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - the player to check
.EP
.SP 9 5
part - the bodypart to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the objects covering the tattoo, or 0 if visible

.EP

.SI 3
* %^BOLD%^query_tattooable%^RESET%^
.EI
.SI 5
int query_tattooable(string part)
.EI
.SP 7 5

This method queries whether or not the specified bodypart is
tattooable or not.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
part - the name of the bodypart
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the bodypart is tattooable, 0 if not

.EP

.SI 3
* %^BOLD%^query_tattooables%^RESET%^
.EI
.SI 5
string * query_tattooables()
.EI
.SP 7 5

This method returns an array of all tattooable bodyparts.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
an array of all tattooable bodyparts

.EP


