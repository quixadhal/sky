.DT
health.c
$MUDNAME$ autodoc help
health.c

.SH Description
.SP 5 5

This is the health handler.
Spits out health strings for livings and a bit fancier
strings for the health command.  Also deals with
attacking checks and prints the monitor.
.EP
.SP 10 5


Written by Sandoz

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/player.h and /include/playtesters.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^do_attack_checks%^RESET%^
.EI
.SI 5
object * do_attack_checks(object * things, int attack)
.EI
.SP 7 5

This method does all the checks required for any
aggressive commands.  If the attack argument is 0,
then combat will not be initiated, if 1, then the
targets will be attacked.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
things - the things to test
.EP
.SP 9 5
attack - if this is 0, then combat will not be
initiated, if 1, then the things that pass the checks
will be attacked

.EP

.SI 3
* %^BOLD%^health_string%^RESET%^
.EI
.SI 5
varargs string health_string(object who, int full)
.EI
.SP 7 5

This method returns the health string of the creature.
It is used in extra_look in living creatures and in the 'health' command.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
who - the creature to get the health string for
.EP
.SP 9 5
full - whether or not to returns the full (coloured) health string
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the health string

.EP

.SI 3
* %^BOLD%^monitor_points%^RESET%^
.EI
.SI 5
void monitor_points(object player, int charge)
.EI
.SP 7 5

This method prints out the health and gp points during combat,
if the player so desires. Moved to here from the combat effect.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - the object recieving the monitor message
.EP
.SP 9 5
charge - non-zero to charge the player gp points for the message
.EP

.SI 3
* %^BOLD%^register_monitor%^RESET%^
.EI
.SI 5
void register_monitor(object ob, int charge)
.EI
.SP 7 5

This method is used by combat to display the monitor after
all heartbeats have finished.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object to print the monitor to
.EP
.SP 9 5
charge - non-zero to charge the player gp points for the message

.EP


