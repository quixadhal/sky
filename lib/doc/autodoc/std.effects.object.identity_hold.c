.DT
identity_hold.c
$MUDNAME$ autodoc help
identity_hold.c

.SH Description
.SP 5 5

This is the effect skelton docs.  This effect
has a classification of "object.identify".


The arguement is a mapping which has the "keep" or the "identity" bit set.  If either of these are set then that bit of the objects definition is overwritten.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
help::effects

.EP
.SH Includes
.SP 5 5
This class includes the following files /std/effects/object/path.h and /include/effect.h.
.EP

.SH Classes

.SI 3
* %^BOLD%^special_stuff%^RESET%^
class special_stuff {
int keep;
string identity;
}

.EI


