.DT
poison_effect.c
$MUDNAME$ autodoc help
poison_effect.c

.SH Description
.SP 5 5

This is the effect skelton docs.  This effect
has a classification of "poison.hp".


Describe the arguments in here. 

This effect has a shadow associated with it.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects

.EP
.SH Includes
.SP 5 5
This class includes the following files /include/effect.h and /std/effects/poisons/path.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^begining%^RESET%^
.EI
.SI 5
int begining(object player, mixed arg)
.EI

.SI 3
* %^BOLD%^effect_heart_beat%^RESET%^
.EI
.SI 5
int effect_heart_beat(object player, int hbnum, mixed arg, int id)
.EI

.SI 3
* %^BOLD%^query_secs_between_hb%^RESET%^
.EI
.SI 5
int query_secs_between_hb()
.EI

.SI 3
* %^BOLD%^reset_hb%^RESET%^
.EI
.SI 5
void reset_hb()
.EI


