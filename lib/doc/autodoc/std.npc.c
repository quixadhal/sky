.DT
npc.c
$MUDNAME$ autodoc help
npc.c

.SH Description
.SP 5 5

This is the main NPC inheritable.
.EP
.SP 10 5


Written by Pinkfish
.EP



.SH See also
.SP 5 5
/std/npc/npc_base

.EP
.SH Inherits
.SP 5 5
This class inherits the following classes /global/player/new_parse, /std/living/living, /std/living/response_mon and /global/player/guild-race.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/top_ten_tables.h, /include/player.h, /include/route.h, /secure/include/skills.h and /include/playtesters.h.
.EP

.SH Classes

.SI 3
* %^BOLD%^chat_data%^RESET%^
class chat_data {
int chance;
int total_w;
int * weight;
mixed chats;
int last_chat;
}

.EI


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_achat_string%^RESET%^
.EI
.SI 5
varargs void add_achat_string(mixed weight, mixed chat)
.EI
.SP 7 5

This method adds an array of attack chats or a single attack chat
string into the current list of achat strings.
See load_chat() for a longer description of the chat string.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
weight - the weight of the chat, or an array of weights and chats
.EP
.SP 9 5
chat - the new chat string
.EP

.SI 3
* %^BOLD%^add_chat_string%^RESET%^
.EI
.SI 5
varargs void add_chat_string(mixed weight, mixed chat)
.EI
.SP 7 5

This method adds an array of chats or a single chat string into
the current list of chat strings.  See load_chat() for a longer
description of the chat string.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
weight - the weight of the chat, or an array of weights and chats
.EP
.SP 9 5
chat - the new chat string
.EP

.SI 3
* %^BOLD%^add_combat_action%^RESET%^
.EI
.SI 5
void add_combat_action(int chance, string name, mixed action)
.EI
.SP 7 5

This method adds a combat action to the NPC.  This is an action which
has a chance of occuring during combat.  The name is an identifier
which can be used to remove the action with later.  The action
itself can be a string, then that command will be executed.  If
the action is a function pointer then it will be evaluated with
two arguments, the first being the attacker, the second being the
target.


If the action is an array, if it is one element then the function specified will be called on the attacked with the same arguments as above.  If the size of the array is two then the function will be called on the specified object with the arguments as above.
.EP

.SI 3
* %^BOLD%^add_enter_commands%^RESET%^
.EI
.SI 5
void add_enter_commands(mixed str)
.EI
.SP 7 5

This method adds a command to be called whenever the npc enters
a room.  If the command is a string, then it will be executed
as if they had typed it.  If it is a function then the function
will be evaluated and one argument (the NPC itself) will be passed
in.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the enter commands to add
.EP

.SI 3
* %^BOLD%^add_language%^RESET%^
.EI
.SI 5
void add_language(string lang)
.EI
.SP 7 5

This method adds a language to the NPC.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
lang - the language to add

.EP

.SI 3
* %^BOLD%^add_move_zone%^RESET%^
.EI
.SI 5
void add_move_zone(mixed zone)
.EI
.SP 7 5

This method adds a move zone onto the NPC.  The move zones control
which areas the NPC will wander into, a move zone is set on the
room and the NPC will only enter rooms which have a matching
move zone.  If there is no move zone, then the NPC will enter
any room.


If the parameter is an array each of the elements of the array will be added as a move zone.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
zone - the zone(s) to add
.EP

.SI 3
* %^BOLD%^basic_setup%^RESET%^
.EI
.SI 5
void basic_setup(string race, int level, mixed gender)
.EI
.SP 7 5

This method sets up the basic abilities and race of the critter.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
race - this is the race of the character.  It should be
a race that's understood by the /std/race.c
.EP
.SP 9 5
level - this is the level of the NPC.  The number is used
by the race object to set ability scores.
.EP
.SP 9 5
gender - this is the gender of the NPC.  It can be either a
number ( 0 - neuter, 1 - male or 2 - female ) or a string ("neuter",
"male", "female")
.EP

.SI 3
* %^BOLD%^check_env%^RESET%^
.EI
.SI 5
int check_env()
.EI
.SP 7 5

This method checks to see if there are any players in the environment
of the NPC.  This should be used to determine if chats should
be turned off and other things which should only work in the
presence of players.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if there is a player in the room, 0 if not

.EP

.SI 3
* %^BOLD%^delay_command%^RESET%^
.EI
.SI 5
int delay_command(string words, int interval)
.EI
.SP 7 5

This method allows you to control the NPC and get it to do
actions where they are queued as for players.   The command
is always delayed by delay even if there are no commands pending
unlike queue_command(). This function
is 100% compatible with queue_command() and init_command().
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
words - the action to perform
.EP
.SP 9 5
interval - to wait before the command.
.EP

.SI 3
* %^BOLD%^delete_queued_commands%^RESET%^
.EI
.SI 5
void delete_queued_commands()
.EI
.SP 7 5

This method throws away any queued commands.
It doesn't remove the call_out, however if no
new commands are added there will be no effect.
.EP

.SI 3
* %^BOLD%^do_command%^RESET%^
.EI
.SI 5
int do_command(string words)
.EI
.SP 7 5

This method allows you to control the NPC and get it to do
actions.  This can be used for NPC control and intelligence.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
words - the action to preform
.EP

.SI 3
* %^BOLD%^do_follow_move%^RESET%^
.EI
.SI 5
void do_follow_move(object who, string dir)
.EI
.SP 7 5

This method is used to make the NPC follow after attackers
when they leave the room.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
who - the person we are chasing
.EP
.SP 9 5
dir - the direction to follow them in

.EP

.SI 3
* %^BOLD%^do_move%^RESET%^
.EI
.SI 5
void do_move(string move)
.EI
.SP 7 5

This method causes the NPC to move in the given direction.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
move - the direction to move in

.EP

.SI 3
* %^BOLD%^do_move_after%^RESET%^
.EI
.SI 5
void do_move_after(int running_away)
.EI
.SP 7 5

This is called when the NPC decides it must continue down
a certain route.  This will be called by the wander handler
and can be used to force the NPC to wander along a route
faster.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
running_away - this is 1 if the npc is running away
.EP

.SI 3
* %^BOLD%^do_not_wander%^RESET%^
.EI
.SI 5
int do_not_wander()
.EI
.SP 7 5

This method can be temporarily overwritten in NPCs to stop them
wandering under certain circumstances.  For example if someone is
fighting in the room with the NPC, and we want the NPC to watch.
Alternatively to overwriting the function, you can set a "no wander"
property on the NPC.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
should return 1 if we don't want to wander

.EP

.SI 3
* %^BOLD%^do_route_move%^RESET%^
.EI
.SI 5
void do_route_move()
.EI
.SP 7 5

This method moves the NPC one more location along the route it
is following.
.EP

.SI 3
* %^BOLD%^event_disarm%^RESET%^
.EI
.SI 5
void event_disarm(object disarmer, object weapon)
.EI
.SP 7 5

This function makes the more intelligent NPCs pick up their
weapons after being disarmed.
It can be overwritten if you don't want the default disarm
response to work for your NPC.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
disarmer - the person who disarmed us
.EP
.SP 9 5
weapon - the weapon that was disarmed

.EP

.SI 3
* %^BOLD%^event_fight_in_progress%^RESET%^
.EI
.SI 5
void event_fight_in_progress(object me, object him)
.EI
.SP 7 5

This event is called when a fight is in progress.  It will
be used for things like joining into currently running
fights and initiating combat with spell casters.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
me - the person initiating the attack
.EP
.SP 9 5
him - the person being attacked

.EP

.SI 3
* %^BOLD%^expand_mon_string%^RESET%^
.EI
.SI 5
void expand_mon_string(mixed str)
.EI
.SP 7 5

This method executes the string passed in.  It handles all the
stuff which is needed from the chat_string stuff.

If the input is a function pointer then it is evaluated with one
parameter, being the NPC.

If the input is a string then the first letter determines what will
be done with it.  All these are passed through expand_string
so that exciting things can be done.

.EP
.SO 7 3 -5

	*	# - A call_other will be generated.  The parameters are separated by ':'s, so "#bing:fred:chicken" would call
.EO
.SO 7 3 -5
		TO->bing("fred", "chicken");
.EO
.SO 7 3 -5
		. ', ", : - These will generate a 'say', 'lsay' or 'emote'. @ - This will run the passed in command.  Eg: "@frog" would cause the     soul command frog to be used. Anything else will be used as a message to be sent to everyone in the     room. 
.EO
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the thing to execute
.EP

.SI 3
* %^BOLD%^expand_string%^RESET%^
.EI
.SI 5
string expand_string(string in_str, object on)
.EI
.SP 7 5

This method is used to expand the message strings used in the
npc messages.  It is used for chat strings and such things like
that.  The strings it expands are of the form:
.EP
.SP 7 5
$lname$, $mname$, $aname$, $itheshort$ ...
.EP
.SP 7 5
The first letter determines the type of object being referenced. They are: 
.EP
.SP 7 5
m 
.EP
.SP 10 5
Me!  The NPC itself. 
.EP
.SP 7 5
l 
.EP
.SP 7 5
A random living object in the NPC's environment. 
.EP
.SP 7 5
i 
.EP
.SP 7 5
A random interactive object (player) in the NPC's environment. 
.EP
.SP 7 5
a 
.EP
.SP 10 5
Chooses a random attacker from those attacking the NPC. 
.EP
.SP 7 5
o 
.EP
.SP 10 5
Choose a random object in the inventory of the NPC. 
.EP
.SP 7 5
After the first letter is a type of information being request. 
.EP
.SP 10 5
name 
.EP
.SP 13 5
The name of the selected object. 
.EP
.SP 10 5
cname 
.EP
.SP 13 5
The capitalised name of the selected object. 
.EP
.SP 10 5
gender 
.EP
.SP 13 5
The gender string of the selected object (male, female, neuter). 
.EP
.SP 10 5
poss 
.EP
.SP 13 5
The possessive string of the selected object. 
.EP
.SP 10 5
obj 
.EP
.SP 13 5
The objective string of the selected object. 
.EP
.SP 10 5
pronoun 
.EP
.SP 13 5
The pronoun string of the selected object. 
.EP
.SP 10 5
gtitle 
.EP
.SP 13 5
The guild title of the selected object (only useful on livings). 
.EP
.SP 10 5
ashort 
.EP
.SP 13 5
The a_short() call. 
.EP
.SP 10 5
possshort 
.EP
.SP 13 5
The poss_short() call. 
.EP
.SP 10 5
theshort 
.EP
.SP 13 5
The the_short() call. 
.EP
.SP 10 5
oneshort 
.EP
.SP 13 5
The one_short() call. 
.EP
.SP 7 5

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
in_str - the input string
.EP
.SP 9 5
on - the object to use for the 'o' matching

.EP

.SI 3
* %^BOLD%^get_item%^RESET%^
.EI
.SI 5
object get_item(string item, int cond)
.EI
.SP 7 5

This method will fetch an item from the armoury and move it into the NPC.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
the - item to get
.EP
.SP 9 5
the - condition of the item
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the object of the new item

.EP

.SI 3
* %^BOLD%^get_next_route_direction%^RESET%^
.EI
.SI 5
string get_next_route_direction()
.EI
.SP 7 5

This method gets the next direction to go in the route which
is currently being followed and will remove this direction
from the array.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the next direction to go to
.EP

.SI 3
* %^BOLD%^heart_beat%^RESET%^
.EI
.SI 5
void heart_beat()
.EI
.SP 7 5

The main heart beat function.  This is called by the driver
every 2 seconds.  Does all the maintenance stuff like fixing
up hps, greeting people and stuff like that.

.EP

.SI 3
* %^BOLD%^init_command%^RESET%^
.EI
.SI 5
varargs void init_command(string str, int tim)
.EI
.SP 7 5

This method allows you submit delayed commands to the NPC via a call_out.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the action to perform
.EP
.SP 9 5
tim - the time delay after which to perform the action
.EP

.SI 3
* %^BOLD%^init_equip%^RESET%^
.EI
.SI 5
void init_equip()
.EI
.SP 7 5

This method makes the NPC to equip whatever they have.
.EP

.SI 3
* %^BOLD%^load_a_chat%^RESET%^
.EI
.SI 5
void load_a_chat(int chance, mixed data)
.EI
.SP 7 5

This method loads up the set of chat strings to use while in combat.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
chance - the chance of the chat occuring
.EP
.SP 9 5
data - the chat strings and weights to use
.EP

.SI 3
* %^BOLD%^load_chat%^RESET%^
.EI
.SI 5
void load_chat(int chance, mixed data)
.EI
.SP 7 5

This method loads up the chat strings for the NPC.  This will be
an array containing pairs of elements, the first pair is the
weighting of the chat and the second is the chat to use.


All the weights in the array are added up and then a random number is chosen in the weighting.  Then that element is looked up in the array.  This way you can control a chat and make it rare. 

If the chat string is an array then this a story, the story will be executed one after another and no other chats will be executed in between.  The chat chance is still used to determine when the chats will occur. Special strings can be used which will replace with object names, see expand_mon_string() for further information. 

The chat chance is a chance (in 1000) of the chat occuring.  You will need to play with this yourself to see which frequency of chatting you wish for your NPC.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
chance - the chance in 1000 of a chat working every 2 seconds
.EP
.SP 9 5
data - the chats and chat weights to use
.EP

.SI 3
* %^BOLD%^move_me_to%^RESET%^
.EI
.SI 5
varargs void move_me_to(string dest, int delay)
.EI
.SP 7 5

This method will move the NPC to the specified destination.  The
NPC will walk from where they currently are to the destination using
the time delay specified between the movements.


If the location is reached then the function "stopped_route" will be called on the npc.  The first argument to the function will be 0 if the npc did not reach its destination and 1 if it did.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
dest - the destination to go to
.EP
.SP 9 5
delay - the time delay between each move
.EP

.SI 3
* %^BOLD%^query_achat_chance%^RESET%^
.EI
.SI 5
int query_achat_chance()
.EI
.SP 7 5

This method returns the current attack chat chance for the NPC.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current chat chance
.EP

.SI 3
* %^BOLD%^query_achat_string%^RESET%^
.EI
.SI 5
mixed query_achat_string()
.EI
.SP 7 5

This method queries the current aggressive chat strings for the NPC.
The return value is an array of three elements where the
first member is the sum of the weights of all chats, the
second member contains the weights of chats, and the third
member contains the chat strings.
chat string is formatted.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current chat strings
.EP

.SI 3
* %^BOLD%^query_aggressive%^RESET%^
.EI
.SI 5
int query_aggressive()
.EI
.SP 7 5

This method returns the current aggressive level of the NPC.
If the aggressive is set to 1, then the NPC will attack all players
that enter its environment.  If the aggressive is set to 2 then
the NPC will attack everything (including other NPCs).


See the function start_attack() for information about things you can do to stop an aggressive NPC from attacking things.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the aggressive level of the NPC
.EP

.SI 3
* %^BOLD%^query_always_return_to_default_position%^RESET%^
.EI
.SI 5
int query_always_return_to_default_position()
.EI
.SP 7 5

This method returns the status of the flag that makes the NPC return
to the default position if its position is changed.  The flag
specifies the length of time to wait before causing the
default position to be restored.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the time to wait before the position is restored
.EP

.SI 3
* %^BOLD%^query_cannot_change_position%^RESET%^
.EI
.SI 5
int query_cannot_change_position()
.EI
.SP 7 5

This method returns the current value of the unable to change
position flag.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the unable to change position flag
.EP

.SI 3
* %^BOLD%^query_chat_chance%^RESET%^
.EI
.SI 5
int query_chat_chance()
.EI
.SP 7 5

This method returns the current chat chance for the NPC.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current chat chance
.EP

.SI 3
* %^BOLD%^query_chat_string%^RESET%^
.EI
.SI 5
mixed query_chat_string()
.EI
.SP 7 5

This method queries the current chat strings for the NPC.
The return value is an array of three elements where the
first member is the sum of the weights of all chats, the
second member contains the weights of chats, and the third
member contains the chat strings.
chat string is formatted.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current chat strings
.EP

.SI 3
* %^BOLD%^query_chats_off%^RESET%^
.EI
.SI 5
int query_chats_off()
.EI
.SP 7 5

This method queries whether or not the chats of the NPC
have been turned off.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the chats are off, 0 if chats are on

.EP

.SI 3
* %^BOLD%^query_combat_actions%^RESET%^
.EI
.SI 5
mixed query_combat_actions()
.EI
.SP 7 5

This method returns the current array of combat actions on the
NPC.


The array will have the format of: 
.EP
.SP 7 5
   ({
.EP
.SP 7 5
       total_chance,
.EP
.SP 7 5
       action1_chance,
.EP
.SP 7 5
       action1_name,
.EP
.SP 7 5
       action1_action,
.EP
.SP 7 5
       ...
.EP
.SP 7 5
    })
.EP
.SP 7 5

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the combat action array
.EP

.SI 3
* %^BOLD%^query_current_language%^RESET%^
.EI
.SI 5
string query_current_language()
.EI
.SP 7 5

This method returns the current language of the NPC.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current language

.EP

.SI 3
* %^BOLD%^query_death_xp%^RESET%^
.EI
.SI 5
int query_death_xp()
.EI
.SP 7 5

This method returns the amount of death experiecne that would be
gained by killing the NPC.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the amount of death experience for the npc

.EP

.SI 3
* %^BOLD%^query_enter_commands%^RESET%^
.EI
.SI 5
string * query_enter_commands()
.EI
.SP 7 5

This method returns the current array of enter commands.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current array of enter commands
.EP

.SI 3
* %^BOLD%^query_fight_type%^RESET%^
.EI
.SI 5
int query_fight_type()
.EI
.SP 7 5

This method returns the flag which allows the NPC to join into fights.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the NPC is to join fights, 0 if not
.EP

.SI 3
* %^BOLD%^query_follow_speed%^RESET%^
.EI
.SI 5
int query_follow_speed()
.EI
.SP 7 5

This method queries the speed at which the NPC will follow
after a player, when they leave combat.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current follow speed
.EP

.SI 3
* %^BOLD%^query_following_route%^RESET%^
.EI
.SI 5
string * query_following_route()
.EI
.SP 7 5

This method returns the current array of directions we are following
as a route.
.EP

.SI 3
* %^BOLD%^query_greetings%^RESET%^
.EI
.SI 5
string * query_greetings()
.EI
.SP 7 5

This method queries the greetings of the NPC,
if there are any set.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the greetings array

.EP

.SI 3
* %^BOLD%^query_home_location%^RESET%^
.EI
.SI 5
string query_home_location()
.EI
.SP 7 5

This method will return the NPC's home location.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the home location

.EP

.SI 3
* %^BOLD%^query_join_fights%^RESET%^
.EI
.SI 5
string query_join_fights()
.EI
.SP 7 5

This method returns the message to use when joining into fights.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the message to print when joining a fight
.EP

.SI 3
* %^BOLD%^query_level%^RESET%^
.EI
.SI 5
int query_level()
.EI
.SP 7 5

This method returns the level of the NPC.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the level of the NPC
.EP

.SI 3
* %^BOLD%^query_move_after%^RESET%^
.EI
.SI 5
int * query_move_after()
.EI
.SP 7 5

This method returns the current move after values.
It returns an array of the form:
.EP
.SP 7 5
   ({
.EP
.SP 7 5
     after,
.EP
.SP 7 5
     rand,
.EP
.SP 7 5
    })
.EP
.SP 7 5

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the move after values
.EP

.SI 3
* %^BOLD%^query_move_zones%^RESET%^
.EI
.SI 5
string * query_move_zones()
.EI
.SP 7 5

This method returns the current list of move zones on the NPC
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current list of move zones
.EP

.SI 3
* %^BOLD%^query_ok_turn_off_heart_beat%^RESET%^
.EI
.SI 5
int query_ok_turn_off_heart_beat()
.EI
.SP 7 5

This method returns 1 if it is ok to turn of the NPC's heart beat.
This can be overridden for times when the heart beat needs to be
kept on for some reason.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the heart beat should go off, 0 if it should stay on

.EP

.SI 3
* %^BOLD%^query_queued_commands%^RESET%^
.EI
.SI 5
mixed query_queued_commands()
.EI
.SP 7 5

This method returns the queued command list.
.EP

.SI 3
* %^BOLD%^queue_command%^RESET%^
.EI
.SI 5
varargs int queue_command(string words, int interval)
.EI
.SP 7 5

This method allows you to control the NPC and get it to do
actions where they are queued as for players.  If there are no
commands pending the command is executed immediately.  This function
is 100% compatible with delay_command() and init_command().
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
words - the action to perform
.EP
.SP 9 5
interval - the time to wait before processing another command
If omitted defaults to 2 seconds as per players
.EP

.SI 3
* %^BOLD%^remove_achat_string%^RESET%^
.EI
.SI 5
void remove_achat_string(mixed chat)
.EI
.SP 7 5

This method attempts to remove the given chat string from the
current list of attack message chat strings.  The chat message
is checked to see if it exists in the array, the weighting of
the string is ignored.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
chat - the chat string to remove
.EP

.SI 3
* %^BOLD%^remove_chat_string%^RESET%^
.EI
.SI 5
void remove_chat_string(mixed chat)
.EI
.SP 7 5

This method attempts to remove the given chat string from the
current list of chat strings.  The chat message is checked
to see if it exists in the array, the weighting of the
string is ignored.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
chat - the chat string to remove
.EP

.SI 3
* %^BOLD%^remove_combat_action%^RESET%^
.EI
.SI 5
int remove_combat_action(string name)
.EI
.SP 7 5

This method will remove the combat action with the specified name.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if it is found and removed, 0 if not
.EP

.SI 3
* %^BOLD%^remove_move_zone%^RESET%^
.EI
.SI 5
void remove_move_zone(mixed zone)
.EI
.SP 7 5

This method removes a move zone from the NPC.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
zone - the zone(s) to remove
.EP

.SI 3
* %^BOLD%^reset_enter_commands%^RESET%^
.EI
.SI 5
void reset_enter_commands()
.EI
.SP 7 5

This method resets the array of enter commands back to nothing.
.EP

.SI 3
* %^BOLD%^run_away%^RESET%^
.EI
.SI 5
int run_away()
.EI
.SP 7 5

This method is used to make the NPC run away.  This will be
called by the combat code for wimpy when the NPC is bellow the
number of points used to trigger the wimpy action.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if successfuly ran away

.EP

.SI 3
* %^BOLD%^set_achat_chance%^RESET%^
.EI
.SI 5
void set_achat_chance(int i)
.EI
.SP 7 5

This method sets the current aggressive chat chance the NPC.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
i - the attack message chat chance
.EP

.SI 3
* %^BOLD%^set_aggressive%^RESET%^
.EI
.SI 5
void set_aggressive(int level)
.EI
.SP 7 5

This method sets the current aggressive level of the NPC.
If the aggressive is set to 1, then the NPC will attack all players
that enter its environment.  If the aggressive is set to 2 then
the NPC will attack everything (including other NPCs).


See the function start_attack() for information about things you can do to stop an aggressive NPC from attacking things.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
level - the new aggressive level

.EP

.SI 3
* %^BOLD%^set_always_return_to_default_position%^RESET%^
.EI
.SI 5
void set_always_return_to_default_position(int tim)
.EI
.SP 7 5

This method sets the status of the flag that makes the NPC return
to the default position if its position is changed.  The flag
specifies the length of time to wait before causing the
default position to be restored.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
tim - the time to wait before the position is restored
.EP

.SI 3
* %^BOLD%^set_cannot_change_position%^RESET%^
.EI
.SI 5
void set_cannot_change_position(int flag)
.EI
.SP 7 5

This method sets the value of the unable to change position flag.
This flag will be checked by the soul, and by anything else which
deliberatly changes someones position.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
flag - the unable to change position flag
.EP

.SI 3
* %^BOLD%^set_chat_chance%^RESET%^
.EI
.SI 5
void set_chat_chance(int i)
.EI
.SP 7 5

This method sets the current chat chance for the NPC.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
i - the chat chance
.EP

.SI 3
* %^BOLD%^set_chats_off%^RESET%^
.EI
.SI 5
void set_chats_off(int i)
.EI
.SP 7 5

This method can be used to turn the chats of the NPC on/off.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
i - 1 to turn the chats off, 0 to turn them on

.EP

.SI 3
* %^BOLD%^set_death_xp%^RESET%^
.EI
.SI 5
int set_death_xp(int amount)
.EI
.SP 7 5

This method sets the amount of death experience that would be
gained by killing the NPC.

.EP

.SI 3
* %^BOLD%^set_follow_speed%^RESET%^
.EI
.SI 5
void set_follow_speed(int speed)
.EI
.SP 7 5

This method sets the speed at which the NPC will follow
after a player, when they leave combat.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
speed - the new follow speed
.EP

.SI 3
* %^BOLD%^set_greeting%^RESET%^
.EI
.SI 5
void set_greeting(mixed str)
.EI
.SP 7 5

This method sets up the greeting strings to use when
someone enters the room the NPC is in.
This is useful for shopkeepers and more unique NPCs.
$ob$ in greeting strings will be replaced with
the people that are being greeted.

To use a greeting in form of a soul command, please
use an "@" in front of the greeting string. Soul greetings
will be called on each person individually, and it is
possible to set up random souls by separating different
soul commands by a ":" in the greeting string (see example).

It is also possible to use a function instead of a string
greeting.  The function can either be a function
pointer or a string of the following format -
"#file_name:function", and will then be called with
the following arguments - the thing (object) doing
the greeting, and the array of objects to greet.

NOTE : The NPC will only greet those livings he can see,
and that are not ghosts or otherwise dead.

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the greeting or array of greetings to use
.EP

.SI 3
* %^BOLD%^set_home_location%^RESET%^
.EI
.SI 5
void set_home_location(string loc)
.EI
.SP 7 5

This method will set up a 'home' location for the NPC.
This is the file name of the room the NPC
should return to whenever it is moved.
It can be used to make unique NPCs returns
to their default location etc.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
loc - the filename of the room to set as home

.EP

.SI 3
* %^BOLD%^set_join_fight_type%^RESET%^
.EI
.SI 5
void set_join_fight_type(int i)
.EI
.SP 7 5

This method sets the flag which allows the NPC to join into fights.
If this is set to a non-zero value then the NPC will join into
fights in progress using the fight joining message.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
i - 1 if the npc is to join fights, 0 if not
.EP

.SI 3
* %^BOLD%^set_join_fights%^RESET%^
.EI
.SI 5
void set_join_fights(string str)
.EI
.SP 7 5

This method sets the message to use when joining into fights.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the message to print when joining a fight
.EP

.SI 3
* %^BOLD%^set_language%^RESET%^
.EI
.SI 5
int set_language(string lang)
.EI
.SP 7 5

This method sets the current language of the NPC.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
lang - the language to set as current

.EP

.SI 3
* %^BOLD%^set_move_after%^RESET%^
.EI
.SI 5
void set_move_after(int after, int rand)
.EI
.SP 7 5

This method sets the speed at which the NPC will randomly
wander around.  The NPC will wander at the speed:
.EP
.SP 7 5
speed = after + random(rand)
.EP
.SP 7 5
This is called every time the NPC sets up for its next move. 

The move zones control which areas the NPC will wander into, a move zone is set on the room and the NPC will only enter rooms which have a matching move zone.  If there is no move zone, then the NPC will enter any room.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
after - the fixed amount of time
.EP
.SP 9 5
rand - the random amount of time
.EP

.SI 3
* %^BOLD%^set_random_stats%^RESET%^
.EI
.SI 5
void set_random_stats(int min, int max)
.EI
.SP 7 5

This method sets the stats for the NPC to some exciting random
values.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
min - the minimum value of stats
.EP
.SP 9 5
max - the maximum value of stats

.EP

.SI 3
* %^BOLD%^set_unique%^RESET%^
.EI
.SI 5
void set_unique()
.EI
.SP 7 5

This method sets the unique propety on the NPC.
Unique NPCs give no xp when killed and will generate
informs when dying amongst other things.

.EP

.SI 3
* %^BOLD%^start_attack%^RESET%^
.EI
.SI 5
void start_attack(object who)
.EI
.SP 7 5

This method check to see if the NPC should start attacking someone
when they enter the NPC's environment.  It is called from inside
init().  The NPC will only attack if the agressive is set and the
person is visible to be attacked.  The property
"no attack"can be set on the npc (or player) to stop them being attacked.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
who - the person to potentially start attacking
.EP


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^got_the_route%^RESET%^
.EI
.SI 5
void got_the_route(string * route, int delay, string dest)
.EI
.SP 7 5

This method is called by the move_me_to function after the
route handler has successfuly discovered the route to follow.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
route - the route to follow
.EP
.SP 9 5
delay - the delay to follow it with
.EP
.SP 9 5
dest - route destination
.EP


