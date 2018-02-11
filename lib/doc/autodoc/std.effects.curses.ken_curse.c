.DT
ken_curse.c
$MUDNAME$ autodoc help
ken_curse.c

.SH Description
.SP 5 5

Makes the player speak like an obnoxious english person.
The classification of the effect is "misc.curse.ken".


The argument to the effect specifies how long the effect will lasyt for. 

This effect has  ashadw associated with it
.EP
.SP 10 5

.EP

.SH Example
.SI 5
// give them the curse for 3 minutes
add_effect("/std/effects/curses/ken_curse", 360);

.EI
.SH Includes
.SP 5 5
This class includes the following files /include/effect.h.
.EP

