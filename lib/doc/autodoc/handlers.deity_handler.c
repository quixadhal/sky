.DT
deity_handler.c
$MUDNAME$ autodoc help
deity_handler.c

.SH Description
.SP 5 5

Keeps track of all the information about deities.  Like the worshippers,
rituals, commands etc.
To set up a deity, please use the 'deitytool' command.
.EP
.SP 10 5


Written by Olorin
.EP

.SH Change history
.SP 5 5
Changed to display correct alignment strings in deity finger
- Sandoz, 24th May 2001.

Rewrote completely
- Sandoz, 20th Sept. 2002.

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/tune.h and /include/deity.h.
.EP

.SH Classes

.SI 3
* %^BOLD%^deity_data%^RESET%^
class deity_data {
int al_lower;
int al_upper;
int gender;
int recruiting;
string info;
string title;
string name;
string * worshippers;
string * rituals;
string * commands;
}

.EI


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_command%^RESET%^
.EI
.SI 5
int add_command(string deity, string command)
.EI
.SP 7 5

This method adds a command to be given to the worshippers.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the deity to add the command for
.EP
.SP 9 5
command - the name of the command
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if successful, 0 if not

.EP

.SI 3
* %^BOLD%^add_ritual%^RESET%^
.EI
.SI 5
int add_ritual(string deity, string ritual)
.EI
.SP 7 5

This method adds a ritual to the set given by the deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity
.EP
.SP 9 5
ritual - the name of the ritual to add
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
returns 1 if successful, 0 if not

.EP

.SI 3
* %^BOLD%^add_worshipper%^RESET%^
.EI
.SI 5
int add_worshipper(string deity, string worshipper)
.EI
.SP 7 5

This method adds a worshipper into the worshippers array.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity
.EP
.SP 9 5
worshipper - the worshipper to add
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
returns 1 if successfully added, 0 if already exists

.EP

.SI 3
* %^BOLD%^align_string%^RESET%^
.EI
.SI 5
string align_string(int alignment)
.EI
.SP 7 5

This method gives a string represtentation of the
alignment level.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
alignment - the alignment to return
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
alignment string

.EP

.SI 3
* %^BOLD%^complete_cont%^RESET%^
.EI
.SI 5
int complete_cont(string player, string deity, int amount)
.EI
.SP 7 5

This method will be called by the contemplating room.
It will add the specified amount of gps to the players
contemplating mapping.  If the amount is -1, it will
effectively complete the contemplation for the specified
deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - the player to update the mapping for
.EP
.SP 9 5
deity - the deity the player contemplated
.EP
.SP 9 5
amount - the amount of gps the player used,
or if it is -1, then this deity will be considered
as 'completed' for the player
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the player has completed the contemplating
of the specified deity, 0 if not

.EP

.SI 3
* %^BOLD%^delete_command%^RESET%^
.EI
.SI 5
int delete_command(string deity, string command)
.EI
.SP 7 5

This method deletes a command to be given to the worshippers.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity
.EP
.SP 9 5
command - the name of the command to delete
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if success, 0 if not

.EP

.SI 3
* %^BOLD%^delete_ritual%^RESET%^
.EI
.SI 5
int delete_ritual(string deity, string ritual)
.EI
.SP 7 5

This method deletes a ritual from the deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity
.EP
.SP 9 5
ritual - the ritual to delete

.EP

.SI 3
* %^BOLD%^delete_worshipper%^RESET%^
.EI
.SI 5
int delete_worshipper(string deity, string worshipper, string reason)
.EI
.SP 7 5

This method deletes the given worshipper.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity
.EP
.SP 9 5
worshipper - the worshipper to delete
.EP
.SP 9 5
reason - the reason for deletion
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the operation was successful, 0 if it failed

.EP

.SI 3
* %^BOLD%^make_dust%^RESET%^
.EI
.SI 5
object make_dust(int amount, string deity)
.EI
.SP 7 5

This method creates an amount of holy dust for the specified deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
amount - the amount of dust to create
.EP
.SP 9 5
deity - the deity to create the dust for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the newly created dust object

.EP

.SI 3
* %^BOLD%^query_al_lower%^RESET%^
.EI
.SI 5
int query_al_lower(string deity)
.EI
.SP 7 5

This method returns the lower alignment limit for the
given deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity to query
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the lower alignment limit

.EP

.SI 3
* %^BOLD%^query_al_middle%^RESET%^
.EI
.SI 5
int query_al_middle(string deity)
.EI
.SP 7 5

This method returns the middle alignment for the
given deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity to query
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the middle alignment value

.EP

.SI 3
* %^BOLD%^query_al_upper%^RESET%^
.EI
.SI 5
int query_al_upper(string deity)
.EI
.SP 7 5

This method returns the upper alignment limit for the
given deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity to query
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the upper alignment limit

.EP

.SI 3
* %^BOLD%^query_commands%^RESET%^
.EI
.SI 5
string * query_commands(string deity)
.EI
.SP 7 5

This method queries the commands given to worshippers.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the deity to get the commands for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the commands array

.EP

.SI 3
* %^BOLD%^query_contemplating%^RESET%^
.EI
.SI 5
mapping query_contemplating()
.EI
.SP 7 5

This method will return the whole contemplating array.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the array of contemplating people

.EP

.SI 3
* %^BOLD%^query_deities%^RESET%^
.EI
.SI 5
string * query_deities()
.EI
.SP 7 5

This method returns the names of all deities currently in the handler.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
all the deity names

.EP

.SI 3
* %^BOLD%^query_deity%^RESET%^
.EI
.SI 5
int query_deity(string deity)
.EI
.SP 7 5

This method tells if the deity exists.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the deity exists, 0 if not

.EP

.SI 3
* %^BOLD%^query_deity_colour%^RESET%^
.EI
.SI 5
string query_deity_colour(string deity)
.EI
.SP 7 5

This method returns the colour for a deity, as used by the holy dust
and ritual messages.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the colour of the deity

.EP

.SI 3
* %^BOLD%^query_deity_data%^RESET%^
.EI
.SI 5
string query_deity_data(string deity)
.EI
.SP 7 5

This method returns a string containing all the vital information
on a deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the deity to get the data for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
vital info about a deity

.EP

.SI 3
* %^BOLD%^query_deity_finger%^RESET%^
.EI
.SI 5
string query_deity_finger(string deity)
.EI
.SP 7 5

This method returns the string used when fingering a deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the deity to finger
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the information relating to the deity

.EP

.SI 3
* %^BOLD%^query_finished_contemplating%^RESET%^
.EI
.SI 5
int query_finished_contemplating(string deity, string player)
.EI
.SP 7 5

This method queries whether or not the given player has
finished contemplating the specified deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the deity to check
.EP
.SP 9 5
player - the player to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the player has completed contemplating
the specified deity, 0 if not

.EP

.SI 3
* %^BOLD%^query_gender%^RESET%^
.EI
.SI 5
int query_gender(string deity)
.EI
.SP 7 5

This method returns the gender of the deity.  The gender is the same
as used elsehwere in the game.  0 for neuter, 1 for male and 2 for female.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the deity name
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the gender of the deity

.EP

.SI 3
* %^BOLD%^query_info%^RESET%^
.EI
.SI 5
string query_info(string deity)
.EI
.SP 7 5

This method returns information about the deity.  This is used
in the finger information and when querying about joining the
clergy.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity to get information on
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
information about the deity

.EP

.SI 3
* %^BOLD%^query_objective%^RESET%^
.EI
.SI 5
string query_objective(string deity)
.EI
.SP 7 5

This method returns the objective for the deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity_name - the name of the deity to get the objective of
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the objective of the deity

.EP

.SI 3
* %^BOLD%^query_player_cont_data%^RESET%^
.EI
.SI 5
mapping query_player_cont_data(string player)
.EI
.SP 7 5

This method queries the data for the given player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - the player to get the contemplating data for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the contemplating data for the given player

.EP

.SI 3
* %^BOLD%^query_possessive%^RESET%^
.EI
.SI 5
string query_possessive(string deity)
.EI
.SP 7 5

This method returns the possessive for the deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity to get the possessive of
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the possessive of the deity

.EP

.SI 3
* %^BOLD%^query_pronoun%^RESET%^
.EI
.SI 5
string query_pronoun(string deity)
.EI
.SP 7 5

This method returns the pronoun for the deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity to get the pronoun of
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the pronoun of the deity

.EP

.SI 3
* %^BOLD%^query_rituals%^RESET%^
.EI
.SI 5
string * query_rituals(string deity)
.EI
.SP 7 5

This method queries the rituals given by this deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the deity to get the rituals for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the rituals array

.EP

.SI 3
* %^BOLD%^query_title%^RESET%^
.EI
.SI 5
string query_title(string deity)
.EI
.SP 7 5

This method returns the title for the deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the deity to get the title of
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the title of the deity

.EP

.SI 3
* %^BOLD%^query_valid_al%^RESET%^
.EI
.SI 5
int query_valid_al(string deity, int number)
.EI
.SP 7 5

This method determines if the alignment is valid for the deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the deity to check
.EP
.SP 9 5
number - the alignment to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 if it is valid, 1 if above upper_al, -1 if lower than lower_al

.EP

.SI 3
* %^BOLD%^query_want_worshippers%^RESET%^
.EI
.SI 5
int query_want_worshippers(string deity)
.EI
.SP 7 5

This method tells if the deity wants worshippers or not.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the deity to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the deity wants worshippers, 0 if not

.EP

.SI 3
* %^BOLD%^query_worshipper%^RESET%^
.EI
.SI 5
int query_worshipper(string deity, string worshipper)
.EI
.SP 7 5

This method checks if a player is the worshipper of the god
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity
.EP
.SP 9 5
worshipper - the worshipper to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the player is a worshipper, 0 if not

.EP

.SI 3
* %^BOLD%^query_worshippers%^RESET%^
.EI
.SI 5
string * query_worshippers(string deity)
.EI
.SP 7 5

This method returns the names of all worshippers.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity to query
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the worshippers array

.EP

.SI 3
* %^BOLD%^random_al%^RESET%^
.EI
.SI 5
int random_al(string deity)
.EI
.SP 7 5

This method returns a random alignment between the limits for the
given deity.  This is used by NPCs to set themselves up
with a correct alignment for their deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a random valid alignment

.EP

.SI 3
* %^BOLD%^refresh_worshipper%^RESET%^
.EI
.SI 5
void refresh_worshipper(string worshipper)
.EI
.SP 7 5

This method deletes the given worshipper by name from all
deities' arrays.  This is called by the refresh handler
when the player refreshes or is deleted.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
worshipper - the worshipper to refresh
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the operation was successful, 0 if it failed

.EP

.SI 3
* %^BOLD%^set_al_lower%^RESET%^
.EI
.SI 5
int set_al_lower(string deity, int number)
.EI
.SP 7 5

This method sets the lower alignment limit for the
given deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 upon success, 0 upon failure

.EP

.SI 3
* %^BOLD%^set_al_upper%^RESET%^
.EI
.SI 5
int set_al_upper(string deity, int number)
.EI
.SP 7 5

This method sets the upper alignment limit for the
given deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the upper alignment limit

.EP

.SI 3
* %^BOLD%^set_gender%^RESET%^
.EI
.SI 5
void set_gender(string deity, int number)
.EI
.SP 7 5

This method sets the gender of the deity.  The gender is the same
as used elsehwere in the game.  0 for neuter, 1 for male and 2 for female.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the deity name
.EP
.SP 9 5
number - the gender to set the deity to

.EP

.SI 3
* %^BOLD%^set_info%^RESET%^
.EI
.SI 5
void set_info(string deity, string text)
.EI
.SP 7 5

This method sets information about the deity.  This is used
in the finger information and when querying about joining the
clergy.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity to set information for
.EP
.SP 9 5
text - the new value for the information

.EP

.SI 3
* %^BOLD%^set_title%^RESET%^
.EI
.SI 5
void set_title(string deity, string text)
.EI
.SP 7 5

This method sets the title for the deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the deity to set the title for
.EP
.SP 9 5
text - the new title of the deity

.EP

.SI 3
* %^BOLD%^set_want_worshippers%^RESET%^
.EI
.SI 5
void set_want_worshippers(string deity, int number)
.EI
.SP 7 5

This method sets if the deity wants worshippers or not.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
deity - the name of the deity to change
.EP
.SP 9 5
number - the value of the flag

.EP

.SI 3
* %^BOLD%^valid_worshipper%^RESET%^
.EI
.SI 5
int valid_worshipper(string worshipper, string deity)
.EI
.SP 7 5

This method checks to see if the worshipper is valid.  This basically
checks to see if they exist and they are worshipping the current deity.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
worshipper - the worshipper to check
.EP
.SP 9 5
deity - the deity they should be worshipping according to the handler
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 if they are not valid, 1 if they are
.EP


