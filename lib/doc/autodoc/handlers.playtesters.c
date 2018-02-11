.DT
playtesters.c
$MUDNAME$ autodoc help
playtesters.c

.SH Description
.SP 5 5

Keeps track of all the current playtesters.  This keeps track of all
the current playtesters.
.EP
.SP 10 5

.EP

.SH Classes

.SI 3
* %^BOLD%^application_data%^RESET%^
class application_data {
string name;
string why;
string areas;
string vouches;
string muds;
int time;
}

.EI
.SP 7 5

This the class is used to store playtester application data.
.EP
.SI 7
%^BOLD%^Members:%^RESET%^
.EI
.SP 9 5
name - the name of the applicant
.EP
.SP 9 5
why - why they want to apply
.EP
.SP 9 5
areas - the areas of the mud they would like to see developed
.EP
.SP 9 5
vouches - their vouches
.EP
.SP 9 5
muds - the muds they have played at
.EP
.SP 9 5
time - the time they applied at

.EP


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_playtester%^RESET%^
.EI
.SI 5
int add_playtester(string name)
.EI
.SP 7 5

This method adds the playtester to the array of current play
testers.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the player to add
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if successful, 0 on failure
.EP

.SI 3
* %^BOLD%^add_route%^RESET%^
.EI
.SI 5
int add_route(string start, string dest)
.EI
.SP 7 5

This method adds a transit route into the handler,
that PTs can use with their badges.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
start - the location this route can be used from
.EP
.SP 9 5
dest - the file name of the destination of the route
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the destination room exists, 0 if not

.EP

.SI 3
* %^BOLD%^add_senior_playtester%^RESET%^
.EI
.SI 5
int add_senior_playtester(string name)
.EI
.SP 7 5

This method adds the player as a senior playtester.  The playtester
needs to already be added to become a senior playtester.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the player to add
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 on success, 0 on failure
.EP

.SI 3
* %^BOLD%^check_playtesters%^RESET%^
.EI
.SI 5
void check_playtesters(string last)
.EI
.SP 7 5

This goes through the list of playtesters and checks to make
sure they are all still valid.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
last - the last playtester to check
.EP

.SI 3
* %^BOLD%^create_badge%^RESET%^
.EI
.SI 5
int create_badge(string player)
.EI
.SP 7 5

This method creates a PT badge and moves it to the target player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - the player to create a badge for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if successful, 0 if not

.EP

.SI 3
* %^BOLD%^do_accept_app%^RESET%^
.EI
.SI 5
int do_accept_app(string name)
.EI
.SP 7 5

This method will accept an application by the specified player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the player whose application to accept

.EP

.SI 3
* %^BOLD%^do_goto%^RESET%^
.EI
.SI 5
int do_goto(string destination)
.EI
.SP 7 5

This method is used by the PT badge to move PTs from
one location to another.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
destination - the destination to go to

.EP

.SI 3
* %^BOLD%^do_init%^RESET%^
.EI
.SI 5
void do_init(object badge)
.EI
.SP 7 5

This method is used by the PT badge and gives all the transit
commands to this_player().
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
badge - the badge that is giving out the commands

.EP

.SI 3
* %^BOLD%^do_list_apps%^RESET%^
.EI
.SI 5
int do_list_apps()
.EI
.SP 7 5

This method prints the list of pending applications.

.EP

.SI 3
* %^BOLD%^do_reject_app%^RESET%^
.EI
.SI 5
int do_reject_app(string name)
.EI
.SP 7 5

This method will reject an application by the specified player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the player whose application to reject

.EP

.SI 3
* %^BOLD%^do_show_app%^RESET%^
.EI
.SI 5
int do_show_app(string name)
.EI
.SP 7 5

This method prints the specified player's playtester application.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the player to get the application for

.EP

.SI 3
* %^BOLD%^list_destinations%^RESET%^
.EI
.SI 5
int list_destinations()
.EI
.SP 7 5

This method prints the routes that can be used from TP's current
location to TP.  This is used by the PT badge.

.EP

.SI 3
* %^BOLD%^list_routes%^RESET%^
.EI
.SI 5
int list_routes()
.EI
.SP 7 5

This method prints all routes to TP, if TP is a creator.

.EP

.SI 3
* %^BOLD%^list_transits%^RESET%^
.EI
.SI 5
int list_transits()
.EI
.SP 7 5

This method prints all routes to this_player().

.EP

.SI 3
* %^BOLD%^query_accept_applications%^RESET%^
.EI
.SI 5
int query_accept_applications()
.EI
.SP 7 5

This method queries whether or not we are currently
accepting applications.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if we are accepting applications, 0 if not

.EP

.SI 3
* %^BOLD%^query_is_lord%^RESET%^
.EI
.SI 5
int query_is_lord(mixed who)
.EI
.SP 7 5

This method queries whether or not the specified person is a
lord of the playtesters domain or not.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
who - the name or object of the player to test
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if we are a lord of playtesting, 0 if not

.EP

.SI 3
* %^BOLD%^query_playtester%^RESET%^
.EI
.SI 5
int query_playtester(string name)
.EI
.SP 7 5

This method tests to see if the given name is a playtester.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if they are a playtester, 0 if they are not.
.EP

.SI 3
* %^BOLD%^query_playtesters%^RESET%^
.EI
.SI 5
string * query_playtesters()
.EI
.SP 7 5

This method returns a list of the current playtesters.  This is
a list of string names in an array.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the list of current playtesters

.EP

.SI 3
* %^BOLD%^query_pt_data%^RESET%^
.EI
.SI 5
mapping query_pt_data(string name)
.EI
.SP 7 5

Returns the raw playtester data for processing!

.EP

.SI 3
* %^BOLD%^query_routes%^RESET%^
.EI
.SI 5
mapping query_routes()
.EI
.SP 7 5

The method returns the raw routes mapping.

.EP

.SI 3
* %^BOLD%^query_senior_playtester%^RESET%^
.EI
.SI 5
int query_senior_playtester(string name)
.EI
.SP 7 5

This method determines if they are a senior playtester.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if they are a senior playteser, 0 if they are not
.EP

.SI 3
* %^BOLD%^query_show_list%^RESET%^
.EI
.SI 5
string query_show_list()
.EI
.SP 7 5

This is a nice way of showing a list of the current playtesters.
I am not really sure what sort of results it shows, some comments
could be nice in here.

.EP

.SI 3
* %^BOLD%^reason_invalid_playtester%^RESET%^
.EI
.SI 5
string reason_invalid_playtester(string name)
.EI
.SP 7 5

THis method returns a string reason why they are an invalid play
tester.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the player to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the string reason, 0 if none
.EP

.SI 3
* %^BOLD%^remove_playtester%^RESET%^
.EI
.SI 5
int remove_playtester(string name, string reason)
.EI
.SP 7 5

This method will remove the playtester from the current list of
play testers.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the player to remove as a play tester
.EP
.SP 9 5
reason - the reason for the removal
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 on failure and 1 on success
.EP

.SI 3
* %^BOLD%^remove_route%^RESET%^
.EI
.SI 5
int remove_route(string start, string dest)
.EI
.SP 7 5

This method removes a transit route from the handler.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
start - the starting location of the route to remove
.EP
.SP 9 5
dest - the destination file name of the route to remove
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if successfully removed, 0 if destination didn't exist

.EP

.SI 3
* %^BOLD%^remove_senior_playtester%^RESET%^
.EI
.SI 5
int remove_senior_playtester(string name, string reason)
.EI
.SP 7 5

This method removes a senior playtester.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the senior playtester to remove
.EP
.SP 9 5
reason - the reason for the removal
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if successfully removed, 0 if not

.EP

.SI 3
* %^BOLD%^report_made%^RESET%^
.EI
.SI 5
void report_made(string name, string type, string file, string text)
.EI
.SP 7 5

This is called when a playtester makes a bug report.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the playtester
.EP
.SP 9 5
type - the type of report
.EP
.SP 9 5
the - file the report is on
.EP
.SP 9 5
the - text associated with the report

.EP

.SI 3
* %^BOLD%^set_accept_applications%^RESET%^
.EI
.SI 5
void set_accept_applications(int i)
.EI
.SP 7 5

This method sets whether or not we are accepting applications.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
i - 1 to start accepting apps, 0 to stop

.EP

.SI 3
* %^BOLD%^valid_playtester%^RESET%^
.EI
.SI 5
int valid_playtester(string name)
.EI
.SP 7 5

This method determines if they are a valid playtester or not.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the player to test
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if they are, 0 if they are not
.EP


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^compile_app%^RESET%^
.EI
.SI 5
varargs string compile_app(class application_data data, int cols, int flag)
.EI
.SP 7 5

This method makes a nice string out of the PT application data.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
data - the class to process
.EP
.SP 9 5
cols - the cols to wrap at
.EP
.SP 9 5
flag - if flag is set, the line about whose app
it is will not be added
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the application in a nice string format

.EP

.SI 3
* %^BOLD%^log_application%^RESET%^
.EI
.SI 5
void log_application(string name, int accept)
.EI
.SP 7 5

This method deletes an application from the mapping, logs it,
and sends out the appropriate mail to the applicant.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the applicant whose application to delete
.EP
.SP 9 5
accept - whether or not we accepted the application

.EP


