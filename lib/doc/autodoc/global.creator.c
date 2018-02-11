.DT
creator.c
$MUDNAME$ autodoc help
creator.c

.SH Description
.SP 5 5

This is the creator player object.  It gives the creators the
bonus extra commands needed by happy creators.
.EP
.SP 10 5


Written by Pinkfish
.EP



.SH See also
.SP 5 5
/global/player.c

.EP
.SH Inherits
.SP 5 5
This class inherits the following classes /global/creator/wiz_file_comm.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/command.h, /include/player_handler.h, /secure/include/rank.h and /secure/include/login_handler.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^query_creator%^RESET%^
.EI
.SI 5
int query_creator()
.EI
.SP 7 5

This method tells us if the object is a creator or not.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the object is a creator, 0 if not.

.EP

.SI 3
* %^BOLD%^receive_snoop%^RESET%^
.EI
.SI 5
void receive_snoop(string bing)
.EI
.SP 7 5

This method is used by the snoop efun to allow creator to see
what other players are doing.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
bing - the message to receive

.EP


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^bulk_delete%^RESET%^
.EI
.SI 5
int bulk_delete(string word)
.EI
.SP 7 5

This method forces a bulk delete on a certain letter.
This letter will then be checked to see if any of
those players have timed out and should be deleted.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the letter to bulk delete
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 on falure and 1 on success

.EP

.SI 3
* %^BOLD%^clean_up_files%^RESET%^
.EI
.SI 5
int clean_up_files(string word)
.EI
.SP 7 5

This method forces the clean up of certain file son the
bulk deleter.  This cleans up all the files associated with
the given player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the name of the player to clean up
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 on success, 0 on failure

.EP

.SI 3
* %^BOLD%^do_qsnoop%^RESET%^
.EI
.SI 5
int do_qsnoop(object * obs)
.EI
.SP 7 5

This method is used to do a quiet snoop on a player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the player to snoop
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 on success, 0 on failure

.EP


