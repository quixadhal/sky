.DT
ink.c
$MUDNAME$ autodoc help
ink.c

.SH Description
.SP 5 5

This is the effect skelton docs.  This effect
has a classification of "mind.fluster".


Describe the arguments in here.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects

.EP
.SH Inherits
.SP 5 5
This class inherits the following classes /std/effects/basic.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^action_drunk%^RESET%^
.EI
.SI 5
void action_drunk(object ob, int * coord, int quantity)
.EI

.SI 3
* %^BOLD%^action_taste%^RESET%^
.EI
.SI 5
void action_taste(object ob, int * coord, int quantity)
.EI

.SI 3
* %^BOLD%^backdrop%^RESET%^
.EI
.SI 5
int backdrop()
.EI

.SI 3
* %^BOLD%^query_attrs%^RESET%^
.EI
.SI 5
mixed * query_attrs(int * coord)
.EI

.SI 3
* %^BOLD%^query_ink%^RESET%^
.EI
.SI 5
int query_ink()
.EI


