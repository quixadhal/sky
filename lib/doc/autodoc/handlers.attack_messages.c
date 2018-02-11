.DT
attack_messages.c
$MUDNAME$ autodoc help
attack_messages.c

.SH Description
.SP 5 5

This handles the standard messages for the given damage types:
   blunt, sharp, pierce, fire.

There are also subtypes:
   blunt - hands, feet, tail, hoof, wrestle, bash (pommel), pound.
   sharp - claws, chew, slice, chop.
   pierce - bite, beak, stab, horns, tusks.
.EP
.SP 10 5


Written by pinkfish
.EP

.SH Change history
.SP 5 5
Changed to use the new format.
- Sandoz, 04th August 2001.

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/combat.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^query_message%^RESET%^
.EI
.SI 5
class message_data query_message(int dam, string type, object him, object me, string name, object wep, string area)
.EI
.SP 7 5

This method gets the attack messages for the weapon attacks.
If an attack with the specified name doesn't exist in the
weapon, it will look for the message in the handler.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
dam - the damage of the attack
.EP
.SP 9 5
type - the attack type ( either sharp, pierce or blunt )
.EP
.SP 9 5
him - the target of the attack
.EP
.SP 9 5
me - the attacker
.EP
.SP 9 5
name - the attack name
.EP
.SP 9 5
wep - the weapon attacked with
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a class of three elements - attacker, defender and others

.EP


