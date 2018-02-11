.DT
login_handler.c
$MUDNAME$ autodoc help
login_handler.c

.SH Description
.SP 5 5

The login handler lets you have a funct called as a player logs in or out.
The funct you setup will be called when the player logs in or out.  The
object will also give you a list of all the people who are logged in. This is
a by product of its method of operation rather than anything important.
It is quite possibly more useful to call users().


The funct which is to be called only needs to be called once as the objects state is saved.  When a player enters, logsout or goes net dead the funct will be called on the specified object.  The funct will have two parameters, the first will be the player name logging in/out and the last will be a define from /include/login.h specifying which sort of event has occured. 

A new temporary method of adding a call back to the login_handler has been added.  This will allow you to add a call that is not saved, so you can use an object reference instead of a file name.
.EP
.SP 10 5


Written by Furball
.EP



.SH See also
.SP 5 5
/secure/login, efun::users() and /include/login.h

.EP
.SH Change history
.SP 5 5
Added the possibility to restrict login access - Sandoz, 2003.
.EP

.SH Includes
.SP 5 5
This class includes the following files /secure/include/login.h, /include/player_handler.h, /secure/include/colors.h and /secure/include/login_handler.h.
.EP

.SH Classes

.SI 3
* %^BOLD%^login_information%^RESET%^
class login_information {
mixed ob;
string funct;
}

.EI


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_dynamic_login_call%^RESET%^
.EI
.SI 5
int add_dynamic_login_call(string player, mixed funct, mixed obj)
.EI
.SP 7 5

This method adds a funct to be called whenever a player logs
in.  The funct and object are stored only for this reboot
so they may be object references or funct pointers.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - specfic player to look for "all" for everyone
.EP
.SP 9 5
func - the funct to call
.EP
.SP 9 5
obj - the object to call the funct on
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 on failure and 1 on success
.EP

.SI 3
* %^BOLD%^add_static_login_call%^RESET%^
.EI
.SI 5
int add_static_login_call(string player, mixed funct, mixed obj)
.EI
.SP 7 5

This method adds a funct to be called whenever a player logs
in.  The funct and object both need to be strings so that
they are saved correctly.  This will be saved to the save file
and restored over logins.


The function will be called with two parameters, the first is the name of the player and the second is the type of the event.  The event types are defined in /include/login.h  The event will be one of RECONNECT, LOGIN, LOGOUT, NETDEATH.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - specfic player to look for "all" for everyone
.EP
.SP 9 5
func - the funct to call
.EP
.SP 9 5
obj - the object to call the funct on
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 on failure and 1 on success
.EP

.SI 3
* %^BOLD%^add_to_login_queue%^RESET%^
.EI
.SI 5
void add_to_login_queue(object login_ob)
.EI
.SP 7 5

This method adds an object to the login queue.  This is called from
inside /secure/login.c
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
login_ob - the object to add to the queue

.EP

.SI 3
* %^BOLD%^get_login_mode%^RESET%^
.EI
.SI 5
string get_login_mode(int lvl)
.EI
.SP 7 5

This method returns a description for the specified restriction
level in a string.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
lvl - the restriction level to return a description for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a string describing the restriction level

.EP

.SI 3
* %^BOLD%^get_message%^RESET%^
.EI
.SI 5
string get_message(string mess_name)
.EI
.SP 7 5

This function is used to cache the login messages used by /secure/login
it costs a bit in memory but saves us having to re-read the same text
file everytime someone logs in.
For security reasons this function will only work with files in /doc
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
the - filename of the file to be returned
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the text of the file.

.EP

.SI 3
* %^BOLD%^is_discworld_full%^RESET%^
.EI
.SI 5
int is_discworld_full(int logins)
.EI
.SP 7 5

Try and figure out if the mud is full or not.  Counts the number
of players and returns a true or false value.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
logins - a flag
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the mud is full, 0 if it is not

.EP

.SI 3
* %^BOLD%^pop_from_login_queue%^RESET%^
.EI
.SI 5
object pop_from_login_queue()
.EI
.SP 7 5

This method returns the top element of the login queue and removes
them from it.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the top element of the login queue, 0 if none

.EP

.SI 3
* %^BOLD%^query_best%^RESET%^
.EI
.SI 5
string query_best()
.EI
.SP 7 5

This returns the player name with the best alignment.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
player name with the best alignment

.EP

.SI 3
* %^BOLD%^query_can_log_in%^RESET%^
.EI
.SI 5
int query_can_log_in(string who)
.EI
.SP 7 5

This method tests to see whether a specific person can
log on at the time.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
who - the name of the person trying to log in
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if they are allowed to log in, 0 if not

.EP

.SI 3
* %^BOLD%^query_lockdowns%^RESET%^
.EI
.SI 5
void query_lockdowns()
.EI
.SP 7 5

This method prints all the locked down sites.

.EP

.SI 3
* %^BOLD%^query_login_mode%^RESET%^
.EI
.SI 5
int query_login_mode()
.EI
.SP 7 5

This method returns our login restriction level.
The return value is one of the following.
0 - unrestricted
1 - restricted to playtesters
2 - restricted to creators
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0, 1 or 2
.EP

.SI 3
* %^BOLD%^query_login_queue%^RESET%^
.EI
.SI 5
object * query_login_queue()
.EI
.SP 7 5

This method returns the current list of people in the login
queue.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the objects in the login queue

.EP

.SI 3
* %^BOLD%^query_players_on%^RESET%^
.EI
.SI 5
string * query_players_on()
.EI
.SP 7 5

This method returns a list of the current players who are
online.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the string names of the online players

.EP

.SI 3
* %^BOLD%^query_worst%^RESET%^
.EI
.SI 5
string query_worst()
.EI
.SP 7 5

This returns the player name with the worst alignment.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
player name with the worst alignment

.EP

.SI 3
* %^BOLD%^remove_dynamic_login_call%^RESET%^
.EI
.SI 5
int remove_dynamic_login_call(string player, mixed funct, mixed obj)
.EI
.SP 7 5

This method removes a login call.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - the player specifier
.EP
.SP 9 5
funct - the funct name
.EP
.SP 9 5
obj - the object to call the funct on
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 on failure and 1 on success
.EP

.SI 3
* %^BOLD%^remove_from_login_queue%^RESET%^
.EI
.SI 5
void remove_from_login_queue(object ob)
.EI
.SP 7 5

This method removes an object from the login queue, if they log out
or something.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object to remove from the queue

.EP

.SI 3
* %^BOLD%^remove_static_login_call%^RESET%^
.EI
.SI 5
int remove_static_login_call(string player, mixed funct, mixed obj)
.EI
.SP 7 5

This method removes a login call.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - the player specifier
.EP
.SP 9 5
funct - the funct name
.EP
.SP 9 5
obj - the object to call the funct on
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 on failure and 1 on success
.EP

.SI 3
* %^BOLD%^set_login_mode%^RESET%^
.EI
.SI 5
int set_login_mode(int lvl)
.EI
.SP 7 5

This method sets the restriction level for loggin in.
This can be used to restrict access to the mud at three levels.
0 - unrestricted
1 - restricted to playtesters
2 - restricted to creators
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
lvl - the restriction level
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 upon success, 0 upon failure
.EP


