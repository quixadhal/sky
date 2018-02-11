.DT
clothing.c
$MUDNAME$ autodoc help
clothing.c

.SH Description
.SP 5 5

This is the clothing file.  Contains everything you need to
make some nice clothing.

.EP
.SP 10 5

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /std/basic/wearable, /std/basic/close_lock and /std/container.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/move_failures.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_pocket%^RESET%^
.EI
.SI 5
void add_pocket(string type, int amount)
.EI
.SP 7 5

This method adds a pocket onto the clothing.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the type of pocket
.EP
.SP 9 5
amount - the amount the pocket can hold
.EP

.SI 3
* %^BOLD%^break_me%^RESET%^
.EI
.SI 5
void break_me()
.EI
.SP 7 5

This method causes the object to be broken.

.EP

.SI 3
* %^BOLD%^query_clothing%^RESET%^
.EI
.SI 5
int query_clothing()
.EI
.SP 7 5

This method will return true if the item is an item of clothing.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
returns true if it's a clothing item
.EP

.SI 3
* %^BOLD%^query_no_weapons_allowed%^RESET%^
.EI
.SI 5
int query_no_weapons_allowed()
.EI
.SP 7 5

This method returns the number of weapons allowed into the scabbard.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the number of weapons allowed into the scabbard.
.EP

.SI 3
* %^BOLD%^query_pocket_mess%^RESET%^
.EI
.SI 5
string query_pocket_mess()
.EI
.SP 7 5

This method returns the message associated with the pocket.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the message associated with the pocket
.EP

.SI 3
* %^BOLD%^query_pockets%^RESET%^
.EI
.SI 5
mixed query_pockets()
.EI
.SP 7 5

This method returns all the pockets on the object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
all the pockets on the object
.EP

.SI 3
* %^BOLD%^query_scabbard%^RESET%^
.EI
.SI 5
int query_scabbard()
.EI
.SP 7 5

This method determines if the object is a scabbard or not.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
returns 1 for a scabbard
.EP

.SI 3
* %^BOLD%^query_scabbard_mess%^RESET%^
.EI
.SI 5
varargs string query_scabbard_mess(int flag)
.EI
.SP 7 5

This method returns the message associated with the scabbard.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
flag - if the flag is set then the message will be
constructed without the "It could sheath" bit.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the message associated with the scabbard
.EP

.SI 3
* %^BOLD%^query_types%^RESET%^
.EI
.SI 5
string * query_types()
.EI
.SP 7 5

This method returns the types of weapons that can be
sheathed in the scabbard.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the types that can be sheathed
.EP

.SI 3
* %^BOLD%^set_clothing_scabbard%^RESET%^
.EI
.SI 5
void set_clothing_scabbard()
.EI
.SP 7 5

This method makes the clothing object a clothing-scabbard,
which means it will be fixable by 'mend' etc.
It will allow to have sheathes for daggers inside bras etc.
.EP

.SI 3
* %^BOLD%^set_no_weapons_allowed%^RESET%^
.EI
.SI 5
void set_no_weapons_allowed(int i)
.EI
.SP 7 5

This method sets the number of weapons allowed into the scabbard.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
i - the number of weapons allowed into the scabbard
.EP

.SI 3
* %^BOLD%^set_pocket_mess%^RESET%^
.EI
.SI 5
void set_pocket_mess(string words)
.EI
.SP 7 5

This method sets the message associated with the pocket.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
words - the message associated with the pocket
.EP

.SI 3
* %^BOLD%^set_types%^RESET%^
.EI
.SI 5
void set_types(string * words)
.EI
.SP 7 5

This method sets the types of weapons that can be
sheathed in the scabbard.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
words - the array of types that can be sheathed
.EP

.SI 3
* %^BOLD%^setup_clothing%^RESET%^
.EI
.SI 5
void setup_clothing(int number)
.EI
.SP 7 5

This method sets up the condition for the clothing.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
number - the maximum condition for the clothing

.EP

.SI 3
* %^BOLD%^test_type_ok%^RESET%^
.EI
.SI 5
int test_type_ok(object thing, int flag, int test)
.EI
.SP 7 5

This method queries whether or not this weapon
can be sheathed in the scabbard.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the weapon to test
.EP
.SP 9 5
flag - the move flag (see test_add)
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the weapon can be sheathed in the scabbard, 0 if not
.EP


