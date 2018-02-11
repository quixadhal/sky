.DT
channel.c
$MUDNAME$ autodoc help
channel.c

.SH Description
.SP 5 5

Chat daemon from the Nightmare mudlib ... "borrowed" by Sibbis 12/10/1994
Modified extensively for the Cyningdom of Suvangi by Sibbis 12/10/1994
Cleaned up and modified for new intermud(3) client;  Galileo, 2/4/99
Modified for the Skylib Mudlib: Shaydz 2001

.EP
.SP 10 5

.EP

.SH Includes
.SP 5 5
This class includes the following files /secure/include/socket_errors.h, /include/drinks.h and /secure/include/network.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^query_registered_channels%^RESET%^
.EI
.SI 5
string * query_registered_channels()
.EI
.SP 7 5

This method returns the names of all registered channels.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the names of registered channels

.EP

.SI 3
* %^BOLD%^query_users%^RESET%^
.EI
.SI 5
string * query_users(string channel)
.EI
.SP 7 5

This method returns the list of users for the specified channel.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
channel - the channel to get the users list for

.EP


