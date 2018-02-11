.DT
gossip_handler.c
$MUDNAME$ autodoc help
gossip_handler.c

.SH Description
.SP 5 5

Deals out random gossip to people who request it.


Add rumours!
.EP
.SP 10 5


Written by Pinkfish

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/gossip.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_gossip%^RESET%^
.EI
.SI 5
void add_gossip(class gossip_data data)
.EI
.SP 7 5

This method adds a gossip string and is called by the gossip
effects on NPCs.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
data - the gossip data to add

.EP

.SI 3
* %^BOLD%^add_rumour%^RESET%^
.EI
.SI 5
void add_rumour(string name, string mess)
.EI
.SP 7 5

Rumours are another method of dealing out gossip.
Rumours are added by creators...
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the person saying the rumour
.EP
.SP 9 5
mess - the rumour message

.EP

.SI 3
* %^BOLD%^query_accept_gossip%^RESET%^
.EI
.SI 5
int query_accept_gossip()
.EI
.SP 7 5

This method returns whether or not we are accepting new gossip.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if we are accepting new gossip, 0 if not

.EP

.SI 3
* %^BOLD%^query_gossip%^RESET%^
.EI
.SI 5
class gossip_data * query_gossip()
.EI
.SP 7 5

This method returns the complete gossip array
which NPCs are drawing from.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
an array of gossip classes
.EP

.SI 3
* %^BOLD%^query_random_gossip%^RESET%^
.EI
.SI 5
class gossip_data query_random_gossip()
.EI
.SP 7 5

This method returns a random piece of gossip.
This is a class of two elements - the person
who said the gossip and what they said.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a class of gossip data

.EP

.SI 3
* %^BOLD%^query_rumours%^RESET%^
.EI
.SI 5
class gossip_data * query_rumours()
.EI
.SP 7 5

This method returns all of the current rumours.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
an array of rumour classes
.EP

.SI 3
* %^BOLD%^remove_gossip%^RESET%^
.EI
.SI 5
void remove_gossip(string match)
.EI
.SP 7 5

This method removes all gossips with the specified
gossip string from the gossip array.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
match - the string to remove

.EP

.SI 3
* %^BOLD%^remove_rumour%^RESET%^
.EI
.SI 5
void remove_rumour(string match)
.EI
.SP 7 5

This method removes all rumours with the specified
rumour string from the rumour array.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
match - the string to remove

.EP


