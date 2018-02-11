.DT
roll_MdN.c
$MUDNAME$ autodoc help
roll_MdN.c

.SH Description
.SP 5 5

This method rolls a bunch of dice to get a nice weighted medium.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
efun::random() and shuffle()
.EP
.SH Example
.SI 5
roll_MdN(3, 6);
roll_MdN(1, 20);

.EI
.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^roll_MdN%^RESET%^
.EI
.SI 5
int roll_MdN(int dice, int sides)
.EI


