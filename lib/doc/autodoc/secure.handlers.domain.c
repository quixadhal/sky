.DT
domain.c
$MUDNAME$ autodoc help
domain.c

.SH Inherits
.SP 5 5
This class inherits the following classes /secure/std/modules/group.
.EP

.SH Includes
.SP 5 5
This class includes the following files /secure/include/access.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_creator%^RESET%^
.EI
.SI 5
string add_creator(string name)
.EI

.SI 3
* %^BOLD%^add_domain%^RESET%^
.EI
.SI 5
string add_domain(string name)
.EI

.SI 3
* %^BOLD%^add_leader%^RESET%^
.EI
.SI 5
mixed add_leader(string domain, string name)
.EI

.SI 3
* %^BOLD%^add_member%^RESET%^
.EI
.SI 5
mixed add_member(string domain, string name)
.EI

.SI 3
* %^BOLD%^add_senior%^RESET%^
.EI
.SI 5
mixed add_senior(string domain, string name)
.EI

.SI 3
* %^BOLD%^dwep%^RESET%^
.EI
.SI 5
nomask void dwep()
.EI

.SI 3
* %^BOLD%^load_me%^RESET%^
.EI
.SI 5
void load_me()
.EI

.SI 3
* %^BOLD%^log_who%^RESET%^
.EI
.SI 5
mixed log_who(string domain, string file)
.EI

.SI 3
* %^BOLD%^query_creator%^RESET%^
.EI
.SI 5
varargs int query_creator(string domain, string name)
.EI

.SI 3
* %^BOLD%^query_creators%^RESET%^
.EI
.SI 5
varargs string * query_creators(string domain)
.EI

.SI 3
* %^BOLD%^query_domain%^RESET%^
.EI
.SI 5
int query_domain(string name)
.EI

.SI 3
* %^BOLD%^query_domains%^RESET%^
.EI
.SI 5
string * query_domains(string name)
.EI

.SI 3
* %^BOLD%^query_leader%^RESET%^
.EI
.SI 5
varargs int query_leader(string domain, string name)
.EI

.SI 3
* %^BOLD%^query_leaders%^RESET%^
.EI
.SI 5
string * query_leaders(string domain)
.EI

.SI 3
* %^BOLD%^query_long%^RESET%^
.EI
.SI 5
string query_long(string name)
.EI

.SI 3
* %^BOLD%^query_member%^RESET%^
.EI
.SI 5
int query_member(string domain, string name)
.EI

.SI 3
* %^BOLD%^query_members%^RESET%^
.EI
.SI 5
string * query_members(string domain)
.EI

.SI 3
* %^BOLD%^query_senior%^RESET%^
.EI
.SI 5
varargs int query_senior(string domain, string name)
.EI

.SI 3
* %^BOLD%^query_seniors%^RESET%^
.EI
.SI 5
string * query_seniors(string domain)
.EI

.SI 3
* %^BOLD%^query_short%^RESET%^
.EI
.SI 5
varargs string query_short(string domain, string user)
.EI

.SI 3
* %^BOLD%^remove_creator%^RESET%^
.EI
.SI 5
string remove_creator(string str)
.EI

.SI 3
* %^BOLD%^remove_domain%^RESET%^
.EI
.SI 5
string remove_domain(string name)
.EI

.SI 3
* %^BOLD%^remove_leader%^RESET%^
.EI
.SI 5
mixed remove_leader(string domain, string name)
.EI

.SI 3
* %^BOLD%^remove_member%^RESET%^
.EI
.SI 5
mixed remove_member(string domain, string name)
.EI

.SI 3
* %^BOLD%^remove_senior%^RESET%^
.EI
.SI 5
mixed remove_senior(string domain, string name)
.EI

.SI 3
* %^BOLD%^save_me%^RESET%^
.EI
.SI 5
void save_me()
.EI


