.DT
shutdown.c
$MUDNAME$ autodoc help
shutdown.c

.SH Description
.SP 5 5

Coded By Rhaje@Phoenix/Nameless Sorrows from scratch.
New Shutdown Object. Some ideas were taken from RoD/Suvangi,
but no code was nicked in the process. Basic format was
ripped from Discworld.
Cleaned & tidied up by Donky.
Cleaned up by Galileo; 1-4-99
Reworked for Divided Sky - Shaydz 12-03-01

.EP
.SP 10 5

.EP

.SH Includes
.SP 5 5
This class includes the following files /secure/include/socket_errors.h, /secure/include/config.h and /secure/include/network.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^abort_shutdown%^RESET%^
.EI
.SI 5
int abort_shutdown()
.EI

.SI 3
* %^BOLD%^dec_shutdown%^RESET%^
.EI
.SI 5
void dec_shutdown()
.EI

.SI 3
* %^BOLD%^init_shutdown%^RESET%^
.EI
.SI 5
int init_shutdown(int minutes, int flag)
.EI

.SI 3
* %^BOLD%^query_shutdown%^RESET%^
.EI
.SI 5
int query_shutdown()
.EI


