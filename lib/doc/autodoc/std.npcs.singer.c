.DT
singer.c
$MUDNAME$ autodoc help
singer.c

.SH Description
.SP 5 5

He sings! Wheee!!!!
Shiannar, 25/09/01, inheritized by Sandoz, 25/09/01.
To use the inherit you need to have a mixed query_songs()
function in your NPC with the desired songs array.
To make the NPC automatically sing at times, you can use a
function pointer to request_song() in load_chat().
.EP
.SP 10 5

.EP

.SH Example
.SI 5

void setup() {
    ...
    <insert any setup functions>
    ...
    load_chat( 50, ({
        1, (: request_song() :), }) );
}

mixed query_songs() {
    return ({ ({
           "'This is the first line of song 1.",
           "'This is the second line of song 1."
           }),
           ({
           "'This is the first line of song 2.",
           "'This is the second line of song 2."
           }) });
}

.EI
.SH Inherits
.SP 5 5
This class inherits the following classes /std/npc.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^query_current_song%^RESET%^
.EI
.SI 5
string * query_current_song()
.EI
.SP 7 5

This method returns the song the NPC is currently singing.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the song we're currently singing
.EP

.SI 3
* %^BOLD%^query_singing%^RESET%^
.EI
.SI 5
int query_singing()
.EI
.SP 7 5

This method queries if the NPC is currently singing or not.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the amount of lines of song left to sing
.EP


