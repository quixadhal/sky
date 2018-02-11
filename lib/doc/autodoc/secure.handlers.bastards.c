.DT
bastards.c
$MUDNAME$ autodoc help
bastards.c

.SH Description
.SP 5 5

New player banning changed by Pinkfish June 1996.
Changed to make the site access stuff timeout. Pinkfish July 1997.

.EP
.SP 10 5

.EP

.SH Includes
.SP 5 5
This class includes the following files /secure/include/login.h, /secure/include/access.h, /include/mail.h, /include/player_handler.h, /include/playerinfo.h and /secure/include/login_handler.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^change_access%^RESET%^
.EI
.SI 5
int change_access(string * address, string ident, int level, string reason, int timeout)
.EI

.SI 3
* %^BOLD%^check_access%^RESET%^
.EI
.SI 5
int check_access(object ob, int newish)
.EI

.SI 3
* %^BOLD%^no_new_players%^RESET%^
.EI
.SI 5
int no_new_players(object ob)
.EI

.SI 3
* %^BOLD%^no_players%^RESET%^
.EI
.SI 5
int no_players(object ob)
.EI

.SI 3
* %^BOLD%^query_access%^RESET%^
.EI
.SI 5
int query_access(string * address, string ident)
.EI

.SI 3
* %^BOLD%^query_all_access%^RESET%^
.EI
.SI 5
mapping query_all_access()
.EI

.SI 3
* %^BOLD%^query_player_ob%^RESET%^
.EI
.SI 5
string query_player_ob(string name, int tell_suspend)
.EI

.SI 3
* %^BOLD%^query_prevent_shadow%^RESET%^
.EI
.SI 5
int query_prevent_shadow()
.EI

.SI 3
* %^BOLD%^query_reason%^RESET%^
.EI
.SI 5
string query_reason(string * address, string ident)
.EI

.SI 3
* %^BOLD%^query_suspended%^RESET%^
.EI
.SI 5
mixed * query_suspended(string name)
.EI

.SI 3
* %^BOLD%^suspend_person%^RESET%^
.EI
.SI 5
int suspend_person(string str, int tim, string reason)
.EI

.SI 3
* %^BOLD%^unsuspend_person%^RESET%^
.EI
.SI 5
int unsuspend_person(string str)
.EI


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^add_access%^RESET%^
.EI
.SI 5
mixed add_access(mixed bing, string * address, string ident, int level, string reason, int timeout)
.EI

.SI 3
* %^BOLD%^timeout_access%^RESET%^
.EI
.SI 5
mapping timeout_access(mapping bing)
.EI


