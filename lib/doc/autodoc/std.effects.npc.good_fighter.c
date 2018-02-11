.DT
good_fighter.c
$MUDNAME$ autodoc help
good_fighter.c

.SH Description
.SP 5 5

The Good Fighter effect makes the npc fight a lot better.  It has a
classification of "npc.fighter".



Many NPCs need to be able to fight well.  Generally "fight well" simply means using the special combat commands that their guild offers.  Of course, since the use of those commands requires that an NPC have the requisite skills, the NPC will also have to include logic to set those skills to an appropriate level.  Since many NPCs need to be good fighters, this kind of code is duplicated all over the Disc.  

This shadow does everything necessary to turn a plain, stupid, NPC into a semi-intelligent fighter.  

To be more specific, when this shadow is applied to an NPC, it'll do everything necessary to make sure the NPC has the commands appropriate to their level, has the skills to use those commands, and has the intelligence to use the commands in a useful way.  

Currently, this shadow is only really useful to members of the warriors' guild.  It should be relatively straightforward to generalize this shadow to the needs of other guilds, or to write customized shadows based on this one but tuned for those others. But that is a later project.  

To use this shadow, you must first set the NPC's guild, race, and level, and their stats (strength, constitution, &c.).  Then add the effect to the NPC.  Defines are provided in good_fighter.h to simplify this.  Generally, this would be done in the setup() function for the NPC, but it can also be done later, in response to some event, or a player's statement, or what have you.  The only thing that is important is that the effect needs to get added after the NPC's stats are set, and before the NPC enters combat.  

When you add the effect, you need to give an argument.  This argument tunes the effect to one of 15 different variants, depending on how the fighter should use blunt, sharp, and pierce attacks, and how the fighter defends itself.  Defines for the attacks are USE_SHARP, USE_PIERCE, USE_BLUNT, USE_UNARMED, and USE_BALANCED. Defines for the defenses are DEFEND_DODGE, DEFEND_PARRY, and  DEFEND_BALANCED.  As an example, if you want a fighter who uses  piercing attacks, while defending with parry, then use the following  code: 
.EP
.SP 5 5
  add_effect(GOOD_FIGHTER, ({ USE_PIERCE, DEFEND_PARRY }) );
.EP
.SP 5 5
Always put the USE_xxx before the DEFEND_xxx!  

Obviously, it doesn't make a whole lot of since to set an NPC to USE_UNARMED and DEFEND_PARRY unless you also give them a shield.  

The skills and intelligence of the NPC are driven largely by the NPC's level.  The higher level an NPC is, the more special commands will be available to the NPC, and the more often the NPC will use these commands.  

The effect applies a shadow to the NPC.  It is in that shadow that nearly all the intelligence resides. 
.EP
.SP 10 5


Written by Sin
.EP



.SH See also
.SP 5 5
/std/shadows/fighting/combat, /std/race->set_guild(), /std/race->set_level() and clone_object()

.EP
.SH Change history
.SP 5 5
13 November 1997 -- Sin
    Converted it from a pure shadow to a shadow/effect pair.

6 Feb 1998 -- Sin
    Fixed documentation, and modified effect to support the skill
    changeover (USE_PIERCE).

11 April 1998 -- Sin
    Changed documentation to discuss USE_UNARMED.

.EP

.SH Includes
.SP 5 5
This class includes the following files /std/effects/npc/path.h and /include/effect.h.
.EP

