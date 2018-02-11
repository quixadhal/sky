.DT
virtuals.c
$MUDNAME$ autodoc help
virtuals.c

.SH Description
.SP 5 5

This handler fixes up virtual objects if their files change, so that their static variables will be adjusted.
.EP
.SP 10 5


Written by Dragonkin


.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_data%^RESET%^
.EI
.SI 5
void add_data(string path)
.EI
.SP 7 5

Adds a path and its static auto load information to the mapping
and cleans the mapping and paths array.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
path - the path of the object to add

.EP

.SI 3
* %^BOLD%^add_forbidden%^RESET%^
.EI
.SI 5
int add_forbidden(string path)
.EI

.SI 3
* %^BOLD%^add_missing%^RESET%^
.EI
.SI 5
int add_missing(string path)
.EI

.SI 3
* %^BOLD%^new_data%^RESET%^
.EI
.SI 5
mapping new_data(string path)
.EI
.SP 7 5

Called by virtual objects as they are being cloned, if their timestamp is older than their file.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
path - the path of the virtual object
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the object's static auto load info if any, otherwise 0

.EP

.SI 3
* %^BOLD%^query_forbidden%^RESET%^
.EI
.SI 5
int query_forbidden(string path)
.EI

.SI 3
* %^BOLD%^query_forbidden_paths%^RESET%^
.EI
.SI 5
string * query_forbidden_paths()
.EI

.SI 3
* %^BOLD%^query_missing_paths%^RESET%^
.EI
.SI 5
string * query_missing_paths()
.EI

.SI 3
* %^BOLD%^remove_forbidden%^RESET%^
.EI
.SI 5
void remove_forbidden(string path)
.EI

.SI 3
* %^BOLD%^remove_missing%^RESET%^
.EI
.SI 5
void remove_missing(string path)
.EI

.SI 3
* %^BOLD%^save_me%^RESET%^
.EI
.SI 5
void save_me()
.EI
.SP 7 5

Save the current state.

.EP


