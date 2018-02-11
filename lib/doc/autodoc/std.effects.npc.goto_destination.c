.DT
goto_destination.c
$MUDNAME$ autodoc help
goto_destination.c

.SH Description
.SP 5 5

This is the goto destination effect, it also handles selling
stuff at the destination. This effect
has a classification of "npc.move".


The argument to this can be one of three things, it can be a string, an object or an array.  If it is a string the string specifies the room which the npc will try to go to.  If it is an object then the npc will try and get to the living object or room specified by the object.  The array consists of three elements: 
.EP
.SO 5 3 -5

	1	The destination as given above, string or object 
	2	The end function, 0 for nothing, "sell" to sell the inventory 
	3	The delay before heading off to the next destination. 
.EO
.SP 5 5


If the thing to do at the end is a function it is called with the following parameters: 
.EP
.SP 5 5
  function(object player, int found_it, string destination)
.EP
.SP 5 5
The found_it parameter will be 1 if the room is correct or 0 if it is not correct. 

This effect has a shadow associated with it.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects

.EP
.SH Includes
.SP 5 5
This class includes the following files /std/effects/npc/path.h and /include/effect.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^do_the_sell%^RESET%^
.EI
.SI 5
void do_the_sell(object player)
.EI
.SP 7 5

This method sells everything the npc currently has and is not
marked with the property "start equipment".  This can be called from
outside the effect to sell things.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
player - the players whose inventory is to be sold

.EP


