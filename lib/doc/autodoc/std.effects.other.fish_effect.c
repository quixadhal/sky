.DT
fish_effect.c
$MUDNAME$ autodoc help
fish_effect.c

.SH Description
.SP 5 5

This is the effect skelton docs.  This effect
has a classification of "potion.alteration.female".


Describe the arguments in here. 

This effect has a shadow associated with it.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects

.EP
.SH Inherits
.SP 5 5
This class inherits the following classes /std/effects/basic.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/effect.h and /std/effects/other/path.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^action_drunk%^RESET%^
.EI
.SI 5
void action_drunk(object ob, int * coord, int quantity)
.EI

.SI 3
* %^BOLD%^effect_heart_beat%^RESET%^
.EI
.SI 5
mixed effect_heart_beat(object them, int hb_no, mixed arg, int id)
.EI

.SI 3
* %^BOLD%^query_attrs%^RESET%^
.EI
.SI 5
mixed * query_attrs(int * coord)
.EI

.SI 3
* %^BOLD%^query_coordinate%^RESET%^
.EI
.SI 5
mixed * query_coordinate()
.EI

.SI 3
* %^BOLD%^query_heart_beat_frequency%^RESET%^
.EI
.SI 5
int query_heart_beat_frequency()
.EI


