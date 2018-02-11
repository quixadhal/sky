.DT
gagged.c
$MUDNAME$ autodoc help
gagged.c

.SH Description
.SP 5 5

This effect has a classification of "mudlib.gagged".



.EP
.SP 10 5


Written by Shiannar
.EP



.SH See also
.SP 5 5
help::effects

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
* %^BOLD%^beginning%^RESET%^
.EI
.SI 5
void beginning(object player, mixed * arg)
.EI

.SI 3
* %^BOLD%^end%^RESET%^
.EI
.SI 5
void end(object player, mixed * arg)
.EI

.SI 3
* %^BOLD%^merge_effect%^RESET%^
.EI
.SI 5
mixed * merge_effect(object player, mixed * old_arg, mixed * new_arg)
.EI

.SI 3
* %^BOLD%^query_classification%^RESET%^
.EI
.SI 5
string query_classification()
.EI

.SI 3
* %^BOLD%^query_shadow_ob%^RESET%^
.EI
.SI 5
string query_shadow_ob()
.EI


