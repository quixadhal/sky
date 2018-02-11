.DT
corpse.c
$MUDNAME$ autodoc help
corpse.c

.SH Description
.SP 5 5

This method will allow all sorts of modifications to a corpse once it has
been created, based on the weapon or attack used for the killing stroke.
.EP
.SP 10 5

.EP



.SH See also
.SP 5 5
death_helper(), make_corpse() and do_death()

.EP
.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^alter_corpse%^RESET%^
.EI
.SI 5
int alter_corpse(object corpse, object weapon, string attack)
.EI


