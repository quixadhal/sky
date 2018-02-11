.DT
privilege.c
$MUDNAME$ autodoc help
privilege.c

.SH Includes
.SP 5 5
This class includes the following files /secure/include/access.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_privilege%^RESET%^
.EI
.SI 5
string add_privilege(string privilege, string privileged)
.EI

.SI 3
* %^BOLD%^add_privilege_type%^RESET%^
.EI
.SI 5
string add_privilege_type(string privilege)
.EI

.SI 3
* %^BOLD%^dwep%^RESET%^
.EI
.SI 5
nomask void dwep()
.EI

.SI 3
* %^BOLD%^query_privilege%^RESET%^
.EI
.SI 5
int query_privilege(string privilege, string privileged)
.EI

.SI 3
* %^BOLD%^query_privilege_types%^RESET%^
.EI
.SI 5
string * query_privilege_types()
.EI

.SI 3
* %^BOLD%^query_privileges%^RESET%^
.EI
.SI 5
string * query_privileges(string privileged)
.EI

.SI 3
* %^BOLD%^remove_privilege%^RESET%^
.EI
.SI 5
string remove_privilege(string privilege, string privileged)
.EI

.SI 3
* %^BOLD%^remove_privilege_type%^RESET%^
.EI
.SI 5
string remove_privilege_type(string privilege)
.EI

.SI 3
* %^BOLD%^save_me%^RESET%^
.EI
.SI 5
void save_me()
.EI


