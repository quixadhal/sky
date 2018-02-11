.DT
attack_func.c
$MUDNAME$ autodoc help
attack_func.c

.SH Description
.SP 5 5

This handler contains special attack callback functions for
fighting commands and general combat action functions that
can be used to make NPCs use special attacks.
.EP
.SP 10 5


Written by Sandoz, 30th August 2001

.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^pound_break%^RESET%^
.EI
.SI 5
void pound_break(object player, object target, object weapon, int damage)
.EI
.SP 7 5

This is a callback function used by the 'pound' command.
It breaks limbs.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - the attacking player
.EP
.SP 9 5
target - the target of the attack
.EP
.SP 9 5
weapon - the weapon attacked with
.EP
.SP 9 5
damage - the damage done to the target

.EP


