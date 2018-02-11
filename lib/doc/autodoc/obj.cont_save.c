.DT
cont_save.c
$MUDNAME$ autodoc help
cont_save.c

.SH Description
.SP 5 5

This method returns the current save file for the object.
.EP
.SP 10 5

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /obj/baggage.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^check_euid%^RESET%^
.EI
.SI 5
void check_euid()
.EI

.SI 3
* %^BOLD%^do_load%^RESET%^
.EI
.SI 5
varargs void do_load(object thing)
.EI

.SI 3
* %^BOLD%^do_save%^RESET%^
.EI
.SI 5
void do_save()
.EI

.SI 3
* %^BOLD%^query_save_file%^RESET%^
.EI
.SI 5
string query_save_file()
.EI

.SI 3
* %^BOLD%^set_save_file%^RESET%^
.EI
.SI 5
varargs void set_save_file(string file, object thing)
.EI

.SI 3
* %^BOLD%^test_add%^RESET%^
.EI
.SI 5
int test_add(object ob, int flag)
.EI

.SI 3
* %^BOLD%^test_remove%^RESET%^
.EI
.SI 5
int test_remove(object thing, int flag, mixed dest)
.EI


