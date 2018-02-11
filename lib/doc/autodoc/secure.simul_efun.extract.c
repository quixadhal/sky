.DT
extract.c
$MUDNAME$ autodoc help
extract.c

.SH Description
.SP 5 5

This method extracts characters from a string and returns them.
.EP
.SP 10 5

.EP

.SH Example
.SI 5
    extract("bingle", 3 ) will return "gle"
    extract("bingle", 3, 4 ) will return "gl"

.EI
.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^extract%^RESET%^
.EI
.SI 5
varargs string extract(string str, int start, int end)
.EI


