.DT
hair_style.c
$MUDNAME$ autodoc help
hair_style.c

.SH Description
.SP 5 5

This effect has a classification of "body.hairstyle".  It adds
a string of text to the player's description detailing what sort
of hair style they have.  The first parameter should be an array
of strings describing the hair style.  The first member of the
array should be what the hair style looks like the first week,
the second member what it looks like the second week, etc.
The second parameter is the age of the player when the hair 
style was added (use query_time_on() * -1). 



.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects

.EP
.SH Includes
.SP 5 5
This class includes the following files /include/effect.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^beginning%^RESET%^
.EI
.SI 5
mixed * beginning(object player, mixed * hairstyle)
.EI
.SP 7 5

.EP


