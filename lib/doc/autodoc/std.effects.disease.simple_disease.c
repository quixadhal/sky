.DT
simple_disease.c
$MUDNAME$ autodoc help
simple_disease.c

.SH Description
.SP 5 5

This is the effect skelton docs.  This effect
has a classification of "disease.hypothermia".


Describe the arguments in here. 

This effect has a shadow associated with it.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects

.EP
.SH Inherits
.SP 5 5
This class inherits the following classes /std/effects/disease/basic_disease.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/effect.h and /include/disease.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^disease_tick%^RESET%^
.EI
.SI 5
void disease_tick(object person, int arg, int id)
.EI

.SI 3
* %^BOLD%^query_cure_rate%^RESET%^
.EI
.SI 5
int query_cure_rate()
.EI

.SI 3
* %^BOLD%^query_infection_chance%^RESET%^
.EI
.SI 5
int query_infection_chance()
.EI

.SI 3
* %^BOLD%^set_cure_rate%^RESET%^
.EI
.SI 5
void set_cure_rate(int i)
.EI

.SI 3
* %^BOLD%^set_infection_chance%^RESET%^
.EI
.SI 5
void set_infection_chance(int i)
.EI

.SI 3
* %^BOLD%^set_infection_check%^RESET%^
.EI
.SI 5
void set_infection_check(function f)
.EI

.SI 3
* %^BOLD%^set_shadow_ob%^RESET%^
.EI
.SI 5
void set_shadow_ob(string str)
.EI

.SI 3
* %^BOLD%^test_remove%^RESET%^
.EI
.SI 5
int test_remove( object,  int,  int,  int)
.EI


