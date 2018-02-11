.DT
project.c
$MUDNAME$ autodoc help
project.c

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_project%^RESET%^
.EI
.SI 5
int add_project(string creator, string dom, string proj)
.EI

.SI 3
* %^BOLD%^clear_project%^RESET%^
.EI
.SI 5
int clear_project(string str)
.EI

.SI 3
* %^BOLD%^load_me%^RESET%^
.EI
.SI 5
void load_me()
.EI

.SI 3
* %^BOLD%^query_project%^RESET%^
.EI
.SI 5
int query_project(string creator, string dom, string proj)
.EI

.SI 3
* %^BOLD%^query_projects%^RESET%^
.EI
.SI 5
mixed query_projects(string str)
.EI

.SI 3
* %^BOLD%^remove_project%^RESET%^
.EI
.SI 5
int remove_project(string creator, string dom, string proj)
.EI

.SI 3
* %^BOLD%^save_me%^RESET%^
.EI
.SI 5
void save_me()
.EI


