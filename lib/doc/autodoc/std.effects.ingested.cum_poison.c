.DT
cum_poison.c
$MUDNAME$ autodoc help
cum_poison.c

.SH Description
.SP 5 5

This is the effect skelton docs.  This effect
has a classification of "body.poison".


Describe the arguments in here. 

This effect has a shadow associated with it.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects

.EP
.SH Includes
.SP 5 5
This class includes the following files /include/effect.h and /std/effects/ingested/path.h.
.EP

.SH Classes

.SI 3
* %^BOLD%^arg_info%^RESET%^
class arg_info {
int min_time;
int depletion_time;
int depletion_amt;
int idle_time;
int hp_pct;
int msg_flag;
int time_left;
}

.EI


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^deplete%^RESET%^
.EI
.SI 5
void deplete(object player, class arg_info arg, int id)
.EI

.SI 3
* %^BOLD%^start_wretching%^RESET%^
.EI
.SI 5
void start_wretching(object player, class arg_info arg, int id)
.EI

.SI 3
* %^BOLD%^wretch%^RESET%^
.EI
.SI 5
void wretch(object player, class arg_info arg, int id)
.EI


