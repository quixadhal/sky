.DT
splinted_arm.c
$MUDNAME$ autodoc help
splinted_arm.c

.SH Description
.SP 5 5

This is the effect skelton docs.  This effect
has a classification of "body.damage.arm.splinted".


 To add a splint to a limb, pass add_effect() ({ limb, time })   limb: (string) "left" or "right"   time: (int) (optional) seconds until limb is healed.  Defaults         to 45 minutes (!)  To heal a limb prematurely, pass add_effect() ({ limb, time, 1 })   limb: (string) "left" or "right"   time: (int) seconds until limb is healed - usually 0  NB: healing a broken limb does not remove the splint effect from     the patient.  To remove a splint, pass add_effect ({ limb, time, 2 })   limb: (string) "left" or "right"   time: (int) seconds until limb is healed - usually 0  NB: removing a splint from an unhealed limb adds the broken arm     effect to the patient.  The following args are returned by beginning and merge:   [0] left arm splinted  ?  1 : 0   [1] left arm healed    ?  1 : 0   [2] right arm splinted ?  1 : 0   [3] right arm healed   ?  1 : 0  NB: the splint effect is indefinite and is not removed when the     limb underneath heals.  

This effect has a shadow associated with it, but it isn't used. :)
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects

.EP
.SH Includes
.SP 5 5
This class includes the following files /include/effect.h.
.EP

