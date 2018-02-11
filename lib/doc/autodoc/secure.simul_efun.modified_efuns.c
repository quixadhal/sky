.DT
modified_efuns.c
$MUDNAME$ autodoc help
modified_efuns.c

.SH Description
.SP 5 5

Contains some simul_efuns.
.EP
.SP 10 5


Written by Pinkfish

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /secure/simul_efun/base_name and /secure/simul_efun/reference_allowed.
.EP

.SH Includes
.SP 5 5
This class includes the following files /secure/include/config.h and /secure/include/type.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^cat%^RESET%^
.EI
.SI 5
void cat(string file, int start_line, int number)
.EI
.SP 7 5

Write the file out to the screen.  This should  not be used if possible.
It is an interface to read_file and other things.  You should perhaps
look at using more_string ort more_file.

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
file - the file name to cat
.EP
.SP 9 5
start_line - the line to start on
.EP
.SP 9 5
number - the number of lines to print

.EP

.SI 3
* %^BOLD%^choice%^RESET%^
.EI
.SI 5
mixed choice(mixed options)
.EI
.SP 7 5

This method returns a random member of the specified array.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
options - the array to return a random member from
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a random member of the specified array

.EP

.SI 3
* %^BOLD%^distinct_array%^RESET%^
.EI
.SI 5
mixed distinct_array(mixed arr)
.EI
.SP 7 5

This method removes any duplicates from an array while keeping
the order intact, this is more costly than uniq_array, so if the
order isn't important to you, don't use it, use uniq_array instead.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
arr - the array to remove duplicates from
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the new array with no duplicates

.EP

.SI 3
* %^BOLD%^log_file%^RESET%^
.EI
.SI 5
varargs void log_file(string name, string fmt, mixed * args ...)
.EI
.SP 7 5

This method writes a message out to a log file.  The log files are
normally in "/log".  If a file doesn't start with '/ then "/log/" will be
prepended to it.
This does automatic removal of the log files after they get over
a certain length.  The fmt and args parameters are used to print the
actual message.


If more than one argument is passed to this function, then sprintf will be used to print out the results. 

ie: log_file("ROGER", "%s: frog and %s\n", ctime(time()), query_gumboot()); 
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the log file
.EP
.SP 9 5
fmt - the format string
.EP
.SP 9 5
args - the arguments to the sprintf

.EP

.SI 3
* %^BOLD%^mud_name%^RESET%^
.EI
.SI 5
string mud_name()
.EI
.SP 7 5

This method returns the name of the mud.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the name of the mud

.EP

.SI 3
* %^BOLD%^query_prime%^RESET%^
.EI
.SI 5
int query_prime(int num)
.EI
.SP 7 5

This method queries whether the input number is a prime.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
num - the number to test for primeness
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the number is a prime, 0 if not
.EP

.SI 3
* %^BOLD%^query_shadows%^RESET%^
.EI
.SI 5
object * query_shadows(object ob)
.EI
.SP 7 5

This method returns all the objects that are shadowing the input object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object to get the shadows list for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the objects shadowing us, or 0 if none are found
.EP

.SI 3
* %^BOLD%^query_verb%^RESET%^
.EI
.SI 5
string query_verb()
.EI
.SP 7 5

This returns the current verb name.  This works if the verb ius used
through add_command or through add_action.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the name of the verb

.EP

.SI 3
* %^BOLD%^replace%^RESET%^
.EI
.SI 5
varargs string replace(string str, mixed bing, string rep)
.EI
.SP 7 5

Replaces all occurances of a set of strings in the input string.  Replaces
an individual or an array of strings with new values.  If the second
argument is an array of strings, then the 1st, 3rd, 5th...  elements will
be the strings to search for and the 2nd, 4th, 6th etc will be the strings
to replace with.  If three arguments are specified then the second is the string
to search for, the third the one to replace.


Eg:
.EP
.SP 7 5
str = replace(str, ({ "search", "replace", "orange", "apple" });

That will replace all occurances of "search" with "replace" and "orange" with "apple". 
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the string to do the replacement in
.EP
.SP 9 5
bing - the search or array argument
.EP
.SP 9 5
rep - the replacement string, or null

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the string with all the replacements done

.EP

.SI 3
* %^BOLD%^shout%^RESET%^
.EI
.SI 5
varargs void shout(string words, object avoid)
.EI
.SP 7 5

This method sends a polite shout to everyone on line.  It checks
for earmuffs and all that sort of stuff.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
words - the message to shout
.EP
.SP 9 5
avoid - who not to tell the message to

.EP

.SI 3
* %^BOLD%^strcasecmp%^RESET%^
.EI
.SI 5
int strcasecmp(string str1, string str2)
.EI
.SP 7 5

Does a string compare...  But case insensitive...
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str1 - the string to compare
.EP
.SP 9 5
str2 - the other string to compare
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 if they are the same, <0 if they are less than each other, >0 if not
.EP

.SI 3
* %^BOLD%^tail%^RESET%^
.EI
.SI 5
varargs string tail(string fname, int nlines)
.EI
.SP 7 5

This will print the last bit of a file.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
fname - the file to read
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if it succeeded, 0 if it failed

.EP

.SI 3
* %^BOLD%^uniq_array%^RESET%^
.EI
.SI 5
mixed uniq_array(mixed arr)
.EI
.SP 7 5

This method will return an array that contains no duplicates.
Written by: Wodan


This function will return an array that contains no duplicates. Gotta love them mappings. :)
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
arr - the array to convert
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
an array with no duplicates

.EP

.SI 3
* %^BOLD%^user_event%^RESET%^
.EI
.SI 5
void user_event(mixed from, mixed first, mixed args ...)
.EI
.SP 7 5

This method calls an event on all the users online.
It does not do any filtering, so it will send messages to people who
are earmuffed and ignoring or lord invisible or whatever.

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
from - the person it is from
.EP
.SP 9 5
name - the name of the event
.EP
.SP 9 5
args - the arguments to the event

.EP

.SI 3
* %^BOLD%^verbalize%^RESET%^
.EI
.SI 5
varargs string verbalize(string verb, string single)
.EI
.SP 7 5

This method does $V$0=verbs,verb$V$ expansion on a word.
It does this by pluralizing the verb used.
If the optional single person argument is supplied,
then that is used for the single person version of the
word, and the verb argument is used for multiple people.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
verb - the verb to do the expansion on
.EP
.SP 9 5
single - the optional singular argument
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
$V$0=verbs,verb$V$ expanded verb
.EP

.SI 3
* %^BOLD%^wizardp%^RESET%^
.EI
.SI 5
int wizardp(mixed arg)
.EI
.SP 7 5

This method tells us if the object is a wizard.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
is the object a wizard

.EP


