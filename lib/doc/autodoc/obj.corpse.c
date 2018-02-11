.DT
corpse.c
$MUDNAME$ autodoc help
corpse.c

.SH Description
.SP 5 5

This method queries whether or not we are a corpse.
.EP
.SP 10 5

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /std/living/carrying and /std/container.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/weapon.h, /include/move_failures.h, /include/corpse.h and /include/bit.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_bit_gone%^RESET%^
.EI
.SI 5
mixed * add_bit_gone(string bit)
.EI
.SP 7 5

This method adds a bit to the array of bits gone in the corpse.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
bit - the bit to remove
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the data of the newly removed bit

.EP

.SI 3
* %^BOLD%^give_permission%^RESET%^
.EI
.SI 5
void give_permission(string who)
.EI
.SP 7 5

This method adds a person to the array of people we are
allowing to take things from our corpse.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
who - the name of the person to permit

.EP

.SI 3
* %^BOLD%^make_bit%^RESET%^
.EI
.SI 5
object make_bit(string which_bit)
.EI
.SP 7 5

This object creates a bit and returns its object,
if one is present in the corpse.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
which_bit - the name of the bit to create
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the new bit

.EP

.SI 3
* %^BOLD%^make_bits%^RESET%^
.EI
.SI 5
object * make_bits(string * what_bits)
.EI
.SP 7 5

This method creates actual object from the required bits.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
what_bits - the bits to create objects from
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
an array of newly created bit objects

.EP

.SI 3
* %^BOLD%^query_bit_left%^RESET%^
.EI
.SI 5
string query_bit_left(string str)
.EI
.SP 7 5

This method queries whether or not a specific bit is left in the corpse.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the bit to check for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the bit

.EP

.SI 3
* %^BOLD%^query_bit_left_pl%^RESET%^
.EI
.SI 5
string * query_bit_left_pl(string str)
.EI
.SP 7 5

This method queries whether or not specific bits are left in the corpse.
This checks for the plural bits.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the bit to check for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
an array of bits

.EP

.SI 3
* %^BOLD%^query_bits_gone%^RESET%^
.EI
.SI 5
string * query_bits_gone()
.EI
.SP 7 5

This method returns the array of bits that have been
removed from the corpse.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the array of bits gone

.EP

.SI 3
* %^BOLD%^query_bits_left%^RESET%^
.EI
.SI 5
string * query_bits_left()
.EI
.SP 7 5

This method returns all the bits left in the corpse.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
all bits left in the corpse

.EP

.SI 3
* %^BOLD%^query_corpse%^RESET%^
.EI
.SI 5
int query_corpse()
.EI

.SI 3
* %^BOLD%^query_decay%^RESET%^
.EI
.SI 5
int query_decay()
.EI
.SP 7 5

This method returns our decay value.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the decay value

.EP

.SI 3
* %^BOLD%^query_edible_bits_left%^RESET%^
.EI
.SI 5
string * query_edible_bits_left()
.EI
.SP 7 5

This method returns the edible bits that are still in the corpse.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the edible bits still in the corpse

.EP

.SI 3
* %^BOLD%^query_gender%^RESET%^
.EI
.SI 5
int query_gender()
.EI
.SP 7 5

This method returns the gender of the corpse.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the gender of the corpse

.EP

.SI 3
* %^BOLD%^query_gender_string%^RESET%^
.EI
.SI 5
string query_gender_string()
.EI
.SP 7 5

This method returns a descriptive string of the
gender of the corpse.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a string describing the gender of the corpse

.EP

.SI 3
* %^BOLD%^query_owner%^RESET%^
.EI
.SI 5
string query_owner()
.EI
.SP 7 5

This returns the short desc or name of the owner of the corpse.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the short desc or name of the owner of the corpse

.EP

.SI 3
* %^BOLD%^query_permitted%^RESET%^
.EI
.SI 5
string * query_permitted()
.EI
.SP 7 5

This method returns the array of people who are
permitted to take things from our corpse.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
people permitted to take things from our corpse

.EP

.SI 3
* %^BOLD%^query_race_name%^RESET%^
.EI
.SI 5
string query_race_name()
.EI
.SP 7 5

This method returns the corpse's race name.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the race name

.EP

.SI 3
* %^BOLD%^query_race_ob%^RESET%^
.EI
.SI 5
string query_race_ob()
.EI
.SP 7 5

This method returns the corpse's race object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the race object

.EP

.SI 3
* %^BOLD%^query_static_auto_load%^RESET%^
.EI
.SI 5
mapping query_static_auto_load()
.EI

.SI 3
* %^BOLD%^set_decay%^RESET%^
.EI
.SI 5
void set_decay(int dec)
.EI
.SP 7 5

This method sets the decay value for the corpse.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
dec - the decay value to set

.EP

.SI 3
* %^BOLD%^set_gender%^RESET%^
.EI
.SI 5
void set_gender(int i)
.EI
.SP 7 5

This method sets the gender of the corpse.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
i - the gender of the corpse

.EP

.SI 3
* %^BOLD%^set_owner%^RESET%^
.EI
.SI 5
void set_owner(string who, object thing)
.EI
.SP 7 5

This method sets the owner of the corpse.
It will also set up various other things such as adjectives, etc.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
who - the name or short desc of the owner
.EP
.SP 9 5
thing - the object of the owner

.EP

.SI 3
* %^BOLD%^set_race_name%^RESET%^
.EI
.SI 5
void set_race_name(string str)
.EI
.SP 7 5

This method sets the race name of the corpse.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the race name to set

.EP

.SI 3
* %^BOLD%^set_race_ob%^RESET%^
.EI
.SI 5
void set_race_ob(string str)
.EI
.SP 7 5

This method sets the race object of the corpse.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the race object to set

.EP


