.DT
newbie_curse.c
$MUDNAME$ autodoc help
newbie_curse.c

.SH Includes
.SP 5 5
This class includes the following files /std/curses/path.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^destruct_curse%^RESET%^
.EI
.SI 5
int destruct_curse(string str)
.EI

.SI 3
* %^BOLD%^do_echo%^RESET%^
.EI
.SI 5
int do_echo(string str)
.EI

.SI 3
* %^BOLD%^do_echo_to%^RESET%^
.EI
.SI 5
int do_echo_to(string str)
.EI

.SI 3
* %^BOLD%^do_emote%^RESET%^
.EI
.SI 5
int do_emote(string str)
.EI

.SI 3
* %^BOLD%^do_emote_all%^RESET%^
.EI
.SI 5
int do_emote_all(string str)
.EI

.SI 3
* %^BOLD%^do_loud_say%^RESET%^
.EI
.SI 5
int do_loud_say(string str)
.EI

.SI 3
* %^BOLD%^do_say%^RESET%^
.EI
.SI 5
int do_say(string str)
.EI

.SI 3
* %^BOLD%^do_shout%^RESET%^
.EI
.SI 5
int do_shout(string str)
.EI

.SI 3
* %^BOLD%^do_talk%^RESET%^
.EI
.SI 5
int do_talk(string str)
.EI

.SI 3
* %^BOLD%^do_tell%^RESET%^
.EI
.SI 5
int do_tell(string str)
.EI

.SI 3
* %^BOLD%^do_whisper%^RESET%^
.EI
.SI 5
int do_whisper(string str)
.EI

.SI 3
* %^BOLD%^init_curse%^RESET%^
.EI
.SI 5
int init_curse(object pl)
.EI

.SI 3
* %^BOLD%^player_start%^RESET%^
.EI
.SI 5
int player_start(object pl)
.EI

.SI 3
* %^BOLD%^query_remove%^RESET%^
.EI
.SI 5
int query_remove()
.EI


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^newbie%^RESET%^
.EI
.SI 5
string newbie(string str)
.EI

.SI 3
* %^BOLD%^newbie_emote%^RESET%^
.EI
.SI 5
string newbie_emote(string str)
.EI


