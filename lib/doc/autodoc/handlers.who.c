.DT
who.c
$MUDNAME$ autodoc help
who.c

.SH Description
.SP 5 5

This is used by the other who commands to do the object mapping
to figure out who to include in the list.
.EP
.SP 10 5

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/player.h, /include/time.h, /include/clubs.h and /include/playtesters.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^filter_users%^RESET%^
.EI
.SI 5
object * filter_users(object * tarr, string name, int no_cres)
.EI

.SI 3
* %^BOLD%^who_line%^RESET%^
.EI
.SI 5
string who_line(object ob, int cre, int width)
.EI
.SP 7 5

This method returns the line used for each player in the who
command.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the player to show
.EP
.SP 9 5
cre - are we a cre
.EP
.SP 9 5
width - the width of the line

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the who line
.EP

.SI 3
* %^BOLD%^who_string%^RESET%^
.EI
.SI 5
string who_string(int width, int cre, int verbose, string name)
.EI
.SP 7 5

This method returns the string used in the who command.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the line for the who line

.EP


