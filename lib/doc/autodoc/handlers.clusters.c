.DT
clusters.c
$MUDNAME$ autodoc help
clusters.c

.SH Description
.SP 5 5

Returns an array with move instructions from 'start' to 'end'

.EP
.SP 10 5

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/db.h and /secure/include/config.h.
.EP

.SH Classes

.SI 3
* %^BOLD%^cluster%^RESET%^
class cluster {
mixed * members;
int level;
int cluster_number;
int this_cluster;
mixed * contacts;
}

.EI


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^get_route%^RESET%^
.EI
.SI 5
string * get_route(string start, string end)
.EI


