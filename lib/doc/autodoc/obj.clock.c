.DT
clock.c
$MUDNAME$ autodoc help
clock.c

.SH Description
.SP 5 5

A generalised watch object. Taken from a watch I found in /obj/misc
and made into an inheritable object.
.EP
.SP 10 5


Written by Ceres

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /std/object.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/time.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^do_chime%^RESET%^
.EI
.SI 5
void do_chime(string mess, int type)
.EI
.SP 7 5

This function is called by the chime handler.
Overload this if you wish to have your own chime code.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
mess - the message set with set_chimes.
.EP
.SP 9 5
type - the type of chime (quarter/half/hour)
.EP

.SI 3
* %^BOLD%^set_chimes%^RESET%^
.EI
.SI 5
void set_chimes(int num, string mess)
.EI
.SP 7 5

This method sets up chimes for this clock.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
num - 1 = every hour, 2 = every half hour, 4 = every quarter hour
.EP
.SP 9 5
mess - the message to be displayed when the clock chimes

.EP

.SI 3
* %^BOLD%^set_show_date%^RESET%^
.EI
.SI 5
void set_show_date()
.EI
.SP 7 5

This method sets the clock to show the date as well as the time.

.EP


