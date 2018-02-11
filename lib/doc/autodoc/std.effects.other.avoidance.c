.DT
avoidance.c
$MUDNAME$ autodoc help
avoidance.c

.SH Description
.SP 5 5

This effect makes an NPC avoid certain people.
It can be used to make NPCs run from certain players
if they attack the NPC or similar.
The first argument to the effect is the name of the
player to avoid, the second is the time to keep
avoiding the player.
.EP
.SP 10 5

.EP

.SH Example
.SI 5
add_effect("/std/effects/other/avoidance",
                  ({ player->query_name(), 600 }) );

.EI
.SH Includes
.SP 5 5
This class includes the following files /include/effect.h and /std/effects/other/path.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^reduce_avoidance%^RESET%^
.EI
.SI 5
void reduce_avoidance(object player, mapping arg, int id)
.EI


