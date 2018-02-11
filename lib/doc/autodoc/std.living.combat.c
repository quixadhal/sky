.DT
combat.c
$MUDNAME$ autodoc help
combat.c

.SH Description
.SP 5 5

This file contains all the methods and fun things to handle combat
from the living object side of things.
.EP
.SP 10 5


Written by Pinkfish
.EP

.SH Change history
.SP 5 5
Added the combat code with some tweaks - Sandoz, May 2003.

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /std/weapon_logic and /std/living/corpse.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/tasks.h, /include/player.h, /include/combat.h and /include/playtesters.h.
.EP

.SH Classes

.SI 3
* %^BOLD%^attacker_data%^RESET%^
class attacker_data {
object ob;
string name;
int time;
}

.EI

.SI 3
* %^BOLD%^combat_data%^RESET%^
class combat_data {
class attacker_data * attackers;
class attacker_data concentrating;
object * protectors;
object * defenders;
object attacker;
object target;
object weapon;
int special_manoeuvre;
int in_combat;
class special_attack_data * sp_queue;
}

.EI

.SI 3
* %^BOLD%^combat_tactics%^RESET%^
class combat_tactics {
int attitude;
string response;
string parry;
int unarmed_parry;
string focus;
}

.EI


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_defender%^RESET%^
.EI
.SI 5
int add_defender(object thing)
.EI
.SP 7 5

This method will add a defender to the current list of defenders
for this living object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the defender to add
.EP

.SI 3
* %^BOLD%^add_protector%^RESET%^
.EI
.SI 5
int add_protector(object thing)
.EI
.SP 7 5

This method will add a protector to the current list of protectors
for this living object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the protector to add
.EP

.SI 3
* %^BOLD%^attack_by%^RESET%^
.EI
.SI 5
int attack_by(object thing)
.EI
.SP 7 5

This methid is called when the living object is attacked by something.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the thing we are attacked by
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 if we cannot attack them, 1 if we can
.EP

.SI 3
* %^BOLD%^attack_ob%^RESET%^
.EI
.SI 5
int attack_ob(object thing)
.EI
.SP 7 5

This method is called to make us attack someone else.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the person to attack
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 if we cannot attack them, 1 if we can
.EP

.SI 3
* %^BOLD%^death_helper%^RESET%^
.EI
.SI 5
mixed * death_helper(object thing, int death)
.EI
.SP 7 5

This method deals with any cute messages you want to print when
something dies or, cute things you want to do (like not dieng
at all).  It handles the alignment shift due to the killing of
this npc as well.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the thing which killed us
.EP

.SI 3
* %^BOLD%^do_death%^RESET%^
.EI
.SI 5
varargs object do_death(object thing, object weapon, string attack)
.EI
.SP 7 5

This does the actual death and co ordinates the death into a well
ordered feeding frenzy.  This method creates the actual corpse itself.
If the property "dead" is set on the object no corpse will be
created, or if the second_life() function called on the object
returns a non-zero value the corpse will not be created.


This method calls the second_life() function on the current object, if this returns 1 it must handle all the the death code itself. This is used in the player code to override the death code.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the thing which killed us
.EP
.SP 9 5
weapon - the weapon (sword,claw,etc) object that attacked and killed us
.EP
.SP 9 5
attack - the actual attack that killed us
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the corpse, or 0 if no more action is to be taken
.EP

.SI 3
* %^BOLD%^dont_attack_me%^RESET%^
.EI
.SI 5
int dont_attack_me()
.EI
.SP 7 5

This function is to be shadowed, if you want
the creature to be unattackable.

.EP

.SI 3
* %^BOLD%^fight_in_progress%^RESET%^
.EI
.SI 5
void fight_in_progress(object thing)
.EI
.SP 7 5

This method is called when there is a fight in progress.  It will
propogate the event onto all the objects in the room.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the person fighting

.EP

.SI 3
* %^BOLD%^is_fighting%^RESET%^
.EI
.SI 5
int is_fighting(object ob)
.EI
.SP 7 5

This method determines whether or not the object is fighting another
object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object being tested
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if it is in combat, 0 if it is not.
.EP

.SI 3
* %^BOLD%^make_corpse%^RESET%^
.EI
.SI 5
object make_corpse()
.EI
.SP 7 5

This method will create a corpse for the living object when it
eventually dies.  Of old age of course, no one would die of having
a sword rammed through them.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the created corpse object

.EP

.SI 3
* %^BOLD%^query_attackables%^RESET%^
.EI
.SI 5
object * query_attackables()
.EI
.SP 7 5

This method recalculates the hunting structure, and returns an array
of people we are in the same room with, and who we can attack.
If we are on a horse in a room with someone, we start attacking them
as well.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
returns an array of people on our attacker list that are in
the room with us

.EP

.SI 3
* %^BOLD%^query_attacker%^RESET%^
.EI
.SI 5
object query_attacker()
.EI

.SI 3
* %^BOLD%^query_attacker_list%^RESET%^
.EI
.SI 5
object * query_attacker_list()
.EI
.SP 7 5

This method returns the array of creatures we are fighting.
It lists all those who are not currently in the room with us as well.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the attacker list
.EP

.SI 3
* %^BOLD%^query_combat_attitude%^RESET%^
.EI
.SI 5
string query_combat_attitude()
.EI
.SP 7 5

This returns the current attitude to use in combat.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current combat attitude
.EP

.SI 3
* %^BOLD%^query_combat_focus%^RESET%^
.EI
.SI 5
string query_combat_focus()
.EI
.SP 7 5

This returns the bodypart we are currently focusing on.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the bodypart we are currently focusing on
.EP

.SI 3
* %^BOLD%^query_combat_parry%^RESET%^
.EI
.SI 5
string query_combat_parry()
.EI
.SP 7 5

This returns the current parry to use in combat.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current combat parry
.EP

.SI 3
* %^BOLD%^query_combat_response%^RESET%^
.EI
.SI 5
string query_combat_response()
.EI
.SP 7 5

This returns the current reponse to use in combat.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current combat response
.EP

.SI 3
* %^BOLD%^query_concentrating%^RESET%^
.EI
.SI 5
object query_concentrating()
.EI
.SP 7 5

This method returns the creature we are currently concentrating on.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the creature that is being concentrated on
.EP

.SI 3
* %^BOLD%^query_defenders%^RESET%^
.EI
.SI 5
object * query_defenders()
.EI
.SP 7 5

This method returns the current array of defenders on the living
object.  This is the people who are defending us, so if we are hit
make them attack the hitter and parry for us.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current defenders array
.EP

.SI 3
* %^BOLD%^query_fighting%^RESET%^
.EI
.SI 5
int query_fighting()
.EI
.SP 7 5

This method returns true if the object is fighting
someone in the room.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
return - 1 if the creature is fighting someone
in the room, 0 if not
.EP

.SI 3
* %^BOLD%^query_in_combat%^RESET%^
.EI
.SI 5
int query_in_combat()
.EI
.SP 7 5

This method returns whether or not we are in combat.
This is only to be used internally by the combat engine.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if we are in combat, 0 if not

.EP

.SI 3
* %^BOLD%^query_protectors%^RESET%^
.EI
.SI 5
object * query_protectors()
.EI
.SP 7 5

This method returns the current array of protectors on the living
object.  This is the people who are protecting us, so if we are hit
make them attack the hitter.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current protectors array
.EP

.SI 3
* %^BOLD%^query_raw_combat_attitude%^RESET%^
.EI
.SI 5
int query_raw_combat_attitude()
.EI
.SP 7 5

This returns the current attitude to use in combat as a raw int.
-2 and -1 for defensive, 0 for neutral and 1 and 2 for offensive attitudes.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current combat attitude
.EP

.SI 3
* %^BOLD%^query_special_manoeuvre%^RESET%^
.EI
.SI 5
int query_special_manoeuvre()
.EI

.SI 3
* %^BOLD%^query_tactics%^RESET%^
.EI
.SI 5
class combat_tactics query_tactics()
.EI
.SP 7 5

This method returns the current tactics set.
This method will return a class with four elements in it:

.EP
.SP 7 5
({
.EP
.SP 7 5
   attitude,
.EP
.SP 7 5
   response,
.EP
.SP 7 5
   parry,
.EP
.SP 7 5
   unarmed_parry,
.EP
.SP 7 5
})
.EP
.SP 7 5
The first element is an int, signifying the attitude of the player, the secon two are strings, which correspond to the values as set in the tactics player help file.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current tactics array set
.EP

.SI 3
* %^BOLD%^query_target%^RESET%^
.EI
.SI 5
object query_target()
.EI

.SI 3
* %^BOLD%^query_unarmed_parry%^RESET%^
.EI
.SI 5
int query_unarmed_parry()
.EI
.SP 7 5

This returns the current unarmed parry to use in combat.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current combat unarmed parry
.EP

.SI 3
* %^BOLD%^query_weapon%^RESET%^
.EI
.SI 5
object query_weapon()
.EI

.SI 3
* %^BOLD%^register_special_attack%^RESET%^
.EI
.SI 5
void register_special_attack(int type, int flags, string ob, string fun, mixed data, int expire)
.EI
.SP 7 5

This method adds a special attack callback into our special attack queue.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the type of the special attack
.EP
.SP 9 5
flags - the stage flags for the special attack
.EP
.SP 9 5
ob - the name of the callback object
.EP
.SP 9 5
fun - the name of the callback function
.EP
.SP 9 5
data - any data specific to the special attack
.EP
.SP 9 5
expire - the time after which this special should expire

.EP

.SI 3
* %^BOLD%^remove_defender%^RESET%^
.EI
.SI 5
int remove_defender(object thing)
.EI
.SP 7 5

This method will remove a defender from the current list of defenders
for this living object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the defender to remove
.EP

.SI 3
* %^BOLD%^remove_protector%^RESET%^
.EI
.SI 5
int remove_protector(object thing)
.EI
.SP 7 5

This method will remove a protector from the current list of protectors
for this living object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the protector to remove
.EP

.SI 3
* %^BOLD%^reset_defenders%^RESET%^
.EI
.SI 5
void reset_defenders()
.EI
.SP 7 5

This method resets the defenders array back to being nothing.

.EP

.SI 3
* %^BOLD%^reset_protectors%^RESET%^
.EI
.SI 5
void reset_protectors()
.EI
.SP 7 5

This method resets the protector array back to being nothing.

.EP

.SI 3
* %^BOLD%^reset_special_manoeuvre%^RESET%^
.EI
.SI 5
void reset_special_manoeuvre()
.EI

.SI 3
* %^BOLD%^set_attacker%^RESET%^
.EI
.SI 5
void set_attacker(object thing)
.EI

.SI 3
* %^BOLD%^set_combat_attitude%^RESET%^
.EI
.SI 5
void set_combat_attitude(string attitude)
.EI
.SP 7 5

This sets the current attitude to use in combat.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
attitude - the new combat attitude
.EP

.SI 3
* %^BOLD%^set_combat_focus%^RESET%^
.EI
.SI 5
void set_combat_focus(string str)
.EI
.SP 7 5

This sets the bodypart to focus on in combat.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the new bodypart to focus on
.EP

.SI 3
* %^BOLD%^set_combat_parry%^RESET%^
.EI
.SI 5
void set_combat_parry(string parry)
.EI
.SP 7 5

This sets the current parry to use in combat.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
parry - the new combat parry
.EP

.SI 3
* %^BOLD%^set_combat_response%^RESET%^
.EI
.SI 5
void set_combat_response(string response)
.EI
.SP 7 5

This sets the current reponse to use in combat.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
response - the new combat response
.EP

.SI 3
* %^BOLD%^set_special_manoeuvre%^RESET%^
.EI
.SI 5
void set_special_manoeuvre()
.EI

.SI 3
* %^BOLD%^set_target%^RESET%^
.EI
.SI 5
void set_target(object thing)
.EI

.SI 3
* %^BOLD%^set_unarmed_parry%^RESET%^
.EI
.SI 5
void set_unarmed_parry(int parry)
.EI
.SP 7 5

This sets the current unarmed parry to use in combat.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
parry - the new unarmed parry flag
.EP

.SI 3
* %^BOLD%^set_weapon%^RESET%^
.EI
.SI 5
void set_weapon(object thing)
.EI

.SI 3
* %^BOLD%^special_attack%^RESET%^
.EI
.SI 5
class special_attack_data special_attack(int type, class attack_data att)
.EI
.SP 7 5

This method is used by the combat handler and returns a class with
special attack data, if there is one in the queue that fits the
specified arguments.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the type of the special attack
.EP
.SP 9 5
att - the attack class
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a class with special attack data or 0

.EP

.SI 3
* %^BOLD%^stop_all_fight%^RESET%^
.EI
.SI 5
void stop_all_fight()
.EI
.SP 7 5

This method stops the creature from attacking everyone
on its attacker list.
.EP

.SI 3
* %^BOLD%^stop_fight%^RESET%^
.EI
.SI 5
void stop_fight(object thing)
.EI
.SP 7 5

This method stops the creature from attacking another creature.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the creature to stop attacking
.EP

.SI 3
* %^BOLD%^stop_hunting%^RESET%^
.EI
.SI 5
void stop_hunting()
.EI
.SP 7 5

This method stops us hunting people on our hunting list.

.EP


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^start_combat%^RESET%^
.EI
.SI 5
void start_combat(object thing)
.EI
.SP 7 5

This method makes us actually attack someone.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
thing - the creature we want to attack

.EP


