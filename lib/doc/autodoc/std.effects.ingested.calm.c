.DT
calm.c
$MUDNAME$ autodoc help
calm.c

.SH Description
.SP 5 5

This is the effect skelton docs.  This effect
has a classification of "body.calm".


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
This class includes the following files /include/effect.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^become_calm%^RESET%^
.EI
.SI 5
void become_calm(object player, int amount, int id)
.EI

.SI 3
* %^BOLD%^calm_down%^RESET%^
.EI
.SI 5
void calm_down(object player)
.EI

.SI 3
* %^BOLD%^query_apothecarial_effect%^RESET%^
.EI
.SI 5
string query_apothecarial_effect()
.EI

.SI 3
* %^BOLD%^reduce_amount%^RESET%^
.EI
.SI 5
void reduce_amount(object player, int amount, int id)
.EI


