.DT
group.c
$MUDNAME$ autodoc help
group.c

.SH Description
.SP 5 5

This is the effect added to a living when he becomes
a member of a group.


The argument should be a string designating the name of the group.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects

.EP
.SH Includes
.SP 5 5
This class includes the following files /include/command.h, /include/effect.h and /include/group_handler.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^beginning%^RESET%^
.EI
.SI 5
void beginning(object player, string args, int sid)
.EI

.SI 3
* %^BOLD%^end%^RESET%^
.EI
.SI 5
void end(object player, string args, int sid)
.EI

.SI 3
* %^BOLD%^merge_effect%^RESET%^
.EI
.SI 5
void merge_effect(object player, string args, int sid)
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
void restart(object player, string args, int sid)
.EI

.SI 3
* %^BOLD%^survive_death%^RESET%^
.EI
.SI 5
int survive_death()
.EI


