.DT
heat.c
$MUDNAME$ autodoc help
heat.c

.SH Description
.SP 5 5

This effect is for heating metals in a forge.  It lets people know
when something is red hot.

.EP
.SP 10 5

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/effect.h and /std/effects/object/path.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^change_temperature%^RESET%^
.EI
.SI 5
void change_temperature(object ob, int heat, int id)
.EI

.SI 3
* %^BOLD%^extra_look%^RESET%^
.EI
.SI 5
string extra_look(object ob)
.EI

.SI 3
* %^BOLD%^query_shadow_ob%^RESET%^
.EI
.SI 5
string query_shadow_ob()
.EI


