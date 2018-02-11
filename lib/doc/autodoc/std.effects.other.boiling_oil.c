.DT
boiling_oil.c
$MUDNAME$ autodoc help
boiling_oil.c

.SH Description
.SP 5 5

This effect has a classification of "misc.boiling_oil".


Nasty effect which burns (and dries) you lots, then gradually burns you less and less.  It can be got rid of by getting your wetness over 80. 

The argument is the time in seconds you want the effect to last for. 


.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects

.EP
.SH Includes
.SP 5 5
This class includes the following files /include/effect.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^burn_them%^RESET%^
.EI
.SI 5
void burn_them(object player, int time, int id)
.EI
.SP 7 5

Burns the player unless they have wetness over 80.

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - The player to burn.
.EP
.SP 9 5
time - The time left.
.EP
.SP 9 5
id - The effect ID.

.EP


