.DT
wizards_protection.c
$MUDNAME$ autodoc help
wizards_protection.c

.SH Description
.SP 5 5
 The effect put on NPCs who are protected by Unseen University's Porters.

The argument is an array containing, in this order, the attack string, 
(what the  NPC does/says when attacked), the enter string (what the 
NPC does/says when a criminal enters), the warning string (how the NPC 
warns the guards), and the integer severity of attacking the NPC. 
(Usually 1, but potentially more for "better" NPCS).
The strings will be passed right into init_command, so they will need to 
have the appropriate command at the front. 
(for example, ":cowers away in terror."). Optionally, zeroes may be passed 
to leave out that string.
There is no timing on this effect because, well, that's just silly.

.EP
.SP 10 5


Written by Rodion

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/effect.h.
.EP

