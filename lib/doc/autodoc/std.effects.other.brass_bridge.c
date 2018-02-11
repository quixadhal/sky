.DT
brass_bridge.c
$MUDNAME$ autodoc help
brass_bridge.c

.SH Description
.SP 5 5

An effect for when you're hung off the brass bridge.
 This does damage and causes some items to be dropped.
.EP
.SP 10 5


Written by Rodion

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/move_failures.h and /include/effect.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^drop_things%^RESET%^
.EI
.SI 5
void drop_things(object player, int time)
.EI
.SP 7 5

Function to handle inventory dropping.  This happens only every 3-6
minutes for now.

.EP

.SI 3
* %^BOLD%^hanging%^RESET%^
.EI
.SI 5
void hanging(object player, int time)
.EI
.SP 7 5

A function to do damage and send messages during the duration of the effect

.EP


