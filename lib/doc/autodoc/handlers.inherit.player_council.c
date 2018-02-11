.DT
player_council.c
$MUDNAME$ autodoc help
player_council.c

.SH Description
.SP 5 5

This handler is for the control of player houses.
.EP
.SP 10 5


Written by Pinkfish

Started Fri Jun 23 22:50:02 PDT 2000

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /handlers/inherit/nomic_rules and /handlers/inherit/citizens.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/nomic_system.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_move_rule_type%^RESET%^
.EI
.SI 5
int add_move_rule_type(string area, int rule_no, int type, string creator)
.EI
.SP 7 5

This method puts up a request to move a rule from one type to another.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
area - the area to do the move in
.EP
.SP 9 5
rule_no - the rule number to move
.EP
.SP 9 5
type - the type to move the rule to
.EP
.SP 9 5
creator - the creator of this request
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 on success, 0 on failure

.EP

.SI 3
* %^BOLD%^add_new_rule_for_voting%^RESET%^
.EI
.SI 5
int add_new_rule_for_voting(string area, int type, string creator, string text)
.EI
.SP 7 5

This method puts a new rule up for voting.  It is first placed into
the hands of the magistrates, then into the hands of the players.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
area - the area for the rule to be voted on in
.EP
.SP 9 5
type - the type of the rules
.EP
.SP 9 5
text - the text associated with the new rule
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 on success, 0 on failure

.EP

.SI 3
* %^BOLD%^add_rule_ammendment%^RESET%^
.EI
.SI 5
int add_rule_ammendment(string area, int rule_no, string ammendement, string creator)
.EI
.SP 7 5

This method adds in a request to ammend a rule.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
area - the area to put the ammendment in
.EP
.SP 9 5
rule_no - the rule to ammend
.EP
.SP 9 5
ammendment - the ammendment text
.EP
.SP 9 5
creator - the person doing the ammendment

.EP


