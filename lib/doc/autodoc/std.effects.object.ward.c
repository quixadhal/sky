.DT
ward.c
$MUDNAME$ autodoc help
ward.c

.SH Description
.SP 5 5

This effect protects an object by causing damage to anyone (except the 
warder) if they try to steal it.  It has a classification of 
"ritual.object.warded".


Args are: ({ duration, damage, warder's name })   Note that the first  argument is no longer used, and wards don't disappear after a time. 

This effect has a shadow associated with it.
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
* %^BOLD%^query_indefinite%^RESET%^
.EI
.SI 5
int query_indefinite()
.EI

.SI 3
* %^BOLD%^query_name%^RESET%^
.EI
.SI 5
string query_name()
.EI

.SI 3
* %^BOLD%^restart%^RESET%^
.EI
.SI 5
void restart(object thing, mixed args, int id)
.EI


