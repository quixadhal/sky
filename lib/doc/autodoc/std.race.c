.DT
race.c
$MUDNAME$ autodoc help
race.c

.SH Description
.SP 5 5

This is called off of the monster to set up a race and
profession...   Race should be first then profession..
.EP
.SP 10 5


Written by Pinkfish

Started Sometime in 1991

.EP

.SH Includes
.SP 5 5
This class includes the following files /secure/include/config.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^query_race_path%^RESET%^
.EI
.SI 5
string query_race_path(string race_name)
.EI
.SP 7 5

This method returns the path associated with the specified race.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
race_name - the name of the race
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the path of the race

.EP

.SI 3
* %^BOLD%^query_races%^RESET%^
.EI
.SI 5
mapping query_races()
.EI
.SP 7 5

This method returns all the current races in the race object.  It is a
mapping with matches between the name of the race and race object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the race mapping

.EP

.SI 3
* %^BOLD%^query_valid_race%^RESET%^
.EI
.SI 5
int query_valid_race(string race)
.EI
.SP 7 5

This method checks to see if the specified race is valid or not.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
race - the race to check for validity
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if it exists, 0 if it does not

.EP

.SI 3
* %^BOLD%^set_level%^RESET%^
.EI
.SI 5
void set_level(int lvl, string race)
.EI
.SP 7 5

This method sets the level of the npc with the specified attributes.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
lvl - the level to set the npc at
.EP
.SP 9 5
race - the race to set the npc with

.EP


