.DT
citizens.c
$MUDNAME$ autodoc help
citizens.c

.SH Description
.SP 5 5

This handler keeps track of citizenships and magistrates.
.EP
.SP 10 5


Written by Pinkfish 

Started Fri Jun 23 20:38:10 PDT 2000

.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_citizen%^RESET%^
.EI
.SI 5
int add_citizen(string area, string citizen)
.EI
.SP 7 5

This method adds a citizen to the specified area.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
area - the area to add the citizen too
.EP
.SP 9 5
citizen - the citizen to add to the area

.EP

.SI 3
* %^BOLD%^add_magistrate%^RESET%^
.EI
.SI 5
int add_magistrate(string area, string magistrate)
.EI
.SP 7 5

This method adds a magistrate to the area.  If there are no more
magistrate slots then this fails.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
area - the area to add the magistrate too
.EP
.SP 9 5
magistrate - the magistrate to add

.EP

.SI 3
* %^BOLD%^create_area%^RESET%^
.EI
.SI 5
int create_area(string area, int num_magistrates)
.EI
.SP 7 5

This method creates an area for citizens to womble in.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
area - the name of the area to create
.EP
.SP 9 5
num_magistrates - the number of magistrates
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 on succes, 0 on failure

.EP

.SI 3
* %^BOLD%^is_citizen_of%^RESET%^
.EI
.SI 5
int is_citizen_of(string area, string citizen)
.EI
.SP 7 5

This method checks to see if the specified person is a citizen or
not.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
area - the area to check them in
.EP
.SP 9 5
citizen - the person to check for citizenship
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if they are a citizen, 0 if not

.EP

.SI 3
* %^BOLD%^query_citizen%^RESET%^
.EI
.SI 5
string query_citizen(string citizen)
.EI
.SP 7 5

This method checks to see if the specified person is a citizen and
where they are a citizen.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
citizen - the person to find where they are the citizen of
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
where they are a citizen, or 0 on failure

.EP

.SI 3
* %^BOLD%^remove_citizen%^RESET%^
.EI
.SI 5
int remove_citizen(string area, string citizen)
.EI
.SP 7 5

This method adds a citizen to the specified area.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
area - the area to add the citizen too
.EP
.SP 9 5
citizen - the citizen to add to the area

.EP


