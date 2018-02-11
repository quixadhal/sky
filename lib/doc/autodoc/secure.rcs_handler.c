.DT
rcs_handler.c
$MUDNAME$ autodoc help
rcs_handler.c

.SH Description
.SP 5 5

Return a mapping of non-creators who have files locked and which files
those people have locked.

.EP
.SP 10 5

.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_lock%^RESET%^
.EI
.SI 5
void add_lock(mixed cre, string file)
.EI

.SI 3
* %^BOLD%^query_locks%^RESET%^
.EI
.SI 5
string * query_locks(mixed cre)
.EI

.SI 3
* %^BOLD%^query_non_creators%^RESET%^
.EI
.SI 5
mapping query_non_creators()
.EI

.SI 3
* %^BOLD%^remove_lock%^RESET%^
.EI
.SI 5
void remove_lock(mixed cre, string file)
.EI


