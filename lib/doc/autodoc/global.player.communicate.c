.DT
communicate.c
$MUDNAME$ autodoc help
communicate.c

.SH Description
.SP 5 5

The communication handling code for the player object.  Controls all
the basic channels and basic communication stuff.
.EP
.SP 10 5


Written by Pinkfish

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/player.h, /include/language.h, /include/drinks.h, /include/library.h and /include/playtesters.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_language%^RESET%^
.EI
.SI 5
void add_language(string lang)
.EI

.SI 3
* %^BOLD%^adjust_max_sp%^RESET%^
.EI
.SI 5
int adjust_max_sp(int number)
.EI

.SI 3
* %^BOLD%^adjust_sp%^RESET%^
.EI
.SI 5
int adjust_sp(int number)
.EI

.SI 3
* %^BOLD%^comm_event%^RESET%^
.EI
.SI 5
void comm_event(mixed thing, string type, string start, string rest, string lang)
.EI

.SI 3
* %^BOLD%^communicate_commands%^RESET%^
.EI
.SI 5
void communicate_commands()
.EI

.SI 3
* %^BOLD%^do_converse%^RESET%^
.EI
.SI 5
void do_converse(string str)
.EI

.SI 3
* %^BOLD%^do_whisper%^RESET%^
.EI
.SI 5
void do_whisper(object ob, string event_type, string start, string type, string words, object * others, string lang, object me)
.EI

.SI 3
* %^BOLD%^query_current_language%^RESET%^
.EI
.SI 5
string query_current_language()
.EI

.SI 3
* %^BOLD%^query_ignored_by%^RESET%^
.EI
.SI 5
object * query_ignored_by(object * people)
.EI
.SP 7 5

This method returns the people in the array who are ignoring this
player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
people - the people to check to see for ignoring
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the array of people that are ignoring this player
.EP

.SI 3
* %^BOLD%^query_ignoring%^RESET%^
.EI
.SI 5
object * query_ignoring(object * people)
.EI
.SP 7 5

This method returns the people in the array who this player is currently
ignoring.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
people - the people to check to see if they are being ignored
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the people who are being ignored from the array
.EP

.SI 3
* %^BOLD%^query_language%^RESET%^
.EI
.SI 5
int query_language(string str)
.EI

.SI 3
* %^BOLD%^query_languages%^RESET%^
.EI
.SI 5
string * query_languages()
.EI

.SI 3
* %^BOLD%^query_max_sp%^RESET%^
.EI
.SI 5
int query_max_sp()
.EI

.SI 3
* %^BOLD%^query_real_max_sp%^RESET%^
.EI
.SI 5
int query_real_max_sp()
.EI

.SI 3
* %^BOLD%^query_sp%^RESET%^
.EI
.SI 5
int query_sp()
.EI

.SI 3
* %^BOLD%^remove_language%^RESET%^
.EI
.SI 5
void remove_language(string lang)
.EI

.SI 3
* %^BOLD%^set_language%^RESET%^
.EI
.SI 5
int set_language(string str)
.EI

.SI 3
* %^BOLD%^set_max_sp%^RESET%^
.EI
.SI 5
int set_max_sp(int number)
.EI

.SI 3
* %^BOLD%^set_sp%^RESET%^
.EI
.SI 5
int set_sp(int number)
.EI


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^do_wombat_repeat%^RESET%^
.EI
.SI 5
int do_wombat_repeat(string str, string com)
.EI


