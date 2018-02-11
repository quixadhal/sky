.DT
crime_handler.c
$MUDNAME$ autodoc help
crime_handler.c

.SH Description
.SP 5 5

This is the crime handler.
Keeps track of criminals.
By Sandoz, 28th July 2001.

.EP
.SP 10 5

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/crime.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_criminal%^RESET%^
.EI
.SI 5
int add_criminal(string place_name, mixed player, int type)
.EI
.SP 7 5

This method adds a player into the criminals array
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
place_name - the name of the place to add the criminal in
.EP
.SP 9 5
player - the name or object of the player to add
.EP
.SP 9 5
type - the type of offense.  They have been defined as follows -
       VANDALISM  1 - vandalism
       THEFT      2 - stealing
       SHOPLIFT   3 - shoplifting
       SLAUGHTER  4 - killing innocents
       RESIST     5 - resisting arrest
       GUARDKILL  6 - guard killing
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if successfully added, 0 if not
.EP

.SI 3
* %^BOLD%^add_sentence%^RESET%^
.EI
.SI 5
int add_sentence(string place_name, mixed player)
.EI
.SP 7 5

This method raises a player's sentence count in the specified area
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
place_name - the name of the place to raise the count in
.EP
.SP 9 5
player - the name or object of the player to raise the count for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if successfully added, 0 if not

.EP

.SI 3
* %^BOLD%^check_arrays%^RESET%^
.EI
.SI 5
void check_arrays()
.EI
.SP 7 5

This method checks to make sure all the criminals still exist.
It also removes the invalid criminals.

.EP

.SI 3
* %^BOLD%^query_crime_string%^RESET%^
.EI
.SI 5
string query_crime_string(string place_name, mixed player)
.EI
.SP 7 5

This method returns the types of crimes the person has committed
in a nice string format
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
place_name - the name of the place to get the crime string
for the player in
.EP
.SP 9 5
player - the name or object of the player to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the types of crimes the player has committed

.EP

.SI 3
* %^BOLD%^query_crimes%^RESET%^
.EI
.SI 5
mapping query_crimes(string place_name, mixed player)
.EI
.SP 7 5

This method returns the types of crimes the person has committed
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
place_name - the name of the place to get the crimes for
the player in
.EP
.SP 9 5
player - the name or object of the player to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the types of crimes the player has committed

.EP

.SI 3
* %^BOLD%^query_criminal%^RESET%^
.EI
.SI 5
int query_criminal(string place_name, mixed player)
.EI
.SP 7 5

This method checks if the player is a criminal
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
place_name - the name of the place to check
.EP
.SP 9 5
player - the name or object of the player to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if they're a criminal, 0 if not

.EP

.SI 3
* %^BOLD%^query_criminals%^RESET%^
.EI
.SI 5
string * query_criminals(string place_name)
.EI
.SP 7 5

This method returns all the criminals in the specified place.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
place_name - the name of the place to get the
criminals' names for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
all current criminals' names

.EP

.SI 3
* %^BOLD%^query_killer%^RESET%^
.EI
.SI 5
int query_killer(string place_name, mixed player)
.EI
.SP 7 5

This method checks if the player is a guard killer
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
place_name - the name of the place to check if the
player is a killer in
.EP
.SP 9 5
player - the name or object of the player to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if they're a guard killer, 0 if not

.EP

.SI 3
* %^BOLD%^query_sentence_count%^RESET%^
.EI
.SI 5
int query_sentence_count(string place_name, mixed player)
.EI
.SP 7 5

This method returns the sentence count of the player in the
specified area
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
place_name - the name of the place to get the count for
.EP
.SP 9 5
player - the name or object of the player to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the types of crimes the player has committed

.EP

.SI 3
* %^BOLD%^query_sentence_length%^RESET%^
.EI
.SI 5
int query_sentence_length(string place_name, mixed player)
.EI
.SP 7 5

This method returns the players sentence length based on
their criminal ledger in the specified area
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
place_name - the name of the place to get their sentence
length in
.EP
.SP 9 5
player - the name or object of the player to get the
sentence length for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the player's sentence length

.EP

.SI 3
* %^BOLD%^query_sorted_criminals%^RESET%^
.EI
.SI 5
string * query_sorted_criminals(string place_name)
.EI
.SP 7 5

This method returns the sorted array of criminals in a
specified area
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
place_name - the name of the place to get the names for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the sorted array of criminals

.EP

.SI 3
* %^BOLD%^refresh_criminal%^RESET%^
.EI
.SI 5
void refresh_criminal(string player)
.EI
.SP 7 5

This method deletes the given player by name from all
places' criminal arrays.  This should be called by the
refresh handler when the player refreshes or is deleted.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - the player to delete
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the operation was successful, 0 if it failed

.EP

.SI 3
* %^BOLD%^remove_criminal%^RESET%^
.EI
.SI 5
int remove_criminal(string place_name, mixed player)
.EI
.SP 7 5

This method removes a player from the criminals array
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
place_name - the name of the place to clear the player's crime ledger
.EP
.SP 9 5
player - the name or object of the player to remove
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if successfully removed, 0 if not

.EP

.SI 3
* %^BOLD%^remove_sentences%^RESET%^
.EI
.SI 5
int remove_sentences(string place_name, mixed player)
.EI
.SP 7 5

This method nullifies a players' sentence count
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
place_name - the name of the place to clear the player's count in
.EP
.SP 9 5
player - the name or object of the player to remove
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if successfully removed, 0 if not

.EP

.SI 3
* %^BOLD%^stats%^RESET%^
.EI
.SI 5
mixed * stats()
.EI

.SI 3
* %^BOLD%^valid_crime%^RESET%^
.EI
.SI 5
int valid_crime(int type)
.EI
.SP 7 5

This method if the crime type is valid.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the crime type to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the crime type is valid, 0 if not

.EP

.SI 3
* %^BOLD%^valid_place%^RESET%^
.EI
.SI 5
int valid_place(string place_name)
.EI
.SP 7 5

This method checks if the place is a valid place.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
place_name - the place to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the place is valid, 0 if not

.EP


