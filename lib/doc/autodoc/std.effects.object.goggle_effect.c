.DT
goggle_effect.c
$MUDNAME$ autodoc help
goggle_effect.c

.SH Includes
.SP 5 5
This class includes the following files /include/effect.h and /std/effects/object/path.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^beginning%^RESET%^
.EI
.SI 5
void beginning(object player, int time, int id)
.EI

.SI 3
* %^BOLD%^end%^RESET%^
.EI
.SI 5
void end(object player, int time)
.EI

.SI 3
* %^BOLD%^merge_effect%^RESET%^
.EI
.SI 5
void merge_effect(object player, int time1, int time2)
.EI

.SI 3
* %^BOLD%^query_classification%^RESET%^
.EI
.SI 5
string query_classification()
.EI

.SI 3
* %^BOLD%^query_indefinite%^RESET%^
.EI
.SI 5
int query_indefinite()
.EI

.SI 3
* %^BOLD%^query_shadow_ob%^RESET%^
.EI
.SI 5
string query_shadow_ob()
.EI

.SI 3
* %^BOLD%^restart%^RESET%^
.EI
.SI 5
void restart(object player, int amount, int id)
.EI

.SI 3
* %^BOLD%^test_for_effect%^RESET%^
.EI
.SI 5
int test_for_effect(object thing)
.EI


