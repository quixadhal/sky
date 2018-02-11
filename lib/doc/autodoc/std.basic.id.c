.DT
id.c
$MUDNAME$ autodoc help
id.c

.SH Description
.SP 5 5

This class keepos track of all the aliases, names and adjectives
which are used to match the object.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
/global/player->add_command() and /std/basic/desc.c

.EP
.SH Inherits
.SP 5 5
This class inherits the following classes /std/basic/id_match.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/parse_command.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_adjective%^RESET%^
.EI
.SI 5
void add_adjective(mixed str)
.EI
.SP 7 5

This method adds an adjective to the object.   The adjectives are used for the
object matching routines.    Fort example, if you have a "green
bath tun" then "green" and "bath" are adjectives.
.EP

.SI 3
* %^BOLD%^add_alias%^RESET%^
.EI
.SI 5
void add_alias(mixed str)
.EI
.SP 7 5

This method adds an alias to the object.   An alias for the object is the
part used as the main noun for the object. ie in the case of a "green
bath tub", "bathtub" might be an alias for the object. and "green"
and "bath" would be adjectives. The value set with add_alias is also
used with present. This means you can make up an alias for an object
that players cannot normaly access but you can
get a handle on with present. For an exmple of this look at the money
object.


The function takes an array or a string as an argument.   If an array is passed in each element of the array is added to the alias array, if it is a string then the string elemnt is added to the array.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the alias(s) to add
.EP

.SI 3
* %^BOLD%^add_plural%^RESET%^
.EI
.SI 5
void add_plural(mixed str)
.EI
.SP 7 5

This method adds a plural onto the object.   The plurals will be
used in plural name matching by thje find_match simul_efun
.EP

.SI 3
* %^BOLD%^add_plurals%^RESET%^
.EI
.SI 5
void add_plurals(string * str)
.EI
.SP 7 5

This method adds multiple plurals to the object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the array of plurals to add
.EP

.SI 3
* %^BOLD%^id%^RESET%^
.EI
.SI 5
int id(string str)
.EI
.SP 7 5

This method is used by the present efun.   It determines if the
passed in string is an alias or the name of the object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the value to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the name matches

.EP

.SI 3
* %^BOLD%^id_adjective%^RESET%^
.EI
.SI 5
int id_adjective(string word)
.EI
.SP 7 5

This method is similar to the id function, except this will check the
adjectives instead of the aliases and the name.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the word to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the word matches one of the adjectives, 0 otherwise
.EP

.SI 3
* %^BOLD%^id_plural%^RESET%^
.EI
.SI 5
int id_plural(string str)
.EI
.SP 7 5

This method is similar to the id function, except this will check the
plural names instead of the aliases and the name.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the name matches one of the plurals, 0 otherwise
.EP

.SI 3
* %^BOLD%^query_adjectives%^RESET%^
.EI
.SI 5
string * query_adjectives()
.EI
.SP 7 5

This method returns the current list of adjectives associated with
this object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the complete list of adjectives

.EP

.SI 3
* %^BOLD%^query_alias%^RESET%^
.EI
.SI 5
string * query_alias()
.EI
.SP 7 5

This method returns the current list of aliases.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the array of aliases (array of strings)

.EP

.SI 3
* %^BOLD%^query_cap_name%^RESET%^
.EI
.SI 5
string query_cap_name()
.EI
.SP 7 5

This method returns the capitalized name.   It calls the function
capitalize() on the name
.EP

.SI 3
* %^BOLD%^query_name%^RESET%^
.EI
.SI 5
string query_name()
.EI
.SP 7 5

This method returns the name of the object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the name of the object
.EP

.SI 3
* %^BOLD%^query_plurals%^RESET%^
.EI
.SI 5
string * query_plurals()
.EI
.SP 7 5

This method returns the complete list of plurals for the
object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the complete array of plurals

.EP

.SI 3
* %^BOLD%^remove_adjective%^RESET%^
.EI
.SI 5
void remove_adjective(mixed str)
.EI
.SP 7 5

This method will remove an adjective from the object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the adective(s) to remove

.EP

.SI 3
* %^BOLD%^remove_alias%^RESET%^
.EI
.SI 5
int remove_alias(string str)
.EI
.SP 7 5

This method removes an alias from the object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the alias to remove
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the alias is found, 0 if not

.EP

.SI 3
* %^BOLD%^remove_plural%^RESET%^
.EI
.SI 5
void remove_plural(string str)
.EI
.SP 7 5

This method removes a plural from the object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the plural to remove
.EP

.SI 3
* %^BOLD%^set_adjectives%^RESET%^
.EI
.SI 5
void set_adjectives(string * str)
.EI
.SP 7 5

This method sets all the adjectives for the object.   This method
should not be used, please use add_adjective instead.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the array of adjectives

.EP

.SI 3
* %^BOLD%^set_aliases%^RESET%^
.EI
.SI 5
void set_aliases(string * str)
.EI
.SP 7 5

This method sets the entire alias array.   It overrides any current alias
definitions and sets the alias arry.   This should be used carefully
if at all.   Use add_alias instead.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the new alias array

.EP

.SI 3
* %^BOLD%^set_name%^RESET%^
.EI
.SI 5
void set_name(string str)
.EI
.SP 7 5

This method sets the name of the object.   The name is the basic handle
used to reference the object.   It should not have any spaces
in it.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name
.EP

.SI 3
* %^BOLD%^set_plurals%^RESET%^
.EI
.SI 5
void set_plurals(string * str)
.EI
.SP 7 5

This method sets the compete array of plurals.   This shod
not be used, use add_plural and remove_plural instead.
.EP


