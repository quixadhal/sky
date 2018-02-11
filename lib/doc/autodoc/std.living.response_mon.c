.DT
response_mon.c
$MUDNAME$ autodoc help
response_mon.c

.SH Description
.SP 5 5

This file contains the methods to make the npcs in game respond
to soul and says.  Allows for a level of NPC interation.


Code originaly by nimmox@igor.  Modified for discworld by Pinkfish. 


.EP
.SP 10 5


Written by Pinkfish
.EP



.SH See also
.SP 5 5
/std/npc.c

.EP
.SH Includes
.SP 5 5
This class includes the following files /include/language.h and /include/soul.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_respond_to_with%^RESET%^
.EI
.SI 5
void add_respond_to_with(mixed trigger, mixed response)
.EI
.SP 7 5

This method adds a respond message to respond to into the
current array of responses.


If response_mon_regexp is not set, the trigger consists of an array of words to be matched (in order) in the string. If there is an array instead of a single word at one point then any of the words in the array will be matched. If response_mon_regexp is set, the trigger is a single string, representing the regular expression to be matched in the string. 

The response is either an array of things to execute (in which case a random one will be chosen each time) or a function pointer or a string.  If it is a string then the command of that name will be executed, if the string starts with a '#' then the function named after that will be called on the npc.  That was exciting wasn't it? If the string has a $hname$ name in it and it is not a function call (starts with a #) then the $hname$ will be replaced with the name of the triggering object. 

In the case of a function call, two arguments are passed into the function: the first is the person which triggered the effect and the second in the message which triggered the effect. 

Also possible with a format of "#filename:function" is calling functions on other objects.  Those functions will be called with the NPC (object) as the first argument, and the person triggering the event as the second (object) argument. 

NOTE: The NPC must explicitly know the language being spoken, even if it's "common".  I don't know why.  That's just the way it is.  See add_language().
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
trigger - the trigger to trigger the action on
.EP
.SP 9 5
response - the response to the action
.EP

.SI 3
* %^BOLD%^query_respond_non_interactive%^RESET%^
.EI
.SI 5
int query_respond_non_interactive()
.EI
.SP 7 5

This method returns whether or not we should respond to other NPCs.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if we should respond to other NPCs, 0 if not

.EP

.SI 3
* %^BOLD%^query_respond_to_with%^RESET%^
.EI
.SI 5
mixed query_respond_to_with()
.EI
.SP 7 5

This method returns the current responding to with array.
The array is of the formant:
.EP
.SP 7 5
  ({
.EP
.SP 7 5
     trigger1,
.EP
.SP 7 5
     response1,
.EP
.SP 7 5
     trigger2,
.EP
.SP 7 5
     response2,
.EP
.SP 7 5
     ...
.EP
.SP 7 5
   })
.EP
.SP 7 5

.EP

.SI 3
* %^BOLD%^query_response_allowed%^RESET%^
.EI
.SI 5
int query_response_allowed(object ob, string * response)
.EI
.SP 7 5

This method checks to see if the response is allowed for this object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object to check
.EP
.SP 9 5
response - the response that is matched
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the object is allowed, 0 if it is not

.EP

.SI 3
* %^BOLD%^query_response_mon_debug_mode%^RESET%^
.EI
.SI 5
int query_response_mon_debug_mode()
.EI
.SP 7 5

This method checks to see if the response monster code is in
debug mode.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if in debug mode, 0 if not
.EP

.SI 3
* %^BOLD%^query_response_mon_regexp%^RESET%^
.EI
.SI 5
int query_response_mon_regexp()
.EI
.SP 7 5

This method returns the current state of the flag that indicates whether
to use regular expressions instead of the traditional array of words.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if using regular expressions, 0 if not

.EP

.SI 3
* %^BOLD%^query_stop_responding%^RESET%^
.EI
.SI 5
int query_stop_responding()
.EI
.SP 7 5

This method returns the flag determining the toggling of the
responses of the npc.
If this is set to 1, then the npc will stop responding to
messages.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 to the npc will not respond, 0 it is responding
.EP

.SI 3
* %^BOLD%^set_respond_non_interactive%^RESET%^
.EI
.SI 5
void set_respond_non_interactive(int i)
.EI
.SP 7 5

This method sets whether or not we should respond to
non-interactives (ie. other NPCs).
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
i - 1 if we should respond to other NPCs, 0 if not

.EP

.SI 3
* %^BOLD%^set_respond_to_with%^RESET%^
.EI
.SI 5
void set_respond_to_with(mixed map)
.EI
.SP 7 5

This method sets the current responses for the npc.
This will overwrite the current responses in the npc.
Please use add_respond_to_with in your NPC's instead of
this function call, as it requires prior knowledge as to
the internal structure of the respond_to_with code that
add_respond_to_with handles nicely.
The array is of the formant:
.EP
.SP 7 5
  ({
.EP
.SP 7 5
     trigger1,
.EP
.SP 7 5
     response1,
.EP
.SP 7 5
     trigger2,
.EP
.SP 7 5
     response2,
.EP
.SP 7 5
     ...
.EP
.SP 7 5
   })
.EP
.SP 7 5

.EP

.SI 3
* %^BOLD%^set_response_mon_debug_mode%^RESET%^
.EI
.SI 5
void set_response_mon_debug_mode(int flag)
.EI
.SP 7 5

This method sets the current debug flag for the response monster
code.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
flag - the new value of the flag, 1 on, 0 off
.EP

.SI 3
* %^BOLD%^set_response_mon_regexp%^RESET%^
.EI
.SI 5
void set_response_mon_regexp(int flag)
.EI
.SP 7 5

This method sets or clears the flag to use regular expressions instead of
the traditional arrays of words.  In addition, this flag inhibits
the usual stripping of non-alphanumerics from the input strings.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
flag - the new value of the flag: 1 says to use regular expressions,
0 to not use them

.EP

.SI 3
* %^BOLD%^set_stop_responding%^RESET%^
.EI
.SI 5
void set_stop_responding(int i)
.EI
.SP 7 5

This method allows the toggling of the responses of the npc.
If this is set to 1, then the npc will stop responding to
messages.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
i - 1 to make the npc not respond, 0 to make it respond again
.EP


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^check_sub_sequence%^RESET%^
.EI
.SI 5
mixed check_sub_sequence(string * words)
.EI
.SP 7 5

This method checks the subsequence of words to see if it matches
any of our current response sets.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
words - the words which are to be tested
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the response to be executed
.EP

.SI 3
* %^BOLD%^exec_response%^RESET%^
.EI
.SI 5
void exec_response(mixed rep, object per, string mess)
.EI
.SP 7 5

This method executes the response to the matched string.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
rep - the response to execute
.EP
.SP 9 5
per - the person who initiated the event
.EP
.SP 9 5
mess - the message that was matched
.EP

.SI 3
* %^BOLD%^remove_read_marks%^RESET%^
.EI
.SI 5
string remove_read_marks(string str)
.EI
.SP 7 5

This method removes annoying read marks to make the string easier to
parse.  Basically it strips punctuation.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the string to remove the punctuation from
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the string without any punctuation

.EP

.SI 3
* %^BOLD%^senddstr%^RESET%^
.EI
.SI 5
void senddstr(string str, object per)
.EI
.SP 7 5

This method runs the command passed in, doing some substitution.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the string to execute
.EP
.SP 9 5
per - the person who triggered the command

.EP


