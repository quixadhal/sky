.DT
simul_efun.c
$MUDNAME$ autodoc help
simul_efun.c

.SH Description
.SP 5 5

The simul_efun object.  This object allows you to create functions which
apear to act like an efun.  An efun is a function which is built into
the driver.  For functions which are on objects you need to specify the
the object name when you call them.
ie: "/handlers/autodoc/autodoc_handler"->add_file(frog);
With a simuluated efun, you would not need to specifiy a file name.  This is
how the functions like match_objects_for_existence() and so on work.
.EP
.SP 10 5


Written by Pinkfish

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /secure/simul_efun/time, /secure/simul_efun/process_value, /secure/simul_efun/array, /secure/simul_efun/debug, /secure/simul_efun/back_trace, /secure/simul_efun/inside_shorts, /secure/simul_efun/query_group, /secure/simul_efun/query_number, /secure/simul_efun/pk_check, /secure/simul_efun/string_to_define, /secure/simul_efun/sqrt, /secure/simul_efun/indent, /secure/simul_efun/find_other_call_out, /secure/simul_efun/unguarded, /secure/simul_efun/add_command, /secure/simul_efun/query_ident, /secure/simul_efun/strip_colours, /secure/simul_efun/snoop_simul, /secure/simul_efun/roll_MdN, /secure/simul_efun/extract, /secure/simul_efun/thing_to_string, /secure/simul_efun/add_action, /secure/simul_efun/shuffle, /secure/simul_efun/add_a, /secure/simul_efun/obj_parser, /secure/simul_efun/modified_efuns and /secure/simul_efun/dump_socket_status.
.EP

.SH Includes
.SP 5 5
This class includes the following files /secure/include/rank.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^adminp%^RESET%^
.EI
.SI 5
int adminp(mixed person)
.EI
.SP 7 5

This method returns whether or not the given player is an admin.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
person - the player to test
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
whether or not the player is an admin
.EP

.SI 3
* %^BOLD%^creatorp%^RESET%^
.EI
.SI 5
int creatorp(mixed person)
.EI
.SP 7 5

This method returns whether or not the given player is a creator.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
person - the player to test
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
whether or not the player is a creator
.EP

.SI 3
* %^BOLD%^dir_exists%^RESET%^
.EI
.SI 5
int dir_exists(string str)
.EI
.SP 7 5

This method returns true if the directory str exists.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the directory path to test
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the directory exists
.EP

.SI 3
* %^BOLD%^file_exists%^RESET%^
.EI
.SI 5
int file_exists(string str)
.EI
.SP 7 5

This method returns true if the file str exists.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the file name to test
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the file exists
.EP

.SI 3
* %^BOLD%^liaisonp%^RESET%^
.EI
.SI 5
int liaisonp(mixed person)
.EI
.SP 7 5

This method returns whether or not the given player is a liaison.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
person - the player to test
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
whether or not the player is a liaison
.EP

.SI 3
* %^BOLD%^lordp%^RESET%^
.EI
.SI 5
int lordp(mixed person)
.EI
.SP 7 5

This method returns whether or not the given player is a lord.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
person - the player to test
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
whether or not the player is a lord
.EP

.SI 3
* %^BOLD%^playtesterp%^RESET%^
.EI
.SI 5
varargs int playtesterp(mixed person, int nocre)
.EI
.SP 7 5

This method returns whether or not the given player is a playtester.
This will return 1 for creators as well, unless the optional nocre
flag is set.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
person - the player to test
.EP
.SP 9 5
optional - flag to make it return 0 for creators
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
whether or not the player is a playtester
.EP

.SI 3
* %^BOLD%^rank%^RESET%^
.EI
.SI 5
int rank(mixed person)
.EI
.SP 7 5

This method returns the rank level of the player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
person - the player to get the rank for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the rank of the player as defined in rank.h
.EP

.SI 3
* %^BOLD%^seniorp%^RESET%^
.EI
.SI 5
int seniorp(mixed person)
.EI
.SP 7 5

This method returns whether or not the given player is a senior creator.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
person - the creator to test
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
whether or not the player is a senior creator
.EP


