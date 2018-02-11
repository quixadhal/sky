.DT
magic_spell.c
$MUDNAME$ autodoc help
magic_spell.c

.SH Description
.SP 5 5

*sob* This is, to my knowledge, the 4th complete or major re-write
of the magic_spell object that I have done. And this time, it's
starting with nothing due to formatting this machine. *sigh*
This one better damn well work RIGHT.
.EP
.SP 10 5


Written by Shiannar
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/obj_parser.h, /include/tasks.h, /include/effect.h and /include/magic.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^adjust_components%^RESET%^
.EI
.SI 5
mixed * adjust_components(object caster, int stage, mixed * quant, mixed * args)
.EI
.SP 7 5

This function is used to adjust the quantities of components consumed by
a spell. Overload it to adjust them.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
caster - the person casting the spell
.EP
.SP 9 5
stage - the stage currently being executed
.EP
.SP 9 5
quant - mapping containing the components for that stage
.EP
.SP 9 5
args - the args for the spell
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
mapping showing the correct components for that stage.

.EP

.SI 3
* %^BOLD%^check_args%^RESET%^
.EI
.SI 5
mixed * check_args(object caster, mixed * args)
.EI
.SP 7 5

Checks to see if valid arguments for the spell have
been entered. Should be overloaded by inheriting
objects to perform proper checking.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
The new array of arguments, or 0 for failure due to incorrect args

.EP

.SI 3
* %^BOLD%^check_components%^RESET%^
.EI
.SI 5
int check_components(object caster, int stage, mixed * args)
.EI
.SP 7 5

check_components is used internally. Should not be overloaded.
To adjust quantities of components dynamically, see adjust_components()

.EP

.SI 3
* %^BOLD%^check_else%^RESET%^
.EI
.SI 5
int check_else(object caster, mixed * args)
.EI
.SP 7 5

Checks to see if the spell should fail due to any other reasons.
Suppresses error messages, thus custom ones must be provided
by inheriting objects. Should be overloaded if needed.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
0 to halt the spell, 1 to continue

.EP

.SI 3
* %^BOLD%^check_targets%^RESET%^
.EI
.SI 5
object * check_targets(object caster, object * targets)
.EI
.SP 7 5

Checks to see if all targets are valid. Called once per
spell stage, before the spell stage takes place. Should
be overloaded for any targeted spells.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
Object array of all new targets

.EP

.SI 3
* %^BOLD%^query_cast_spell%^RESET%^
.EI
.SI 5
int query_cast_spell(object caster, string arg, object * _targets, object * _using)
.EI
.SP 7 5

Checks to see if the spell can be cast, and if so, casts it.
Should never be called directly.

.EP

.SI 3
* %^BOLD%^query_gp%^RESET%^
.EI
.SI 5
int query_gp()
.EI
.SP 7 5

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
The raw gp cost to cast the spell.
.EP

.SI 3
* %^BOLD%^query_name%^RESET%^
.EI
.SI 5
string query_name()
.EI
.SP 7 5

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
The name of the spell

.EP

.SI 3
* %^BOLD%^query_ritual%^RESET%^
.EI
.SI 5
mixed * query_ritual()
.EI
.SP 7 5

Returns the ritual array.
.EP

.SI 3
* %^BOLD%^query_spell_type%^RESET%^
.EI
.SI 5
string query_spell_type()
.EI
.SP 7 5

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
String skill used primarily in spell.
.EP

.SI 3
* %^BOLD%^query_time%^RESET%^
.EI
.SI 5
int query_time()
.EI
.SP 7 5

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
The raw time in seconds per spell stage, I think.
.EP

.SI 3
* %^BOLD%^scale_difficulty%^RESET%^
.EI
.SI 5
float scale_difficulty(object caster, mixed * args)
.EI
.SP 7 5

Scaling function. Overload to scale difficulty of stages according
to any factors you may desire. For example, you could make a spell
more difficult if there are more targets.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
Float percentage of difficulty, default 1.0

.EP

.SI 3
* %^BOLD%^scale_gp_cost%^RESET%^
.EI
.SI 5
float scale_gp_cost(object caster, mixed * args)
.EI
.SP 7 5

Scaling function. Overload to scale GP cost to cast a spell
if so desired.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
Float percentage of GP cost, default 1.0

.EP

.SI 3
* %^BOLD%^scale_time%^RESET%^
.EI
.SI 5
float scale_time(object caster, mixed * args)
.EI
.SP 7 5

Scaling function. Overload to scale the time it takes to cast
a spell if you so desire.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
Float percentage of normal speed, for default see code.

.EP

.SI 3
* %^BOLD%^set_consumed%^RESET%^
.EI
.SI 5
void set_consumed(mapping cconsumed)
.EI
.SP 7 5

This function sets the items consumed by the spell, and the stages they're consumed in.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
cconsumed - the entire mapping of items consumed in the format:
([
  (int)stage : ([ (string)id of the item : ({ (string)short used for error message, (int)quantity used ]),
])
EG: ([
  1 : ({ "pinche$s$ of ForestGreenDust", "forest-green dust", 1 }),
  3 : ({ "metal shield$s$", "metal shield", 1 }),
])

.EP

.SI 3
* %^BOLD%^set_gp%^RESET%^
.EI
.SI 5
void set_gp(int gp)
.EI
.SP 7 5

.EP

.SI 3
* %^BOLD%^set_help%^RESET%^
.EI
.SI 5
void set_help(string _help)
.EI
.SP 7 5

.EP

.SI 3
* %^BOLD%^set_name%^RESET%^
.EI
.SI 5
void set_name(string nname)
.EI
.SP 7 5

.EP

.SI 3
* %^BOLD%^set_required%^RESET%^
.EI
.SI 5
void set_required(mapping rrequired)
.EI
.SP 7 5

This function sets the items required by the spell, and the stages they're required for.
NB: Items that are required are not consumed! Use set_consumed for items that will
be consumed by the spell. Furthermore, having items that conflict in both the consumed
and required mappings is a bad idea, no guarantees made about behaviour.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
rrequired - the entire mapping of items required in the format:
([
  (int)stage : ([ (string)id of the item : ({ (string)short used for error message, (int)quantity used ]),
])
EG: ([
  1 : ([ "pinche$s$ of ForestGreenDust" : ({ "forest-green dust", 1 }) ]),
  3 : ([ "metal shield$s$" : ({ "metal shield", 1 }) ]),
])

.EP

.SI 3
* %^BOLD%^set_ritual%^RESET%^
.EI
.SI 5
void set_ritual(mixed * _ritual)
.EI
.SP 7 5
Sets the ritual array up. The ritual array is the
array of steps that a spell will take.

.EP

.SI 3
* %^BOLD%^set_spell_type%^RESET%^
.EI
.SI 5
void set_spell_type(string n_type)
.EI
.SP 7 5

.EP

.SI 3
* %^BOLD%^set_time%^RESET%^
.EI
.SI 5
void set_time(int ttime)
.EI
.SP 7 5

.EP


