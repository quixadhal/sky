.DT
owned_transport.c
$MUDNAME$ autodoc help
owned_transport.c

.SH Description
.SP 5 5

This effect is for the nice people who own a transport.
.EP
.SP 10 5


Written by Pinkfish

Started Fri Sep 24 1:00:00 1999
.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /std/basic/virtual_quit_control.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/player.h and /include/playtesters.h.
.EP

.SH Classes

.SI 3
* %^BOLD%^riding%^RESET%^
class riding {
object * transport;
string * environments;
mixed save_stuff;
}

.EI


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^remove_owner%^RESET%^
.EI
.SI 5
void remove_owner(object player, class riding arg, int id, object trans)
.EI
.SP 7 5

This method removes the specified transport from the list of
current transports on the player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - the player the transport is removed from
.EP
.SP 9 5
bing - the class!
.EP
.SP 9 5
id - the id of the effect
.EP
.SP 9 5
trans - the transport to remove

.EP


