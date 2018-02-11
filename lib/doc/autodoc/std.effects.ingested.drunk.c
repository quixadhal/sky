.DT
drunk.c
$MUDNAME$ autodoc help
drunk.c

.SH Description
.SP 5 5

This is the effect skelton docs.  This effect
has a classification of "body.drunk".


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
This class includes the following files /include/position.h, /include/effect.h, /include/living.h and /std/effects/ingested/path.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^come_around%^RESET%^
.EI
.SI 5
void come_around(object person)
.EI

.SI 3
* %^BOLD%^counter%^RESET%^
.EI
.SI 5
int counter(object person, int bonus)
.EI

.SI 3
* %^BOLD%^drunk_behaviour%^RESET%^
.EI
.SI 5
void drunk_behaviour(object person, int *)
.EI

.SI 3
* %^BOLD%^test_remove%^RESET%^
.EI
.SI 5
int test_remove(object player,  int, int enum, int bonus)
.EI

.SI 3
* %^BOLD%^wander_about%^RESET%^
.EI
.SI 5
void wander_about(object person)
.EI


