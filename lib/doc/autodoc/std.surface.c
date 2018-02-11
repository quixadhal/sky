.DT
surface.c
$MUDNAME$ autodoc help
surface.c

.SH Description
.SP 5 5

This method sets our maximum capacity.
.EP
.SP 10 5

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /std/basic/cute_look and /std/object.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/player.h and /include/playtesters.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^query_has_surface%^RESET%^
.EI
.SI 5
int query_has_surface()
.EI
.SP 7 5

This method queries whether or not we are a surface.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
always returns 1

.EP

.SI 3
* %^BOLD%^query_loc_weight%^RESET%^
.EI
.SI 5
int query_loc_weight()
.EI
.SP 7 5

This method returns the weight of all things in us.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the weight of all things within us

.EP

.SI 3
* %^BOLD%^query_max_weight%^RESET%^
.EI
.SI 5
int query_max_weight()
.EI
.SP 7 5

This method return the maximum weight of things that can fit in us.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the maximum weight

.EP

.SI 3
* %^BOLD%^set_max_weight%^RESET%^
.EI
.SI 5
void set_max_weight(int arg)
.EI


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^handle_restore_inventory%^RESET%^
.EI
.SI 5
int handle_restore_inventory(object ob)
.EI
.SP 7 5

This method handles moving objects into the inventory from an auto
load.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object to move into ourselves

.EP


