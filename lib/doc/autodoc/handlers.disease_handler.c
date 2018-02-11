.DT
disease_handler.c
$MUDNAME$ autodoc help
disease_handler.c

.SH Description
.SP 5 5

.EP
.SP 10 5

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/diseases.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^apply_effect%^RESET%^
.EI
.SI 5
void apply_effect(object player, string effect, int severity)
.EI
.SP 7 5

This method can catch diseases that need specific syntaxes to be
activated. If the disease isn't listed, it is just applied normally.

.EP

.SI 3
* %^BOLD%^choose_disease%^RESET%^
.EI
.SI 5
string choose_disease()
.EI
.SP 7 5

This method calculates a mapping of the chances for each particular
disease occuring.
It then chooses the actual disease.

.EP

.SI 3
* %^BOLD%^consume_food%^RESET%^
.EI
.SI 5
void consume_food(object player, int decomposition, int weight, string type)
.EI

.SI 3
* %^BOLD%^stats%^RESET%^
.EI
.SI 5
mixed stats()
.EI


