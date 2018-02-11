.DT
spells.c
$MUDNAME$ autodoc help
spells.c

.SH Includes
.SP 5 5
This class includes the following files /include/spells.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_spell%^RESET%^
.EI
.SI 5
int add_spell(string name, mixed ob, mixed func)
.EI
.SP 7 5

This method adds a spell to a living object's known spells mapping
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the spell that can be used to access the
spell while casting
.EP
.SP 9 5
ob - the actual spell object
.EP
.SP 9 5
func - a spell function (unused?)
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the spell was added successfully, 0 if not
.EP

.SI 3
* %^BOLD%^help_spell%^RESET%^
.EI
.SI 5
string help_spell(string str)
.EI

.SI 3
* %^BOLD%^query_spell%^RESET%^
.EI
.SI 5
mixed query_spell(string name)
.EI
.SP 7 5

This method returns the specified spell's spell object and function
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the spell to get the data for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the spell object and function

.EP

.SI 3
* %^BOLD%^query_spells%^RESET%^
.EI
.SI 5
mixed query_spells()
.EI
.SP 7 5

This method returns the spells mapping of the living object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the spells mapping

.EP

.SI 3
* %^BOLD%^remove_spell%^RESET%^
.EI
.SI 5
int remove_spell(string name)
.EI
.SP 7 5

This method removes a spell from the spells mapping of a living object
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the spell to remove
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
always returns 1

.EP


