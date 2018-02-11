.DT
nomic_rules.c
$MUDNAME$ autodoc help
nomic_rules.c

.SH Description
.SP 5 5

This handler deals with all the nomic rules for councils.
.EP
.SP 10 5


Written by Pinkfish

Started Fri Jun 23 19:51:04 PDT 2000

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
* %^BOLD%^add_nomic_rule%^RESET%^
.EI
.SI 5
int add_nomic_rule(string area, int type, string creator, string text)
.EI
.SP 7 5

This method adds a nomic rule into the system.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
area - the area the rule is added in
.EP
.SP 9 5
type - the type of rule to add
.EP
.SP 9 5
creator - the person that created the rule
.EP
.SP 9 5
text - the text associated with the rule
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the new number of the rule, NOMIC_ERROR on fai;l

.EP

.SI 3
* %^BOLD%^create_area%^RESET%^
.EI
.SI 5
int create_area(string area)
.EI
.SP 7 5

This method creates an new nomic area.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
area - the new nomic area name
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 on success, 0 on failure

.EP

.SI 3
* %^BOLD%^query_all_nomic_rules%^RESET%^
.EI
.SI 5
class nomic_rule * query_all_nomic_rules(string area)
.EI
.SP 7 5

This method returns all the nomic rules for the area.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
area - the area to get the rule sin
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
all the rules

.EP

.SI 3
* %^BOLD%^query_nomic_rule%^RESET%^
.EI
.SI 5
class nomic_rule query_nomic_rule(string area, int id)
.EI
.SP 7 5

This method returns a nomic rule for the specified area.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
area - the area to get the rule in
.EP
.SP 9 5
id - the id of the rule to match
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 if failed, the class if succeeded

.EP

.SI 3
* %^BOLD%^remove_nomic_rule%^RESET%^
.EI
.SI 5
int remove_nomic_rule(string area, int id)
.EI
.SP 7 5

This method removes a nomic rule from the system.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
area - the area the rule is removed in
.EP
.SP 9 5
id - the id of the rule to remove
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the status of the removal, NOMIC_ERROR on fai;l

.EP


