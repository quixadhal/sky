.DT
smurf.c
$MUDNAME$ autodoc help
smurf.c

.SH Description
.SP 5 5

Turns the player into a smurf.  The classification of this effect is
is "misc.curse.smurf".


If a time is specifed then this is how long the effect lasts. If no time is specifed then the effect is never removed. 

This effect has a shadow associated with it.
.EP
.SP 10 5

.EP

.SH Example
.SI 5
// Give them the curse for 6 minutes
add_effect("/std/effects/curses/smurf", 360);
// Give them the curse forever!
add_effect("/std/effects/curse/smurf");

.EI
.SH Includes
.SP 5 5
This class includes the following files /include/effect.h.
.EP

