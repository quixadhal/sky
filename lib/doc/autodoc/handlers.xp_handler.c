.DT
xp_handler.c
$MUDNAME$ autodoc help
xp_handler.c

.SH Description
.SP 5 5

XP handler - hands out command xp based on the time the
command was last used and the cost of the command.
.EP
.SP 10 5


Written by Sandoz

.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^handle_xp%^RESET%^
.EI
.SI 5
varargs void handle_xp(object person, int amount, int success, string cmd)
.EI
.SP 7 5

This function will give out xp to the player, based on the
amount of gps used, the last time the command was used by
the player and if the command was successful or not.

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
person - the player using the command
.EP
.SP 9 5
amount - the amount of gps used
.EP
.SP 9 5
success - wether or not the command was successful
.EP
.SP 9 5
cmd - the name of the command, if this is 0,
previous_object() will be used.

.EP


