.DT
armour_logic.c
$MUDNAME$ autodoc help
armour_logic.c

.SH Description
.SP 5 5

This is the main armour inheritable.
This will be nasty...
.EP
.SP 10 5

.EP

.SH Change history
.SP 5 5
Changed to use a mapping for armour_types, and added docs
- Sandoz, July 2003.

.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_ac%^RESET%^
.EI
.SI 5
int add_ac(string name, string type, mixed a_c)
.EI
.SP 7 5

This method makes an object to have an armour class against a
certain type of damage.  It is used when you want to give an object
(usually armour) the ability to protect against a specific type of
damage.
The first of the three arguments to the function is the name of
the armour class to add.  This can be anything, but please use
something meaningful.
The second argument is the attack type to protect against,
usually "sharp", "blunt", "pierce" or similar.
The third argument is the actual armour class.  The higher this is,
the better protection the armour will provide.  If the argument is
a number, the AC will be random( number ).  In case of a 1 element
array, the AC will be that element.  With a 2 element array, the AC
will be the 1st element + random( 2nd element ).  With a 3 element
array, it will be 1st + 2nd D 3rd.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the armour class to add
.EP
.SP 9 5
type - the type of damage to protect against
.EP
.SP 9 5
a_c - the actual armour class
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the new armour class was successfully added, 0 if not

.EP

.SI 3
* %^BOLD%^query_ac%^RESET%^
.EI
.SI 5
varargs int query_ac(string type, int damage, string zone)
.EI
.SP 7 5

This method returns the armour class rating the object has
against the specified type of damage.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the type of damage to get the AC for
.EP
.SP 9 5
damage - the damage done
.EP
.SP 9 5
zone - the body area being hit
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the armour class rating

.EP

.SI 3
* %^BOLD%^query_armour_class%^RESET%^
.EI
.SI 5
mapping query_armour_class()
.EI
.SP 7 5

This method returns the whole armour class mapping.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the whole armour class mapping

.EP

.SI 3
* %^BOLD%^query_armour_types%^RESET%^
.EI
.SI 5
mapping query_armour_types()
.EI
.SP 7 5

This method returns the whole armour class types mapping.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the whole armour class types mapping

.EP

.SI 3
* %^BOLD%^remove_ac%^RESET%^
.EI
.SI 5
int remove_ac(string name)
.EI
.SP 7 5

This method removes an armour class with the specified name from an object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the armour class to remove
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 upon success, 0 upon failure

.EP


