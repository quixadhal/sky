.DT
intermud.c
$MUDNAME$ autodoc help
intermud.c

.SH Description
.SP 5 5

An intermud (3) handler;  Galileo, 12-05-98
Changed to work on Skylib; Shaydz; 2000
.EP
.SP 10 5

.EP

.SH Change history
.SP 5 5
Cleaned up a little, moved some of the includes
to here and added some documentation.
- Sandoz, June 2003.

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /secure/std/modules/tcp_client.
.EP

.SH Includes
.SP 5 5
This class includes the following files /secure/handlers/intermud/emoteto.h, /secure/handlers/intermud/who.h, /secure/handlers/intermud/channel.h, /secure/handlers/intermud/locate.h, /secure/handlers/intermud/tell.h, /secure/include/socket_errors.h, /secure/include/intermud.h, /secure/handlers/intermud/startup.h, /secure/handlers/intermud/finger.h, /secure/handlers/intermud/error.h and /secure/include/network.h.
.EP

.SH Classes

.SI 3
* %^BOLD%^admin_channel%^RESET%^
class admin_channel {
int type;
string * members;
}

.EI

.SI 3
* %^BOLD%^intermud%^RESET%^
class intermud {
int passwd , configured;
class list channel_list , mud_list;
string connected;
mixed routers;
}

.EI

.SI 3
* %^BOLD%^list%^RESET%^
class list {
int id;
mapping list;
}

.EI

.SI 3
* %^BOLD%^user_info%^RESET%^
class user_info {
string name;
string email_address;
string location;
string homepage_url;
string birthdate;
}

.EI

.SI 3
* %^BOLD%^user_stats%^RESET%^
class user_stats {
int date_created , date_last_login , date_last_logout;
int login_count;
int login_attempts;
int login_time;
string * sites;
}

.EI


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^admin_channels%^RESET%^
.EI
.SI 5
mapping admin_channels()
.EI

.SI 3
* %^BOLD%^administrate_channel%^RESET%^
.EI
.SI 5
string administrate_channel(string cname, string * add_list, string * remove_list)
.EI
.SP 7 5

This method is used to administrate an intermud channel.

.EP

.SI 3
* %^BOLD%^admitted_channels%^RESET%^
.EI
.SI 5
string * admitted_channels(string channel)
.EI

.SI 3
* %^BOLD%^all_channels%^RESET%^
.EI
.SI 5
mapping all_channels()
.EI

.SI 3
* %^BOLD%^available_channel%^RESET%^
.EI
.SI 5
int available_channel(string channel)
.EI

.SI 3
* %^BOLD%^available_channels%^RESET%^
.EI
.SI 5
string * available_channels()
.EI

.SI 3
* %^BOLD%^chan_who%^RESET%^
.EI
.SI 5
int chan_who(string channel, string mud)
.EI
.SP 7 5

This method queries who are listening to the specified
intermud channel.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
channel - the channel to get the who list for
.EP
.SP 9 5
mud - the
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 upon success, 0 upon failure

.EP

.SI 3
* %^BOLD%^channel%^RESET%^
.EI
.SI 5
int channel(string channel, string name, string message)
.EI
.SP 7 5

This method sends a channel message to the router.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
channel - the channel to send the message to
.EP
.SP 9 5
name - the name of the person sending the message
.EP
.SP 9 5
message - the message to send
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 upon success, 0 upon failure

.EP

.SI 3
* %^BOLD%^channel_exists%^RESET%^
.EI
.SI 5
int channel_exists(string channel)
.EI

.SI 3
* %^BOLD%^create_channel%^RESET%^
.EI
.SI 5
string create_channel(string cname, int ctype)
.EI
.SP 7 5

This method creates an intermud channel.
The channel types that can be used are:
.EP
.SP 7 5
0 - selectively banned.
.EP
.SP 7 5
1 - selectively admitted.
.EP
.SP 7 5
2 - filtered (selectively admitted).
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
cname - the name of the channel to create
.EP
.SP 9 5
ctype - the type of the channel to create
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a message describing our progress

.EP

.SI 3
* %^BOLD%^delete_channel%^RESET%^
.EI
.SI 5
string delete_channel(string cname)
.EI
.SP 7 5

This method deletes an intermud channel.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
cname - the name of the channel to delete
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a message describing our progress

.EP

.SI 3
* %^BOLD%^emote%^RESET%^
.EI
.SI 5
int emote(string user, string mud, string message)
.EI

.SI 3
* %^BOLD%^finger%^RESET%^
.EI
.SI 5
int finger(string user, string mud)
.EI

.SI 3
* %^BOLD%^listen_channel%^RESET%^
.EI
.SI 5
string listen_channel(string cname, int state)
.EI
.SP 7 5

This method makes us listen or stop listening a channel.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
cname - the name of the channel
.EP
.SP 9 5
state - 1 to start listening to a channel, 0 to disconnect
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a message describing our progress

.EP

.SI 3
* %^BOLD%^listen_channels%^RESET%^
.EI
.SI 5
string * listen_channels()
.EI

.SI 3
* %^BOLD%^locate%^RESET%^
.EI
.SI 5
int locate(string user)
.EI

.SI 3
* %^BOLD%^mud_exists%^RESET%^
.EI
.SI 5
string mud_exists(string mud)
.EI
.SP 7 5

This method queries whether the specified mud exists or not.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
mud - the mud to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the name of the mud if it exists, or 0 if not

.EP

.SI 3
* %^BOLD%^mudlist%^RESET%^
.EI
.SI 5
string mudlist(string mud, mapping flags)
.EI
.SP 7 5

This method is used by the mudlist command.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
mud - the mud to get info on
.EP
.SP 9 5
flags - the flags
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a string describing our progress

.EP

.SI 3
* %^BOLD%^packet_allocate%^RESET%^
.EI
.SI 5
mixed * packet_allocate(string type)
.EI
.SP 7 5

This method allocates a packet of the specified type.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the type of the packet to allocate
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the newly allocated packet

.EP

.SI 3
* %^BOLD%^query_channel_owner%^RESET%^
.EI
.SI 5
string query_channel_owner(string channel)
.EI

.SI 3
* %^BOLD%^query_channel_type%^RESET%^
.EI
.SI 5
int query_channel_type(string channel)
.EI

.SI 3
* %^BOLD%^shutdown%^RESET%^
.EI
.SI 5
int shutdown()
.EI
.SP 7 5

This method initiates intermud shutdown.
It disconnects all channels etc.

.EP

.SI 3
* %^BOLD%^tell%^RESET%^
.EI
.SI 5
int tell(string user, string mud, string message)
.EI

.SI 3
* %^BOLD%^who%^RESET%^
.EI
.SI 5
int who(string mud)
.EI


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^client_close_callback%^RESET%^
.EI
.SI 5
void client_close_callback(int fd)
.EI

.SI 3
* %^BOLD%^client_read_callback%^RESET%^
.EI
.SI 5
void client_read_callback(int fd, mixed * packet)
.EI

.SI 3
* %^BOLD%^client_write_callback%^RESET%^
.EI
.SI 5
void client_write_callback(int fd)
.EI


