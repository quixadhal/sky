.DT
extra_look.c
$MUDNAME$ autodoc help
extra_look.c

.SH Description
.SP 5 5

Handles adding bits to the long description of objects.
.EP
.SP 10 5


Written by Pinkfish
.EP

.SH Change history
.SP 5 5
Added the ability to use function pointers.
- Sandoz, 2002.

.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_extra_look%^RESET%^
.EI
.SI 5
void add_extra_look(mixed add)
.EI
.SP 7 5

This method adds an object or function pointer into the list of
extra look objects/functions.  When using function pointers,
remember that you cannot use remove_extra_look() to remove them.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
add - the object or function to add
.EP

.SI 3
* %^BOLD%^calc_extra_look%^RESET%^
.EI
.SI 5
string calc_extra_look()
.EI
.SP 7 5

This method creates the extra long strings based on the current list
of objects to use an extra_look on.  The function extra_look() is
called on every object with TO passed in as the first (and only)
parameter.  If the result is non-zero it is added onto the output.
In case of function pointers, the function pointer will be evaluated
with TO as the argument.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the extra look string

.EP

.SI 3
* %^BOLD%^query_extra_look_list%^RESET%^
.EI
.SI 5
mixed query_extra_look_list()
.EI
.SP 7 5

This method returns the current list of objects to be used for
the extra look list.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the array of extra look objects

.EP

.SI 3
* %^BOLD%^remove_extra_look%^RESET%^
.EI
.SI 5
void remove_extra_look(object ob)
.EI
.SP 7 5

This method removes an object from the list of extra look objects.
This will only work for objects and string, function pointers
cannot be removed from the extra look list.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object to remove
.EP


