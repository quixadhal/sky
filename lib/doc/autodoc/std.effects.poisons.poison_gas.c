.DT
poison_gas.c
$MUDNAME$ autodoc help
poison_gas.c

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
.SH Inherits
.SP 5 5
This class inherits the following classes /std/effects/basic.
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
* %^BOLD%^beginning%^RESET%^
.EI
.SI 5
int beginning(object player, int amount, int id)
.EI

.SI 3
* %^BOLD%^do_poison%^RESET%^
.EI
.SI 5
void do_poison(object player, int amount, int id)
.EI

.SI 3
* %^BOLD%^merge_effect%^RESET%^
.EI
.SI 5
int merge_effect(object player, int amount1, int amount2)
.EI

.SI 3
* %^BOLD%^query_name%^RESET%^
.EI
.SI 5
string query_name()
.EI


