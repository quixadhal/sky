.DT
process_value.c
$MUDNAME$ autodoc help
process_value.c

.SH Description
.SP 5 5

process_value - a replacement for the (now missing) process_value
                efun.  I was hoping that function pointers would
                make this unnecessary, but there's no way to store
                a function pointer with the autoloader.

Initial release: 16-Nov-96

.EP
.SP 10 5

.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^process_string%^RESET%^
.EI
.SI 5
string process_string(string s)
.EI

.SI 3
* %^BOLD%^process_value%^RESET%^
.EI
.SI 5
mixed process_value(string s)
.EI
.SP 7 5

This method replaces the process_value efun which is now missing.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
s - the string to process
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the processed string

.EP


