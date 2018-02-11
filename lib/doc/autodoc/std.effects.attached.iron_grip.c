.DT
iron_grip.c
$MUDNAME$ autodoc help
iron_grip.c

.SH Description
.SP 5 5

This is the effect skelton docs.  This effect
has a classification of "magic.hands.strength".


Describe the arguments in here.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects

.EP
.SH Includes
.SP 5 5
This class includes the following files /include/effects/stat_adjustment.h, /include/effect.h and /std/effects/attached/path.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^decrease_points%^RESET%^
.EI
.SI 5
void decrease_points(object player)
.EI

.SI 3
* %^BOLD%^person_removing_item%^RESET%^
.EI
.SI 5
void person_removing_item(object item, object player)
.EI
.SP 7 5

This is called when the gloves are removed..

.EP

.SI 3
* %^BOLD%^restart%^RESET%^
.EI
.SI 5
void restart(object player)
.EI

.SI 3
* %^BOLD%^test_for_effect%^RESET%^
.EI
.SI 5
int test_for_effect(object thing)
.EI


