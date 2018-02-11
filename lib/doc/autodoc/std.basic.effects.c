.DT
effects.c
$MUDNAME$ autodoc help
effects.c

.SH Description
.SP 5 5

This is the basic effects module.
Extracted from Ember's living effects code by Deutha.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects

.EP
.SH Change history
.SP 5 5
4-6-1997, Turrican
To use arrays of classes, and to allow function pointers.

17-10-1997 Olorin
Fixed a bug then adding an effect in the end() function of
another effect.

03-09-2002 Sandoz
Changed to get shadow objects from the shadows handler.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/effect.h.
.EP

.SH Classes

.SI 3
* %^BOLD%^effect_event%^RESET%^
class effect_event {
int inctime;
mixed func;
int eff_ob_num;
mixed interval;
int flags;
}

.EI

.SI 3
* %^BOLD%^effect_shadow%^RESET%^
class effect_shadow {
object shad_ob;
int idnum;
}

.EI


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_effect%^RESET%^
.EI
.SI 5
void add_effect(string eff, mixed arg)
.EI
.SP 7 5

This method adds an effect onto the object.  The arg is passed
directly onto the function 'beginning' on the effect object.
If the result is non-zero then the return value of the begining
function is used instead of the arg and stored away.  If an
effect of the same type is already on the object then the
function 'merge_effect' will be called on the effect object.
If it returns a non-zero value then the arg for the initial
effect will be updated to the new value, otherwise both effects
will run with different arguments.
.EP

.SI 3
* %^BOLD%^affected_object%^RESET%^
.EI
.SI 5
object affected_object()
.EI
.SP 7 5

This method returns the outermost shadow on this object.
This is useful for making sure functions get called right
through the shadow chain.  If there are no objects being
shadows, this_object() is returned.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the outermost shadow object

.EP

.SI 3
* %^BOLD%^arg_of%^RESET%^
.EI
.SI 5
mixed arg_of(int enum)
.EI
.SP 7 5

This method returns the current arguments associated with the
given effect number.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
enum - the effect number
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the arguments associated with the effect
.EP

.SI 3
* %^BOLD%^delete_effect%^RESET%^
.EI
.SI 5
void delete_effect(int i)
.EI
.SP 7 5

This removes an effect from the player.  It uses the enum as
returned from sid to enum.  This is the number you see in
the stat of the object next to the effect.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
i - the enum to remove
.EP

.SI 3
* %^BOLD%^eff_of%^RESET%^
.EI
.SI 5
string eff_of(int enum)
.EI
.SP 7 5

This method returns the effect object for the given effect number.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
enum - the effect number
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the effect object
.EP

.SI 3
* %^BOLD%^effect_freeze%^RESET%^
.EI
.SI 5
void effect_freeze()
.EI
.SP 7 5

This method freezes all the current effects so that they do
not continue to be processed.  Basicly it removes the call_out
for the effect_timer().  It also ensures the intrval for the
immediately pending effect
is correct.
.EP

.SI 3
* %^BOLD%^effect_unfreeze%^RESET%^
.EI
.SI 5
void effect_unfreeze()
.EI
.SP 7 5

This method restarts the internal call_out.
.EP

.SI 3
* %^BOLD%^effects_matching%^RESET%^
.EI
.SI 5
int * effects_matching(string eff)
.EI
.SP 7 5

This method returns an array of effects matching the
classification.  The start part of the classification is
used to match, so passing "npc." into this function will
match all the effects which modify how an npc functions.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
eff - the classification to match
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the array of enums corresponding to the effects
.EP

.SI 3
* %^BOLD%^effects_thru_death%^RESET%^
.EI
.SI 5
void effects_thru_death()
.EI
.SP 7 5

This method removes all the effects as we die.  It calls the function
survive_death() on the effect objects themselves to determine if
they should be kept when the living dies.

.EP

.SI 3
* %^BOLD%^enum_to_sid%^RESET%^
.EI
.SI 5
int enum_to_sid(int enum)
.EI
.SP 7 5

This method turns an effect number into an effect id.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
enum - the effect number
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the effect id

.EP

.SI 3
* %^BOLD%^expected_tt%^RESET%^
.EI
.SI 5
int expected_tt(int flag, int new_enum)
.EI
.SP 7 5

This method returns the time until any EE_REMOVE effect
is expected to occur.  It will return -1 if no remove event
is scheduled.  If the flag is not set to true, the the
current enum is checked, otherwise the new_enum is checked.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
flag - if true, use new_enum not current_enum
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the time until the remove event will occur,
or -1 if none is scheduled
.EP

.SI 3
* %^BOLD%^query_current_effect_enum%^RESET%^
.EI
.SI 5
int query_current_effect_enum()
.EI
.SP 7 5

This method returns the current enum.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current enum

.EP

.SI 3
* %^BOLD%^query_logging_effects%^RESET%^
.EI
.SI 5
int query_logging_effects()
.EI

.SI 3
* %^BOLD%^reset_effects%^RESET%^
.EI
.SI 5
void reset_effects()
.EI
.SP 7 5

This method removes all the current effects off the object
and sets everything back to the initial state.
.EP

.SI 3
* %^BOLD%^set_arg_of%^RESET%^
.EI
.SI 5
void set_arg_of(int enum, mixed newarg)
.EI
.SP 7 5

This sets the argument of the given effect to a new value.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
enum - the effect number to change
.EP
.SP 9 5
newarg - the new argument value
.EP

.SI 3
* %^BOLD%^set_logging_effects%^RESET%^
.EI
.SI 5
void set_logging_effects(int i)
.EI

.SI 3
* %^BOLD%^sid_to_enum%^RESET%^
.EI
.SI 5
int sid_to_enum(int sid)
.EI
.SP 7 5

This method returns the effect number for the given effect id.  The
effect number is an internal nhandle used by delete_effect()
arg_of() set_arg_of() functions.  "id" is passed into the
begining/end etc functions on the effect object.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
sid - the effect id
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the effect number
.EP

.SI 3
* %^BOLD%^submit_ee%^RESET%^
.EI
.SI 5
void submit_ee(mixed fun, mixed interval, int flags)
.EI
.SP 7 5

This submits an effect event schedule.  It will call "function name" in
your effect object after the interval specified in interval_spec, with
behaviour modified by flags.
interval_spec can be one of:

.EP
.SP 7 5
n 
.EP
.SP 10 5
time in seconds 
.EP
.SP 7 5
({ m, n }) 
.EP
.SP 10 5
minimum time m seconds, maximum time n seconds, simple random     distribution 
.EP
.SP 7 5
({ m, n, r }) 
.EP
.SP 10 5
as for the ({ m, n }) case, except the random factor is effectively     "rolled" r times ... the higher r is, the more likely the interval     is to be close to (m + n)/2. 
.EP
.SP 7 5
If the interval is a negative figure, any functions with the     specified function name will be removed from the queue.     This is useful in removing unwanted things from the effects queue. flags may be: 
.EP
.SP 7 5
EE_REMOVE 
.EP
.SP 10 5
remove the effect from the player after the function call 
.EP
.SP 7 5
EE_CONTINUOUS 
.EP
.SP 10 5
do it repeatedly.  Default (EE_ONCE) is only do it once. 
.EP
.SP 7 5
EE_ONCE 
.EP
.SP 10 5
do it once 
.EP
.SP 7 5
These are defined in /include/effect.h 

Only one EE_REMOVE can be in place at a time.  Subsequent EE_REMOVEs will wipe previous ones. 

NB:  submit_ee can ONLY be called from the effect object itself in the course of a beginning/handler/end call, or from the effect shadow.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
fun - the function to call
.EP
.SP 9 5
interval - the interval specifier
.EP
.SP 9 5
flags - the flags for the event

.EP

.SI 3
* %^BOLD%^submit_ee2%^RESET%^
.EI
.SI 5
void submit_ee2(int enum, mixed fun, mixed interval, int flags)
.EI
.SP 7 5

This submits an effect event for a specific effect.
Apart from this it is the same as submit_ee()
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
enum - the enum of the effecrt
.EP
.SP 9 5
fun - the function to call
.EP
.SP 9 5
interval - the interval specifier
.EP
.SP 9 5
flags - the flagds associated with the event

.EP


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^set_eeq%^RESET%^
.EI
.SI 5
void set_eeq(mixed args)
.EI
.SP 7 5

This method is used to force the effects setup in the object to be a
specified value.  This is used in the effects effect which sets up
effects on someone using a shadow.  This should only be used on startup.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
args - the effects array to overwrite the old one with

.EP

.SI 3
* %^BOLD%^set_effs%^RESET%^
.EI
.SI 5
void set_effs(mixed args)
.EI
.SP 7 5

This method is used to force the effects setup in the object to be a
specified value.  This is used in the effects effect which sets up
effects on someone using a shadow.  This should only be used on startup.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
args - the effects array to overwrite the old one with

.EP


