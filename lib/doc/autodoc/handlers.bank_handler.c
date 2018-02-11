.DT
bank_handler.c
$MUDNAME$ autodoc help
bank_handler.c

.SH Description
.SP 5 5

Keep track of each banks data.
.EP
.SP 10 5

.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^adjust_account%^RESET%^
.EI
.SI 5
void adjust_account(string word, string bank_name, int amount)
.EI
.SP 7 5

Change the amount of money a player has at a given bank.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the name of the player
.EP
.SP 9 5
bank_name - the name of the bank
.EP
.SP 9 5
amount - the amount to change the balance by

.EP

.SI 3
* %^BOLD%^get_data_file%^RESET%^
.EI
.SI 5
int get_data_file(string name)
.EI
.SP 7 5

Start up the system by restoring the players data.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the name of the player being restored

.EP

.SI 3
* %^BOLD%^query_account%^RESET%^
.EI
.SI 5
int query_account(string name, string bank_name)
.EI
.SP 7 5

Find out how much a player has at a given bank.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the player
.EP
.SP 9 5
bank_name - the name of the bank
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current balance, -1 on failure

.EP

.SI 3
* %^BOLD%^set_account%^RESET%^
.EI
.SI 5
void set_account(string word, string bank_name, int amount)
.EI
.SP 7 5

Sets the balance at a certain bank to the specificed amount.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the name of the player
.EP
.SP 9 5
bank_name - the name of the bank
.EP
.SP 9 5
amount - the amount to set the bank to.

.EP


