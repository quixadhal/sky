.DT
general_hypothermia.c
$MUDNAME$ autodoc help
general_hypothermia.c

.SH Description
.SP 5 5

This effect has a classification of "disease.hypothermia".


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
This class includes the following files /include/effect.h, /include/clothing.h and /include/weather.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^calc_personal_temp%^RESET%^
.EI
.SI 5
int calc_personal_temp(object player)
.EI

.SI 3
* %^BOLD%^extra_look%^RESET%^
.EI
.SI 5
string extra_look(object player)
.EI

.SI 3
* %^BOLD%^restart%^RESET%^
.EI
.SI 5
void restart(object player)
.EI

.SI 3
* %^BOLD%^shiver%^RESET%^
.EI
.SI 5
void shiver(object player, int temperature, int id)
.EI

.SI 3
* %^BOLD%^stat_adjusts%^RESET%^
.EI
.SI 5
void stat_adjusts(object player, int temperature, int id)
.EI


