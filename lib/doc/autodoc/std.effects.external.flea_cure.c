.DT
flea_cure.c
$MUDNAME$ autodoc help
flea_cure.c

.SH Description
.SP 5 5

This is the effect skelton docs.  This effect
has a classification of "body.smell.insecticide".


Describe the arguments in here.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects

.EP
.SH Includes
.SP 5 5
This class includes the following files /include/effect.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^cleanse%^RESET%^
.EI
.SI 5
int cleanse(object thing, int bonus)
.EI

.SI 3
* %^BOLD%^kill_flea%^RESET%^
.EI
.SI 5
void kill_flea(object player)
.EI

.SI 3
* %^BOLD%^make_smell%^RESET%^
.EI
.SI 5
void make_smell(object player)
.EI

.SI 3
* %^BOLD%^smell_string%^RESET%^
.EI
.SI 5
string smell_string(object player, int time)
.EI


