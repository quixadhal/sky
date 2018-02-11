.DT
player_handler.c
$MUDNAME$ autodoc help
player_handler.c

.SH Description
.SP 5 5

A hander to allow the testing of values on players when they aren't logged
in.  These methods used to exist in the login object but now they're here.



.EP
.SP 10 5


Written by Ceres
.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /global/player/family.
.EP

.SH Includes
.SP 5 5
This class includes the following files /secure/include/finger.h.
.EP

.SH Classes

.SI 3
* %^BOLD%^player_info%^RESET%^
class player_info {
int cached;
int touched;
int gender;
int active;
int level;
int age;
int last;
int start_time;
string password;
string real_name;
string email;
string icq;
string homepage;
string birthday;
string location;
string home_dir;
string last_on_from;
string deity;
string family_name;
string signature;
string project;
string plan;
string reference;
mapping map_prop;
}

.EI


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^delete_from_cache%^RESET%^
.EI
.SI 5
void delete_from_cache(string name)
.EI
.SP 7 5

This method should be called whenever a player logs on, or
is refreshed, so that we wouldn't have outdated data in the cache.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the player to delete from the cache

.EP

.SI 3
* %^BOLD%^load_player%^RESET%^
.EI
.SI 5
int load_player(string name)
.EI
.SP 7 5

This method will load in the player file.  It will return 0 if the player
file either does not exist or the input string is incorrect.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name to try and read in
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the player file exists, 0 if not

.EP

.SI 3
* %^BOLD%^query_finger_info%^RESET%^
.EI
.SI 5
class finger_info query_finger_info(string name)
.EI
.SP 7 5

This method returns all the info needed for a player's finger.
If the player is online, the updated values will be gotten
straight from the player object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the player to get the data for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the player info for the player

.EP

.SI 3
* %^BOLD%^query_plan%^RESET%^
.EI
.SI 5
string query_plan(string name)
.EI
.SP 7 5

This method returns the plan to use in the player's finger,
even when they are off line.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the player
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the plan or 0, if none

.EP

.SI 3
* %^BOLD%^query_project%^RESET%^
.EI
.SI 5
string query_project(string name)
.EI
.SP 7 5

This method returns the project to use in the player's finger,
even when they are off line.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the player
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the project or 0, if none

.EP

.SI 3
* %^BOLD%^query_reference%^RESET%^
.EI
.SI 5
string query_reference(string name)
.EI
.SP 7 5

This method returns the reference string to use in the player's refer,
even when they are off line.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the player
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the reference string or 0, if none

.EP

.SI 3
* %^BOLD%^query_signature%^RESET%^
.EI
.SI 5
string query_signature(string name)
.EI
.SP 7 5

This method returns the signature to use on posts for the player
even when they are off line.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the player
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the signature, "" if none

.EP

.SI 3
* %^BOLD%^special_add_property%^RESET%^
.EI
.SI 5
void special_add_property(string player, string prop, mixed value)
.EI
.SP 7 5

This method updates the cached properties, it's called by
/secure/login.

.EP

.SI 3
* %^BOLD%^test_active%^RESET%^
.EI
.SI 5
varargs int test_active(string player, int noload)
.EI
.SP 7 5

This method determines if a player is still active.
If you need to perform this on a lot of players please use the noload
parameter. When noload is set to 1 test_active will not attempt to load
the player file if it isn't currently loaded and will instead just do a
simple calculation of the players last login time. This is less accurate
but avoids lagging the mud.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - the name of the user
.EP
.SP 9 5
noload - optional parameter to prevent test_active() loading the
player file.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
active or inactive (1 or 0)

.EP

.SI 3
* %^BOLD%^test_age%^RESET%^
.EI
.SI 5
int test_age(string str)
.EI
.SP 7 5

This method determines the age of the player even if they are
not currently on.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name of the user
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the players age

.EP

.SI 3
* %^BOLD%^test_banished%^RESET%^
.EI
.SI 5
int test_banished(string name)
.EI
.SP 7 5

This method checks to see if the name is banished of not.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the check for banishment.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if it banished, 0 if not

.EP

.SI 3
* %^BOLD%^test_birthday%^RESET%^
.EI
.SI 5
string test_birthday(string str)
.EI
.SP 7 5

This method returns the player's birthday date.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name of the user
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the player's birthday

.EP

.SI 3
* %^BOLD%^test_deity%^RESET%^
.EI
.SI 5
string test_deity(string str)
.EI
.SP 7 5

This method determines the deity of the player even if they are
not currently on.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name of the user
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the players deity

.EP

.SI 3
* %^BOLD%^test_email%^RESET%^
.EI
.SI 5
string test_email(string str)
.EI
.SP 7 5

This method determines the email of the player even if they are
not currently on.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name of the user
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the players email

.EP

.SI 3
* %^BOLD%^test_family%^RESET%^
.EI
.SI 5
string test_family(string str)
.EI
.SP 7 5

This method returns the player's family name.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name of the user
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the player's family name

.EP

.SI 3
* %^BOLD%^test_gender%^RESET%^
.EI
.SI 5
int test_gender(string str)
.EI
.SP 7 5

This method determines the gender of the player even if they are
not currently on
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name of the user
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the player's gender
.EP

.SI 3
* %^BOLD%^test_homepage%^RESET%^
.EI
.SI 5
string test_homepage(string str)
.EI
.SP 7 5

This method determines the homepage of the player even if they are
not currently on.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name of the user
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the players homepage

.EP

.SI 3
* %^BOLD%^test_icq%^RESET%^
.EI
.SI 5
string test_icq(string str)
.EI
.SP 7 5

This method determines the ICQ number information of the player
even if they are not currently on.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name of the user
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the players ICQ number as a string

.EP

.SI 3
* %^BOLD%^test_last%^RESET%^
.EI
.SI 5
int test_last(string str)
.EI
.SP 7 5

This method determines the last log on of the player
even if they are not currently on.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name of the user
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the player's last log on

.EP

.SI 3
* %^BOLD%^test_level%^RESET%^
.EI
.SI 5
int test_level(string str)
.EI
.SP 7 5

This method determines the level of the player even if they are
not currently on
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name of the user
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the players level

.EP

.SI 3
* %^BOLD%^test_location%^RESET%^
.EI
.SI 5
string test_location(string str)
.EI
.SP 7 5

This method returns the player's location.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name of the user
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the player's location

.EP

.SI 3
* %^BOLD%^test_property%^RESET%^
.EI
.SI 5
mixed test_property(string name, string str)
.EI
.SP 7 5

This method returns the current value of the property on the
player, even if they are not currently on.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the player name
.EP
.SP 9 5
str - the property to query
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the value of the property

.EP

.SI 3
* %^BOLD%^test_real_name%^RESET%^
.EI
.SI 5
string test_real_name(string str)
.EI
.SP 7 5

This method determines the real name of the player even if they are
not currently on
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name of the user
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the players real name

.EP

.SI 3
* %^BOLD%^test_start_time%^RESET%^
.EI
.SI 5
int test_start_time(string str)
.EI
.SP 7 5

This method determines the time the player started at.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name of the user
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the player's start time

.EP

.SI 3
* %^BOLD%^test_user%^RESET%^
.EI
.SI 5
int test_user(string str)
.EI
.SP 7 5

This method figures out if the user exists even if they are not on.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the name of the user
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if they exist, 0 if they do not

.EP


