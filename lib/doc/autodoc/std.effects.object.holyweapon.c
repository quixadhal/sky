.DT
holyweapon.c
$MUDNAME$ autodoc help
holyweapon.c

.SH Description
.SP 5 5

This effect makes the object a holy weapon.  This effect
has a classification of "object.holyweapon".


The argument specifies the time in seconds for the effect to last. 

This effect has a shadow associated with it.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects
.EP
.SH Example
.SI 5
// last for 2 minutes
ob->add_effect("/std/effects/object/holyweapon", 120);

.EI
.SH Includes
.SP 5 5
This class includes the following files /include/effect.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^restart%^RESET%^
.EI
.SI 5
void restart(object thing, mixed args, int id)
.EI


