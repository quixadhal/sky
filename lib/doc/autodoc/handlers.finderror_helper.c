.DT
finderror_helper.c
$MUDNAME$ autodoc help
finderror_helper.c

.SH Description
.SP 5 5

This handler contains the methods to handle the creators list of
directories to control bugs in.

.EP
.SP 10 5

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /secure/std/errors_base.
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
* %^BOLD%^add_dir%^RESET%^
.EI
.SI 5
int add_dir(string word, string dir, int recursive)
.EI
.SP 7 5

This method adds the directory to the creators directory list to check.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the creator to add the directory to
.EP
.SP 9 5
dir - the directory to add
.EP
.SP 9 5
recursive - to add the directory recursively

.EP

.SI 3
* %^BOLD%^get_data_file%^RESET%^
.EI
.SI 5
int get_data_file(string word)
.EI
.SP 7 5

This method loads up the data file for the particular player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the creator name to load the data for

.EP

.SI 3
* %^BOLD%^get_next_dir%^RESET%^
.EI
.SI 5
string get_next_dir(string word)
.EI
.SP 7 5

This method gets the next directory which has an error in it from
the creators list of directories to search.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the creator to get the next directory for

.EP

.SI 3
* %^BOLD%^init_data%^RESET%^
.EI
.SI 5
void init_data(string word)
.EI
.SP 7 5

This method initialises the data for a particular creator.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the creator name to get the data for

.EP

.SI 3
* %^BOLD%^query_dirs%^RESET%^
.EI
.SI 5
string * query_dirs(string word)
.EI
.SP 7 5

This method returns the list of dirs associated with this creator.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the creator to look up the directories for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the array of directories

.EP

.SI 3
* %^BOLD%^query_dirs_count%^RESET%^
.EI
.SI 5
string * query_dirs_count(string word)
.EI
.SP 7 5

This method returns the error counts for all the directories in the
list of directories to watch.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the creator to get the dir count for

.EP

.SI 3
* %^BOLD%^remove_dir%^RESET%^
.EI
.SI 5
int remove_dir(string word, string dir, int recursive)
.EI
.SP 7 5

This method will remove a directory from the list that a player
checks.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the creator to remove the directory from
.EP
.SP 9 5
dir - the directory to remove
.EP
.SP 9 5
recursive - to recursively remove them

.EP

.SI 3
* %^BOLD%^save_data_file%^RESET%^
.EI
.SI 5
void save_data_file(string word)
.EI
.SP 7 5

The methods saves the information stored into the error information
in their directory.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the player name to save the data for

.EP


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^recursive_add_dir%^RESET%^
.EI
.SI 5
void recursive_add_dir(string word, string dir)
.EI
.SP 7 5

This method adds all the subdirectories of the specified dir into the
search list.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the creatro to add to the list of
.EP
.SP 9 5
dir - the directory to recursively add to

.EP


