.DT
alone.c
$MUDNAME$ autodoc help
alone.c

.SH Description
.SP 5 5

Make the player feel they are alone on the disc.  The classification of this
effect is "misc.curse.alone".


The argument to the effect does nothing at all.  The effect can only be removed by a call to remove effect.  It does not time out. 

This effect has a shadow associated with it.
.EP
.SP 10 5

.EP

.SH Example
.SI 5
add_effect("/std/effects/curses/alone");

.EI
.SH Includes
.SP 5 5
This class includes the following files /include/effect.h and /std/effects/curses/path.h.
.EP

