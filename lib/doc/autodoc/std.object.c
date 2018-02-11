.DT
object.c
$MUDNAME$ autodoc help
object.c

.SH Description
.SP 5 5

The basic object.  This pulls together all the bits needed to create
a basic object.
.EP
.SP 10 5


Written by Pinkfish
.EP



.SH See also
.SP 5 5
/std/room/basic_room.c

.EP
.SH Change history
.SP 5 5
Many many times by many people

Added set_determinate() function - Shaydz - 04/03/2001

Changed to inherit the effects inheritable, instead of
using a shadow for effects. - Sandoz, 11/04/03
.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /std/basic/id, /std/basic/enchant, /std/basic/help_files, /std/basic/property, /std/basic/auto_load, /std/basic/misc, /std/basic/extra_look, /std/basic/effects and /std/basic/read_desc.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/cmr.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^long%^RESET%^
.EI
.SI 5
string long(string word, int dark)
.EI
.SP 7 5

The description of an object when someone looks at it.  This hanedles
the extra code for messages, colour and material.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the worc it was matched on
.EP
.SP 9 5
dark - is it dark fom the players perspecitive
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the long description

.EP

.SI 3
* %^BOLD%^query_cloned_by%^RESET%^
.EI
.SI 5
string query_cloned_by()
.EI
.SP 7 5

Who cloned the object.  Used for security reasoin to trace who have
been cloning up objects for players.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the person who cloned the object

.EP

.SI 3
* %^BOLD%^query_colour%^RESET%^
.EI
.SI 5
string query_colour()
.EI
.SP 7 5

This method returns the colour of the object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the colour of the object

.EP

.SI 3
* %^BOLD%^query_material%^RESET%^
.EI
.SI 5
string query_material()
.EI
.SP 7 5

This method returns the material of the object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the name of the material

.EP

.SI 3
* %^BOLD%^query_objective%^RESET%^
.EI
.SI 5
string query_objective()
.EI
.SP 7 5

The objective of the object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
returns "it" or "them"

.EP

.SI 3
* %^BOLD%^query_player%^RESET%^
.EI
.SI 5
object query_player()
.EI
.SP 7 5

This method returns the player associated with the object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the player who loaded the object

.EP

.SI 3
* %^BOLD%^query_possessive%^RESET%^
.EI
.SI 5
string query_possessive()
.EI
.SP 7 5

The possessive of the object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
returns "its" or "their"

.EP

.SI 3
* %^BOLD%^query_pronoun%^RESET%^
.EI
.SI 5
string query_pronoun()
.EI
.SP 7 5

The pronoun of the object.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
returns "it" or "they"

.EP

.SI 3
* %^BOLD%^set_colour%^RESET%^
.EI
.SI 5
void set_colour(string word)
.EI
.SP 7 5

This method sets the colour of the object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the colour to make the object

.EP

.SI 3
* %^BOLD%^set_determinate%^RESET%^
.EI
.SI 5
void set_determinate(string str)
.EI
.SP 7 5

This method adds a determinate to the object.
Generally this should be set to "the " or "" for unique items,
"a " or "an " for non-uniques.
If no determinate is set for an object, a/an will be used
automatically as needed.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the string to set as the determinate

.EP

.SI 3
* %^BOLD%^set_material%^RESET%^
.EI
.SI 5
void set_material(string word)
.EI
.SP 7 5

This method sets the material of the object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the material to set it to

.EP

.SI 3
* %^BOLD%^set_name%^RESET%^
.EI
.SI 5
void set_name(string word)
.EI
.SP 7 5

Gives the object a name.  Sets the name to the word and makes it the
short description  and attempts to create the pural short description
from it.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name to use

.EP

.SI 3
* %^BOLD%^set_player%^RESET%^
.EI
.SI 5
void set_player(object thing)
.EI
.SP 7 5

Sets the player associated with the object.  This is used during the
autoload sequence.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the player object we belong to
.EP


