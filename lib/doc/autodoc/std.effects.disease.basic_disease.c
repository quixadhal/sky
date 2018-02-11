.DT
basic_disease.c
$MUDNAME$ autodoc help
basic_disease.c

.SH Description
.SP 5 5

Basic file meant to be inherited by all diseases.
Very much a work in progress
If you change this file, remember to update
/doc/creator/files/std.effects.disease.basic_disease as well

.EP
.SP 10 5

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
* %^BOLD%^cure%^RESET%^
.EI
.SI 5
int cure(object person, string cure_classification, int power, int enum)
.EI

.SI 3
* %^BOLD%^query_name%^RESET%^
.EI
.SI 5
string query_name()
.EI

.SI 3
* %^BOLD%^set_classification%^RESET%^
.EI
.SI 5
void set_classification(string str)
.EI

.SI 3
* %^BOLD%^set_name%^RESET%^
.EI
.SI 5
void set_name(string str)
.EI


