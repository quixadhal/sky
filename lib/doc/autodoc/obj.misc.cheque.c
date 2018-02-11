.DT
cheque.c
$MUDNAME$ autodoc help
cheque.c

.SH Description
.SP 5 5

A cheque inherit for use with banks.
.EP
.SP 10 5


Written by Sandoz, 31st August 2001

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /std/object.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^query_amount%^RESET%^
.EI
.SI 5
int query_amount()
.EI
.SP 7 5

This method queries the amount of money associated with the cheque.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the amount of money associated with the cheque

.EP

.SI 3
* %^BOLD%^query_bank_name%^RESET%^
.EI
.SI 5
string query_bank_name()
.EI
.SP 7 5

This method queries the bank name associated with the cheque.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the bank name associated with the cheque

.EP

.SI 3
* %^BOLD%^query_place%^RESET%^
.EI
.SI 5
string query_place()
.EI
.SP 7 5

This method queries the place associated with the cheque.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the place associated with the cheque

.EP

.SI 3
* %^BOLD%^set_amount%^RESET%^
.EI
.SI 5
int set_amount(int number)
.EI
.SP 7 5

This method sets the amount of money associated with the cheque.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
number - the amount of money to associate the cheque with
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the newly set amount or 0 if the amount has already been set

.EP

.SI 3
* %^BOLD%^set_bank_name%^RESET%^
.EI
.SI 5
void set_bank_name(string name)
.EI
.SP 7 5

This method sets the bank name associated with the cheque.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the bank name

.EP

.SI 3
* %^BOLD%^set_place%^RESET%^
.EI
.SI 5
void set_place(string loc)
.EI
.SP 7 5

This method sets the place associated with the cheque.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
loc - the place to associate the cheque with

.EP


