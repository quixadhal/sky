.DT
weapon.c
$MUDNAME$ autodoc help
weapon.c

.SH Description
.SP 5 5

ok.... now we start thinking about the strange things...
  We have several points we want to implement...
  1)  A much wider range of damages.
  2)  A "To hit" and "damage" rolls being seperate things
         But are still related.  ie a good hit will do more damage
 Implementation...
   Ok, here goes.   The being hit players ac is taken based on the
   attack type, the ac will be returned as a base (not randomised)
   and a randomised amount...  This will be used to calculate the
   cute number we need.  Once we have the number we create the
   "To hit" roll for the weapon.  Subtracting of this from our
   ac number tells us weather or not we hit...  If we have hit
   We take the amount we hit by (after subtracting off the
   "To hit bonus") and add it too the extra damge that is done
   All this is kept in an array, there can be more than one
   attack in the array.  They can be connected together in
   several ways, 1) follow on after attack one did more that x
   points of damage.  2) have a percentage chance of working
   each attack.
   A standard set of attacks are defined in /std/weapon_handler
   please see that file for more details

Modified 18/5/93 by Piecemaker to remove octarine descriptions for non
                               wizards.

.EP
.SP 10 5

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /std/basic/holdable, /std/basic/condition, /std/weapon_logic and /std/object.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/weapon.h and /include/move_failures.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_immune%^RESET%^
.EI
.SI 5
int add_immune(string name)
.EI

.SI 3
* %^BOLD%^hit_weapon%^RESET%^
.EI
.SI 5
void hit_weapon(int amount, string type)
.EI

.SI 3
* %^BOLD%^modify_damage%^RESET%^
.EI
.SI 5
int modify_damage(int val, string name)
.EI

.SI 3
* %^BOLD%^new_weapon%^RESET%^
.EI
.SI 5
void new_weapon(int new_condition)
.EI
.SP 7 5

This method setups the weapon with the new condition.  It sets the
maximum and lowest conditions to the specified condition.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
new_condition - the condition value of the weapon

.EP

.SI 3
* %^BOLD%^query_full_value%^RESET%^
.EI
.SI 5
int query_full_value()
.EI

.SI 3
* %^BOLD%^query_hilt%^RESET%^
.EI
.SI 5
string query_hilt()
.EI
.SP 7 5

This method returns the hilt name of the weapon.
This is used by some of the attack messages.
Feel free to overwrite this in your weapon files.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the short description of the hilt - defaults to "hilt"

.EP

.SI 3
* %^BOLD%^query_money%^RESET%^
.EI
.SI 5
int query_money(string type)
.EI

.SI 3
* %^BOLD%^query_money_array%^RESET%^
.EI
.SI 5
mixed * query_money_array()
.EI

.SI 3
* %^BOLD%^query_value%^RESET%^
.EI
.SI 5
int query_value()
.EI

.SI 3
* %^BOLD%^query_weapon%^RESET%^
.EI
.SI 5
int query_weapon()
.EI
.SP 7 5

This method return true if it is a weapon.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
always returns 1

.EP

.SI 3
* %^BOLD%^remove_immune%^RESET%^
.EI
.SI 5
int remove_immune(string name)
.EI

.SI 3
* %^BOLD%^set_wield_func%^RESET%^
.EI
.SI 5
void set_wield_func(string func, mixed ob)
.EI
.SP 7 5

This method sets the wield function of the object.  This will be
called when the object is wielded and unwielded.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
func - the function to call
.EP
.SP 9 5
ob - the object to call the method on

.EP


