.DT
stat_adjustment.c
$MUDNAME$ autodoc help
stat_adjustment.c

.SH Description
.SP 5 5

This is the effect skelton docs.  This effect
has a classification of "mudlib.clothing.stat".


The argument to this effect should be a mapping with the set of stat adjustments for the item and the item doing the adjusting. ie: ({ ob, ([ "str" : 1, "dex" : -1 ]) }) 

If you add the effect with the same object twice, the new set of stat adjustments overrides the old ones.
.EP
.SP 10 5


Written by Pinkfish

.EP



.SH See also
.SP 5 5
help::effects
.EP
.SH Includes
.SP 5 5
This class includes the following files /include/effect.h and /std/effects/attached/path.h.
.EP

.SH Classes

.SI 3
* %^BOLD%^stat_class%^RESET%^
class stat_class {
mapping current_adjustments;
object * obs;
mapping * adjs;
object me;
}

.EI


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^remove_stat_adjustment_ob%^RESET%^
.EI
.SI 5
void remove_stat_adjustment_ob(object player, object ob)
.EI
.SP 7 5

This method is called to remove the stat adjusts for the specified
id.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - the player to remove the adjustments
.EP
.SP 9 5
ob - the object to remove the stats

.EP

.SI 3
* %^BOLD%^update_adjustments%^RESET%^
.EI
.SI 5
void update_adjustments(object player, class stat_class arg)
.EI
.SP 7 5

This method adjusts bonuses on the player based on the current
set of stats and things.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - the player to update the stats on
.EP


