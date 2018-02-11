.DT
armour.c
$MUDNAME$ autodoc help
armour.c

.SH Description
.SP 5 5

This is the basic armour object.

.EP
.SP 10 5

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /std/basic/holdable, /std/basic/wearable, /std/object and /std/armour_logic.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/move_failures.h and /include/query_ac.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^player_wear%^RESET%^
.EI
.SI 5
void player_wear()
.EI
.SP 7 5

This function is called on an object and causes it to be worn
if it can be by it's environment(), i.e the player carrying it.

.EP

.SI 3
* %^BOLD%^query_ac%^RESET%^
.EI
.SI 5
varargs int query_ac(string type, int amount, string zone)
.EI

.SI 3
* %^BOLD%^query_armour%^RESET%^
.EI
.SI 5
int query_armour()
.EI
.SP 7 5

This method returns 1 to tell us that it is armour.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
always returns 1

.EP

.SI 3
* %^BOLD%^query_full_value%^RESET%^
.EI
.SI 5
int query_full_value()
.EI

.SI 3
* %^BOLD%^query_no_limbs%^RESET%^
.EI
.SI 5
int query_no_limbs()
.EI

.SI 3
* %^BOLD%^query_value%^RESET%^
.EI
.SI 5
int query_value()
.EI

.SI 3
* %^BOLD%^set_holder%^RESET%^
.EI
.SI 5
mixed set_holder(object thing, int number)
.EI

.SI 3
* %^BOLD%^set_no_limbs%^RESET%^
.EI
.SI 5
void set_no_limbs(int number)
.EI


