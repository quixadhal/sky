.DT
talker.c
$MUDNAME$ autodoc help
talker.c

.SH Description
.SP 5 5

This is the effect skelton docs.  This effect
has a classification of "magic.talker".


Describe the arguments in here.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects

.EP
.SH Includes
.SP 5 5
This class includes the following files /include/talker.h, /include/player.h, /std/effects/object/path.h, /include/deity.h, /include/library.h and /include/playtesters.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^all_channels%^RESET%^
.EI
.SI 5
string * all_channels(object player)
.EI
.SP 7 5

This method is used to determine which talker channels can use.
It also caches the data so that it only has to be recalculated
once.



.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - the player's channel list to generate
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
an array of channel names. (string *)
.EP

.SI 3
* %^BOLD%^channels%^RESET%^
.EI
.SI 5
string channels()
.EI
.SP 7 5

This returns the channels that a player is on in a nifty
formatted way.  Used in the channel list and talker shadow.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a list of channels that this_player() is on.

.EP

.SI 3
* %^BOLD%^clear_cache%^RESET%^
.EI
.SI 5
void clear_cache(string person)
.EI
.SP 7 5

This method is used to clear a specific person's cache
details.  It is called from the shadow when a person
attempts to re-add a channel, so they their details
can be updated.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
person - the person's name to clear from the cache.

.EP

.SI 3
* %^BOLD%^find_actual_talker%^RESET%^
.EI
.SI 5
object find_actual_talker(object thing)
.EI

.SI 3
* %^BOLD%^list%^RESET%^
.EI
.SI 5
string list(string word)
.EI
.SP 7 5

This method returns a formatted list of which players are using the
talker.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the name of a specific channel to get a listing of.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a formatted string containing who is on a channel.

.EP

.SI 3
* %^BOLD%^normalise_name%^RESET%^
.EI
.SI 5
string normalise_name(string channel)
.EI

.SI 3
* %^BOLD%^query_channel_cache%^RESET%^
.EI
.SI 5
varargs mapping query_channel_cache(string person)
.EI
.SP 7 5

This method is used for debugging purposes to query the
channel cache.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
person - the name of a person to query. If this is not
specified, then the entire channel cache is returned.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a mapping containing channel cache data.

.EP

.SI 3
* %^BOLD%^valid%^RESET%^
.EI
.SI 5
varargs int valid(mixed word, object who)
.EI
.SP 7 5

This method is used to check whether or not a channel (or a list of
channels are valid.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - if this is a string, then valid() checks to see whether
or not the channel can be used.  If it is an array, then it validates
all the channels mentioned.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the channel (or channels) are valid, 0 if they are not.

.EP


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^new_talker_args%^RESET%^
.EI
.SI 5
class talker_args new_talker_args()
.EI
.SP 7 5

This method returns the "default" effect arguments. They are used
if the existing ones are invalid (or old).
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a talker_args class containing "new" arguments.

.EP


