.DT
permission.c
$MUDNAME$ autodoc help
permission.c

.SH Description
.SP 5 5

Permision handling stuff. Originally coded by Who Knows.
This now uses a system based on the previous_object() stack.
Coded by Turrican, based on code in the Nightmare Mudlib.
- First working version on 7-10-96
- Hacked some more on 4-4-97

.EP
.SP 10 5

.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_grant_permission%^RESET%^
.EI
.SI 5
int add_grant_permission(string euid, string path)
.EI

.SI 3
* %^BOLD%^add_permission%^RESET%^
.EI
.SI 5
int add_permission(string euid, string path, int mask)
.EI

.SI 3
* %^BOLD%^add_read_permission%^RESET%^
.EI
.SI 5
int add_read_permission(string euid, string path)
.EI

.SI 3
* %^BOLD%^add_write_permission%^RESET%^
.EI
.SI 5
int add_write_permission(string euid, string path)
.EI

.SI 3
* %^BOLD%^check_creator%^RESET%^
.EI
.SI 5
nomask int check_creator(mixed ob, string func, string path, int mask)
.EI

.SI 3
* %^BOLD%^check_domain%^RESET%^
.EI
.SI 5
nomask int check_domain(mixed ob, string func, string path, int mask)
.EI

.SI 3
* %^BOLD%^check_project%^RESET%^
.EI
.SI 5
nomask int check_project(mixed ob, string func, string path, int mask)
.EI

.SI 3
* %^BOLD%^permission_check%^RESET%^
.EI
.SI 5
int permission_check()
.EI

.SI 3
* %^BOLD%^permission_match_path%^RESET%^
.EI
.SI 5
mixed permission_match_path(mapping m, string path)
.EI

.SI 3
* %^BOLD%^query_permissions%^RESET%^
.EI
.SI 5
mapping query_permissions()
.EI

.SI 3
* %^BOLD%^remove_grant_permission%^RESET%^
.EI
.SI 5
int remove_grant_permission(string euid, string path)
.EI

.SI 3
* %^BOLD%^remove_permission%^RESET%^
.EI
.SI 5
int remove_permission(string euid, string path, int mask)
.EI

.SI 3
* %^BOLD%^remove_read_permission%^RESET%^
.EI
.SI 5
int remove_read_permission(string euid, string path)
.EI

.SI 3
* %^BOLD%^remove_write_permission%^RESET%^
.EI
.SI 5
int remove_write_permission(string euid, string path)
.EI

.SI 3
* %^BOLD%^valid_grant%^RESET%^
.EI
.SI 5
int valid_grant(object euid, string path, int mask)
.EI


