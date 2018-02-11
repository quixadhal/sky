.DT
login.c
$MUDNAME$ autodoc help
login.c

.SH Description
.SP 5 5

The main login object.


Originally written by Pinkfish, who knows when. 

Mangled bunches of times by Pinkfish since then and various other wombles all over the place. 

Put in the random names and the delete character menu options in January 1996. 

Got excited again in June 1996 and modified the random name stuff and made the new player ban code a bit keener - Pinkfish. 

So excited in January 1997 that I wrote a login queue.  Most of it works.  Bug fixing in progress forever.
.EP
.SP 10 5


Written by Pinkfish
.EP

.SH Change history
.SP 5 5
A bunch of changes concerning logging in while there is a
shut-down and logging in invisible. Also added support for restricting
login access - Sandoz, 2003.

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /global/player/family and /std/object.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/player_handler.h, /secure/include/access.h, /include/random_names.h, /include/time.h, /include/clubs.h and /secure/include/login_handler.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^query_delete_player_file_name%^RESET%^
.EI
.SI 5
string query_delete_player_file_name(string name)
.EI
.SP 7 5

This method returns the path to the deleted player file.
This is the deleted player files actual normal location, it was written to
allow moving the player files aruond easier.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the player whose file to find
.EP

.SI 3
* %^BOLD%^query_login_ob%^RESET%^
.EI
.SI 5
int query_login_ob()
.EI
.SP 7 5

This method determines if the object is a login object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
always returns 1

.EP

.SI 3
* %^BOLD%^query_net_dead%^RESET%^
.EI
.SI 5
int query_net_dead()
.EI
.SP 7 5

This method tells us if the object is net dead.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if they are net dead, 0 if they are not

.EP

.SI 3
* %^BOLD%^query_player_file_name%^RESET%^
.EI
.SI 5
string query_player_file_name(string name)
.EI
.SP 7 5

This method returns the path to the player file.
This is the player files actual normal location, it was written to
allow moving the player files aruond easier.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of hte player whose file to find
.EP

.SI 3
* %^BOLD%^special_add_property%^RESET%^
.EI
.SI 5
int special_add_property(string pname, string prop, mixed val)
.EI
.SP 7 5

This method allows you to add properties onto players who are not
currently logged on.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
pname - name of player to change
.EP
.SP 9 5
prop - the property to change
.EP
.SP 9 5
val - the new value for it
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 upon success, 0 upon failure

.EP


