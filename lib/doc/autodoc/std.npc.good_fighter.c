.DT
good_fighter.c
$MUDNAME$ autodoc help
good_fighter.c

.SH Description
.SP 5 5

Inherit file used to make npc's use specials.
Currently no method to stop npc's using all specials, besides
over-riding this file, undef'ing specials, and defining them
to the commands you want to use.
Shiannar, 22/07/01.

.EP
.SP 10 5

.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_actions%^RESET%^
.EI
.SI 5
void add_actions()
.EI

.SI 3
* %^BOLD%^do_special%^RESET%^
.EI
.SI 5
void do_special()
.EI


