.DT
potion_spellcheck.c
$MUDNAME$ autodoc help
potion_spellcheck.c

.SH Includes
.SP 5 5
This class includes the following files /include/effect.h, /include/player.h and /include/playtesters.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^beginning%^RESET%^
.EI
.SI 5
void beginning(object player, int args)
.EI

.SI 3
* %^BOLD%^end%^RESET%^
.EI
.SI 5
void end(object player, int args,  int)
.EI

.SI 3
* %^BOLD%^find_right_object%^RESET%^
.EI
.SI 5
object find_right_object(object plr)
.EI

.SI 3
* %^BOLD%^merge_effect%^RESET%^
.EI
.SI 5
int merge_effect(object player, int old_args, int new_args)
.EI

.SI 3
* %^BOLD%^message%^RESET%^
.EI
.SI 5
void message(object player, int args,  int)
.EI

.SI 3
* %^BOLD%^query_classification%^RESET%^
.EI
.SI 5
string query_classification()
.EI

.SI 3
* %^BOLD%^restart%^RESET%^
.EI
.SI 5
void restart(object player, mixed * args,  int)
.EI


