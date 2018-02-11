.DT
quality.c
$MUDNAME$ autodoc help
quality.c

.SH Description
.SP 5 5

This effect is used to impart the attribute of "quality" upon an
object, be it weapon, armour or normal object.  There are a couple
main effects of quality upon an object:

.EP
.SO 5 3 -5

	*	%^BOLD%^Sturdiness%^RESET%^. A higher quality object will suffer less damage than it would normally. Lower quality suffers more damage. 
	*	%^BOLD%^Value%^RESET%^. A higher quality object is worth more. Lower quality brings a lower price. 
	*	%^BOLD%^Damage Inflicted%^RESET%^. A higher quality weapon has better balance, holds a better edge (for sharp weapons), has a better designed striking surface (for blunt weapons), and better grips, and thus will do more damage than a normal weapon.  A low quality weapon, on the other hand, might have a loose handle, poor edge or even a warped blade. 
	*	%^BOLD%^Enchantment potential%^RESET%^. A higher quality weapon, due to its superior form and structure, will hold a higher enchantment than something put together by some drunken twonk from Slice. 
	*	%^BOLD%^Appearance%^RESET%^. The quality of the item is obvious to those who inspect it. 
.EO
.SP 5 5
All these modifications to normal behavior are on a logarithmic scale, thus the range of possible quality numbers ranges from +infinity to -infinity, but in actual practice only +10 to -10 are meaningful. Even so, the further you get from quality 0 (normal in all respects) the more rare it should be.  Most shopkeepers will not carry poor quality merchandice unless they are in dire straits, and there are extremely few people on the disc capable of even approaching the upper quality ratings.  Even then, they only do so by the grace of the Gods.
.EP
.SP 10 5


Written by Daxa (Greg Craff)

Started Sun 2200 22 Mar 1998

.EP

.SH Example
.SI 5
wossname->add_effect(EFFECT_PATH+"object/quality.c",4)
.EI
.SH Includes
.SP 5 5
This class includes the following files /std/effects/object/path.h and /include/effect.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^beginning%^RESET%^
.EI
.SI 5
int beginning(object wossname, int quality, int id)
.EI
.SP 7 5

This function is called by add_effect.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
wossname - The object receiving the effect; don't worry about it.
.EP
.SP 9 5
quality - The integer indicating quality.  This is the only thing
you worry about.
.EP
.SP 9 5
id - The effect id on the object receiving the effect; ignore it.

.EP

.SI 3
* %^BOLD%^end%^RESET%^
.EI
.SI 5
void end(object wossname, int quality, int id)
.EI

.SI 3
* %^BOLD%^merge_effect%^RESET%^
.EI
.SI 5
int merge_effect(object wossname, int old_quality, int new_quality, int id)
.EI

.SI 3
* %^BOLD%^restart%^RESET%^
.EI
.SI 5
int restart(object wossname, int quality, int id)
.EI


