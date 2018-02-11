.DT
events.c
$MUDNAME$ autodoc help
events.c

.SH Description
.SP 5 5

This file contains all the standard event handling code that players
need.  This will handle things like informs, shouts, says, tells,
whispers.  Everything!   It formats the message correctly and
sends it to the player.
.EP
.SP 10 5


Written by Pinkfish

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /global/player/new_parse, /global/player/play_parse_com and /global/player/communicate.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/player.h, /include/language.h, /include/dirs.h, /include/telnet.h and /include/playtesters.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_message%^RESET%^
.EI
.SI 5
void add_message(string message, mixed things)
.EI
.SP 7 5

This adds a message into the current list of printable messages.  This
will be squided up together and printed out slightly later, this handles
the concatenating of enter messages, and soul messages.  Etc.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
message - the message to add
.EP
.SP 9 5
things - the objects which are involved with the message
.EP

.SI 3
* %^BOLD%^check_earmuffs%^RESET%^
.EI
.SI 5
int check_earmuffs(string type)
.EI
.SP 7 5

This method checks to see if a particular event is earmuffed.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the type of event to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the event is earmuffed and 0 if it is not
.EP

.SI 3
* %^BOLD%^colour_event%^RESET%^
.EI
.SI 5
string colour_event(string event_type, string default_colour)
.EI
.SP 7 5

This function returns the appropriate colour codes for the given event
type. It will return the players chosen colour if they've set one or
the default if not.

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
event_type - The type of event
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a string of colour codes.

.EP

.SI 3
* %^BOLD%^convert_message%^RESET%^
.EI
.SI 5
string convert_message(string message)
.EI
.SP 7 5

This method will handle doing exciting things to messages and
returning them as a usable format.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
message - the message to evaluate
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the message in a printable (to the player) format
.EP

.SI 3
* %^BOLD%^do_busy%^RESET%^
.EI
.SI 5
int do_busy(string str)
.EI
.SP 7 5

This method handles setting the busy flag.  The busy flag can only
be set by liaisons and lords, why lords?  Just because :)  This
command was inspired by moonchild.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the on or off string
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 on success, 0 on failure

.EP

.SI 3
* %^BOLD%^do_busy_player%^RESET%^
.EI
.SI 5
int do_busy_player(object * obs)
.EI
.SP 7 5

This method allows creators to set the player for whom they are currently
busy too.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
obs - the player to be busy with
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 on success, 0 on failure

.EP

.SI 3
* %^BOLD%^evaluate_message%^RESET%^
.EI
.SI 5
string evaluate_message(mixed stuff)
.EI
.SP 7 5

This is the main evaluation routine.  This is the one that
co-ordinates the works...  It is used by the print_messages
routine to create the message to print out.


The input parameter contains two elements, the first is the message and the second is the things array.  This corresponds to the values returned by the fix_message method.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
stuff - the message to evaulate
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the nice printed out string
.EP

.SI 3
* %^BOLD%^event_chat%^RESET%^
.EI
.SI 5
void event_chat(object ob, string caller, string verb, string text, int emote, int force)
.EI
.SP 7 5

This event is generated when a creator tell is done.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object generating the event
.EP
.SP 9 5
start - the start bit
.EP
.SP 9 5
mess - the message bit
.EP
.SP 9 5
forced - if it is forced to occur

.EP

.SI 3
* %^BOLD%^event_commands%^RESET%^
.EI
.SI 5
void event_commands()
.EI
.SP 7 5

This method adds all the event commands onto the player.
This will be called in the player startup sequence.

.EP

.SI 3
* %^BOLD%^event_creator_tell%^RESET%^
.EI
.SI 5
void event_creator_tell(object ob, string start, string mess, int forced)
.EI
.SP 7 5

This event is generated when a creator tell is done.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object generating the event
.EP
.SP 9 5
start - the start bit
.EP
.SP 9 5
mess - the message bit
.EP
.SP 9 5
forced - if it is forced to occur

.EP

.SI 3
* %^BOLD%^event_emote%^RESET%^
.EI
.SI 5
void event_emote(object thing, string mess)
.EI
.SP 7 5

This method is called when someone does an emote.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the object doing the emote
.EP
.SP 9 5
mess - the emote to print

.EP

.SI 3
* %^BOLD%^event_enter%^RESET%^
.EI
.SI 5
void event_enter(object thing, string mess,  object)
.EI
.SP 7 5

This method is called when an object enters the room.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the thing entering
.EP
.SP 9 5
mess - the message to print on entering

.EP

.SI 3
* %^BOLD%^event_exit%^RESET%^
.EI
.SI 5
void event_exit(object thing, string mess, object to)
.EI
.SP 7 5

This method is printed when an object exits the room.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the object exiting
.EP
.SP 9 5
mess - the message to print
.EP
.SP 9 5
to - where the object is going to

.EP

.SI 3
* %^BOLD%^event_inform%^RESET%^
.EI
.SI 5
varargs void event_inform( object, mixed mess, string which, object thing)
.EI
.SP 7 5

This method is called when an inform event is called.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
mess - the message to print
.EP
.SP 9 5
which - the type of inform
.EP

.SI 3
* %^BOLD%^event_inter_creator_tell%^RESET%^
.EI
.SI 5
void event_inter_creator_tell(object ob, string mname, string pname, string mess, object ig, int emote)
.EI
.SP 7 5

This event is generated when a intermud creator tell is done.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object generating the event
.EP
.SP 9 5
mname - the name of the mud
.EP
.SP 9 5
pname - the name of the player
.EP
.SP 9 5
mess - the message
.EP
.SP 9 5
ig - the ignore object
.EP
.SP 9 5
emote - if it is an emote

.EP

.SI 3
* %^BOLD%^event_intermud_tell%^RESET%^
.EI
.SI 5
void event_intermud_tell(object ob, string start, string mess, string channel, object ig, int emote)
.EI
.SP 7 5

This event is generated when a creator tell is done.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object generating the event
.EP
.SP 9 5
mname - the name of the mud
.EP
.SP 9 5
pname - the name of the player
.EP
.SP 9 5
mess - the message
.EP
.SP 9 5
ig - the ignore object
.EP
.SP 9 5
emote - if it is an emote

.EP

.SI 3
* %^BOLD%^event_newbie%^RESET%^
.EI
.SI 5
void event_newbie(object thing, string message)
.EI
.SP 7 5

This event is generated when a newbie chat event is done.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the thing generateing the newbie chat
.EP
.SP 9 5
message - the message the newbie said

.EP

.SI 3
* %^BOLD%^event_person_say%^RESET%^
.EI
.SI 5
void event_person_say(object ob, string start, string mess, string lang)
.EI
.SP 7 5

This method is called when someone says something.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object doing the say
.EP
.SP 9 5
start - the start message
.EP
.SP 9 5
mess - the message to say
.EP
.SP 9 5
lang - the language it is printed in

.EP

.SI 3
* %^BOLD%^event_person_shout%^RESET%^
.EI
.SI 5
void event_person_shout(object thing, string start, string mess, string lang, int * co_ord, int range)
.EI
.SP 7 5

This method is generated when a shout is done by a player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the thing doing the shout
.EP
.SP 9 5
start - the start string to print
.EP
.SP 9 5
mess - the message to print
.EP
.SP 9 5
lang - the language the shout is in
.EP
.SP 9 5
co_ord - the co-ordinate of the shouter
.EP
.SP 9 5
range - the range of the shout

.EP

.SI 3
* %^BOLD%^event_person_tell%^RESET%^
.EI
.SI 5
void event_person_tell(object ob, string start, string mess)
.EI
.SP 7 5

This method is called when a person is told something.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object doing the tell
.EP
.SP 9 5
start - the start bit of the message
.EP
.SP 9 5
mess - the message itself

.EP

.SI 3
* %^BOLD%^event_player_echo%^RESET%^
.EI
.SI 5
void event_player_echo(object ob, string mess)
.EI
.SP 7 5

This method is called when an echo is generated by a player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object doing the echo
.EP
.SP 9 5
mess - the message being printed

.EP

.SI 3
* %^BOLD%^event_player_echo_to%^RESET%^
.EI
.SI 5
void event_player_echo_to(object ob, string mess, object me)
.EI
.SP 7 5

This method is called when an echo to is generated by the player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object doing the echo to
.EP
.SP 9 5
mess - the message being printed
.EP
.SP 9 5
me - the person generating the echo to

.EP

.SI 3
* %^BOLD%^event_player_emote_all%^RESET%^
.EI
.SI 5
void event_player_emote_all(object ob, string mess)
.EI
.SP 7 5

This method is called when an emoteall is generated by a player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object doing the emoteall
.EP
.SP 9 5
mess - the message being printed

.EP

.SI 3
* %^BOLD%^event_say%^RESET%^
.EI
.SI 5
void event_say(object caller, string str, mixed avoid)
.EI
.SP 7 5

This method is called when the 'say' and 'tell_room' simul_efuns is used.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
caller - the object doing the say
.EP
.SP 9 5
str - the message to print
.EP
.SP 9 5
avoid - the people to avoid in the say

.EP

.SI 3
* %^BOLD%^event_see%^RESET%^
.EI
.SI 5
void event_see(object caller, string words, object thing, mixed avoid)
.EI

.SI 3
* %^BOLD%^event_soul%^RESET%^
.EI
.SI 5
varargs void event_soul(object ob, string str, mixed avoid)
.EI
.SP 7 5

This method is called by the soul to print out the soul messages.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object doing the soul
.EP
.SP 9 5
str - the string to print
.EP
.SP 9 5
avoid - the people not to print the message to

.EP

.SI 3
* %^BOLD%^event_whisper%^RESET%^
.EI
.SI 5
void event_whisper(object ob, string start, string mess, object * obs, string lang, object me)
.EI
.SP 7 5

This method is called when the whisper even is generated.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object whispering
.EP
.SP 9 5
start - the start of the whisper message
.EP
.SP 9 5
mess - the message to print
.EP
.SP 9 5
obs - the objects to tell the message to
.EP
.SP 9 5
lang - the lanaguage the whisper is in
.EP
.SP 9 5
me - the object doing the whispering

.EP

.SI 3
* %^BOLD%^event_write%^RESET%^
.EI
.SI 5
void event_write(object caller, string str)
.EI
.SP 7 5

This method is called by the simul_efun 'write'.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
caller - the calling object
.EP
.SP 9 5
str - the string to write

.EP

.SI 3
* %^BOLD%^fit_message%^RESET%^
.EI
.SI 5
string fit_message(string message)
.EI
.SP 7 5

This method fits a message into a the current players screen size.  This
does all sorts of other evil stuff too, like handling indenting and
all sorts of things!  Most of which I do not understand so I won't
say anything about here.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
message - the message to fit in
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the fitted message

.EP

.SI 3
* %^BOLD%^fix_string%^RESET%^
.EI
.SI 5
varargs string fix_string(string str, int width, int indent, mixed args ...)
.EI
.SP 7 5

This method handles the conversersions for the colour mapping which is
done on Discworld.  This also does octarine message expansion, if the
keyword %\^OCTARINE:message%\^ is embeded into a string then the
inside section will be replaced with a blank string if the player
cannot see octarine messages.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the string to do the conversion on
.EP
.SP 9 5
width - the width of the string
.EP
.SP 9 5
indent - the size of the indent
.EP
.SP 9 5
args - any other arguments
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the fixed up string
.EP

.SI 3
* %^BOLD%^get_hsay_func%^RESET%^
.EI
.SI 5
function get_hsay_func()
.EI
.SP 7 5

Return function pointer for do_say_his, for history say only.

.EP

.SI 3
* %^BOLD%^get_htell_func%^RESET%^
.EI
.SI 5
function get_htell_func()
.EI
.SP 7 5

Return function pointer for do_tell_his, for history tell only.

.EP

.SI 3
* %^BOLD%^my_mirror_short%^RESET%^
.EI
.SI 5
string my_mirror_short(object thing, string arg)
.EI
.SP 7 5

This is a special function for use with the reform message, it allows
the string to be echoed into the list instead of using the object's
value itself.  This is done specifically to handle objects with
variable shorts, so we get the short description correct at the
moment it is queried.

.EP

.SI 3
* %^BOLD%^octarine_message%^RESET%^
.EI
.SI 5
string octarine_message(string str)
.EI
.SP 7 5

This method will do the octarine checking for you on the message.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the string to check
.EP

.SI 3
* %^BOLD%^print_messages%^RESET%^
.EI
.SI 5
void print_messages()
.EI
.SP 7 5

This prints out the messages after the delay, printing out the
messages in a nice cute way.  It still retains the order of the
messages though.  This can be forced to occur by a message
occuring on the player object which requires something to
be printed.
.EP

.SI 3
* %^BOLD%^query_busy%^RESET%^
.EI
.SI 5
mixed query_busy()
.EI
.SP 7 5

This method tells us if the player/creator/lord is currently in busy
mode.  This will be 1 if the creatopr is generaly busy, or
it will return the array of players they are busy with.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the busy mode flag

.EP

.SI 3
* %^BOLD%^query_cols%^RESET%^
.EI
.SI 5
int query_cols()
.EI
.SP 7 5

This method returns the current number of columns the player has
set on their screen.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the number of columns on the screen
.EP

.SI 3
* %^BOLD%^query_cur_term%^RESET%^
.EI
.SI 5
string query_cur_term()
.EI
.SP 7 5

This method returns the current terminal type that is being used.  This
will be 0 if the terminal name is set to network and no response has
been gained from the remote site yet.  Otherwise it should be the
same value as the terminal name.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current terminal type
.EP

.SI 3
* %^BOLD%^query_earmuffs%^RESET%^
.EI
.SI 5
int query_earmuffs()
.EI
.SP 7 5

This method tells us if the player currently has earmuffs turned on.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if earmuffs are on, 0 if they are not
.EP

.SI 3
* %^BOLD%^query_inform_types%^RESET%^
.EI
.SI 5
string * query_inform_types()
.EI
.SP 7 5

This method returns the list of inform types this player can receive.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
array of inform types

.EP

.SI 3
* %^BOLD%^query_is_dark%^RESET%^
.EI
.SI 5
int query_is_dark(object thing)
.EI
.SP 7 5

This method checks whether or not the room the
player is in is dark enough to use 'someone'
instead of regular shorts.

.EP

.SI 3
* %^BOLD%^query_my_colours%^RESET%^
.EI
.SI 5
mapping query_my_colours()
.EI
.SP 7 5

Return a players list of custom colours.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a mapping of the players custom colours for different events.

.EP

.SI 3
* %^BOLD%^query_rows%^RESET%^
.EI
.SI 5
int query_rows()
.EI
.SP 7 5

This method returns the current number of rows the player has
set on their screen.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the number of rows on the screen
.EP

.SI 3
* %^BOLD%^query_see_octarine%^RESET%^
.EI
.SI 5
int query_see_octarine()
.EI
.SP 7 5

This method tests to see if the player can see octarine objects.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if they can see octarine, 0 if they cannot

.EP

.SI 3
* %^BOLD%^query_term_name%^RESET%^
.EI
.SI 5
string query_term_name()
.EI
.SP 7 5

This method returns the current terminal name.  If this is set to
network then the network will be queried for the terminal type
(using telnet suboption negotiation).
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current terminal name
.EP

.SI 3
* %^BOLD%^receive_snoop%^RESET%^
.EI
.SI 5
void receive_snoop(string mess)
.EI
.SP 7 5

This method is generated internally by the driver when this player is
snooping someone else.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
mess - the snoop message

.EP

.SI 3
* %^BOLD%^reform_message%^RESET%^
.EI
.SI 5
mixed reform_message(string message, mixed things)
.EI
.SP 7 5

This method does all those terrible things with messages and $'s
turning them into real strings.  It is a neat function if somewhat
complicated :)  It was written by Deutha.


The return array has two elements, the first being the reformed message and the second being the reformed things array.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
message - the message to reform
.EP
.SP 9 5
things - some bonus things to reform it with
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
an array consisting of two elements

.EP

.SI 3
* %^BOLD%^set_cols%^RESET%^
.EI
.SI 5
void set_cols(int i)
.EI
.SP 7 5

This method sets the current number of columns the player has set on
their screen.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
i - the new number of columns
.EP

.SI 3
* %^BOLD%^set_looked%^RESET%^
.EI
.SI 5
void set_looked(object thing)
.EI

.SI 3
* %^BOLD%^set_my_colours%^RESET%^
.EI
.SI 5
void set_my_colours(string event_type, string colour)
.EI
.SP 7 5

This method sets the colour codes for a given event.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
event_type - the type of event to set the colour for
.EP
.SP 9 5
colour - the colour to set

.EP

.SI 3
* %^BOLD%^set_network_terminal_type%^RESET%^
.EI
.SI 5
int set_network_terminal_type(string name)
.EI
.SP 7 5

This method handles the responses from the remote site informing
us of their terminal type.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the terminal type gathered from the remote site
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 if the type was not used, 1 if it was
.EP

.SI 3
* %^BOLD%^set_rows%^RESET%^
.EI
.SI 5
void set_rows(int i)
.EI
.SP 7 5

This method sets the number of rows on the players screen.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
i - the new number of rows
.EP

.SI 3
* %^BOLD%^set_term_type%^RESET%^
.EI
.SI 5
int set_term_type(string str)
.EI
.SP 7 5

This method sets the current terminal type for the player.  If the type
is network, then the network will be queried for the terminal type
and that will be used.  This is the distiction between the current
terminal type and the terminal name.  The name will be the value that
is set by the player and the current type will be the information
garnered from the network (if the name is network) or the same as the
name.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the new terminal type
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the terminal was successful set, 0 if not
.EP

.SI 3
* %^BOLD%^show_message%^RESET%^
.EI
.SI 5
void show_message(string message)
.EI
.SP 7 5

This method shows the message to the player.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
message - the message to show
.EP

.SI 3
* %^BOLD%^terminal_type%^RESET%^
.EI
.SI 5
void terminal_type(string type)
.EI
.SP 7 5

This is a call back generated by the driver internally to tell us about
terminal types.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the terminal type returned

.EP

.SI 3
* %^BOLD%^toggle_earmuffs%^RESET%^
.EI
.SI 5
void toggle_earmuffs()
.EI
.SP 7 5

This method will change the current value of the earmuffs on the player.
.EP

.SI 3
* %^BOLD%^window_size%^RESET%^
.EI
.SI 5
void window_size(int width, int height)
.EI
.SP 7 5

This is a call back generated by the driver internally to tell us about
the window size of the remote machine.  This information in this is
only used if the terminal is a network type.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
width - the number of columns
.EP
.SP 9 5
height - the number of rows

.EP


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^do_inform%^RESET%^
.EI
.SI 5
int do_inform(string str)
.EI
.SP 7 5

This is the command to handle the inform stuff.
It does all the turning on/off and stuff things for the informs.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the informs to listen to
.EP

.SI 3
* %^BOLD%^do_say_his%^RESET%^
.EI
.SI 5
varargs int do_say_his(string str, int brief)
.EI
.SP 7 5

This method is the command used to print a players say history.

.EP

.SI 3
* %^BOLD%^do_tell_his%^RESET%^
.EI
.SI 5
varargs int do_tell_his(string str, int brief)
.EI
.SP 7 5

This method is the command used to print a players tell history.

.EP

.SI 3
* %^BOLD%^enter_exit_mess%^RESET%^
.EI
.SI 5
void enter_exit_mess(string mess, object thing, int going)
.EI
.SP 7 5

This method is called when an object leaves or arrives in
the room.  It prints out
the message, well adds it to the queue of printable messages.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
mess - the message to print
.EP
.SP 9 5
thing - the thing which is leaving/arriving
.EP
.SP 9 5
going - if it is going

.EP


