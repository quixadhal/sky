.DT
remembered_place.c
$MUDNAME$ autodoc help
remembered_place.c

.SH Description
.SP 5 5

Contains a list of locations the person remembers.
Added by the Remember spell. Name may change.
This effect does not have a shadow associated with it.

.EP
.SP 10 5

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/tasks.h and /include/effect.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^beginning%^RESET%^
.EI
.SI 5
mixed beginning(object person, mixed args)
.EI

.SI 3
* %^BOLD%^end%^RESET%^
.EI
.SI 5
void end(object person, mixed args)
.EI

.SI 3
* %^BOLD%^merge_effect%^RESET%^
.EI
.SI 5
mixed merge_effect(object person, mixed old_arg, mixed new_arg)
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
* %^BOLD%^restart%^RESET%^
.EI
.SI 5
mixed restart(object person, mixed args, int id)
.EI


