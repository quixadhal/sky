.DT
query_number.c
$MUDNAME$ autodoc help
query_number.c

.SH Description
.SP 5 5

This method turns a number into a string.  It returns a string of the
form "one hundred and twenty four".
The limit argument is used to set the cut off point at which it will
print "many".

.EP
.SP 10 5

.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^create_table%^RESET%^
.EI
.SI 5
varargs string create_table(string * title, string * names, int cap_flag)
.EI
.SP 7 5

This method creates a nice table from the input array.
To control whether or not the results should be sorted or
capitalized, set the cap_flag to 1 to sort and capitalize,
or to 2 to only capitalize the array.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
title - a two element array containing the title of
the table, and the singular name for an array element
.EP
.SP 9 5
names - the array to make the table out of
.EP
.SP 9 5
cap_flag - 1 to capitalize and sort the array, 2 to
capitalize without sorting
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a nice table
.EP

.SI 3
* %^BOLD%^query_num%^RESET%^
.EI
.SI 5
string query_num(int n, int limit)
.EI

.SI 3
* %^BOLD%^time_string%^RESET%^
.EI
.SI 5
varargs string time_string(int time, int flag)
.EI

.SI 3
* %^BOLD%^word_ordinal%^RESET%^
.EI
.SI 5
string word_ordinal(int num)
.EI
.SP 7 5

This method returns the ordinal of a number as a string (ie, "first",
"thirtieth", etc.)
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
n - the number for which you want the ordinal
.EP


