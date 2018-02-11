.DT
command.c
$MUDNAME$ autodoc help
command.c

.SH Description
.SP 5 5
    /daemon/command.c
     from the Nightmare IVr1 Object Library
     a new commands daemon, much faster than the old
     created by Descartes of Borg 940119
     Hacked for Discworld by Turrican 9-11-95

.EP
.SP 10 5

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/command.h and /include/user_parser.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^GetCommand%^RESET%^
.EI
.SI 5
int GetCommand(class command cmd, string * path)
.EI

.SI 3
* %^BOLD%^GetCommandPatterns%^RESET%^
.EI
.SI 5
mixed * GetCommandPatterns(string cmd_name, string * path)
.EI

.SI 3
* %^BOLD%^GetCommands%^RESET%^
.EI
.SI 5
varargs string * GetCommands(string path)
.EI

.SI 3
* %^BOLD%^GetPaths%^RESET%^
.EI
.SI 5
varargs string * GetPaths(string cmd)
.EI

.SI 3
* %^BOLD%^HandleCommandLine%^RESET%^
.EI
.SI 5
void HandleCommandLine(class command cmd)
.EI

.SI 3
* %^BOLD%^HandleStars%^RESET%^
.EI
.SI 5
int HandleStars(class command cmd)
.EI

.SI 3
* %^BOLD%^IsGRCommand%^RESET%^
.EI
.SI 5
int IsGRCommand(string cmd)
.EI

.SI 3
* %^BOLD%^ReturnPatterns%^RESET%^
.EI
.SI 5
mixed ReturnPatterns(class command cmd, string * path)
.EI

.SI 3
* %^BOLD%^eventGuildRaceRehash%^RESET%^
.EI
.SI 5
void eventGuildRaceRehash()
.EI

.SI 3
* %^BOLD%^eventRehash%^RESET%^
.EI
.SI 5
void eventRehash(mixed paths)
.EI

.SI 3
* %^BOLD%^strncmp%^RESET%^
.EI
.SI 5
int strncmp(string s1, string s2, int len)
.EI


