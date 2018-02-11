.DT
bits_controller.c
$MUDNAME$ autodoc help
bits_controller.c

.SH Description
.SP 5 5

Decays all the decable objects in the game.
.EP
.SP 10 5


Written by Ember
.EP



.SH See also
.SP 5 5
/obj/food.c, /std/bit.c and /obj/corpse.c

.EP
.SH Change history
.SP 5 5
17 Dec 1997 -- Sin
   I added a reset_eval_cost() call into the do_update() routine
   so that it wouldn't quit when there were a whole bunch of
   bits to decay.

6 Jan 1998 -- Sin
   I modified the do_update() routine so it'll register a callback
   even if one of the bits fails to decay.  That should help prevent
   the callout from disappearing.  If it does disappear, I added
   a kickstart function.

07 November 2001 -- Sandoz
   Changed the for loop to foreach in do_decay(), plus general cleanup.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/bits_controller.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_bit%^RESET%^
.EI
.SI 5
void add_bit(object ob)
.EI
.SP 7 5

Adds in a decable object into the decaying array.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the bit to decay

.EP

.SI 3
* %^BOLD%^remove_bit%^RESET%^
.EI
.SI 5
void remove_bit(object ob)
.EI
.SP 7 5

Removes the decable object from the decaying array.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the bit to remove

.EP


