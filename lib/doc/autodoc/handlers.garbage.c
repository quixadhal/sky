.DT
garbage.c
$MUDNAME$ autodoc help
garbage.c

.SH Description
.SP 5 5

handler to remove junk lost in null-space from the mud
so they wont waste memory, and (if they have a heart_beat)
cpu anymore.
.EP
.SP 10 5

.EP

.SH Change history
.SP 5 5
Sandoz, 09/09/2002
Changed to not consider doors/chatters with no my_room junk.
The refs count should still get those.

Sandoz, 16/10/2002
Added a new cleanup scheme, that will hold back on heaps of rooms
calling out real_clean at the same time, and that will call
reclaim_objects() on more sensible times.

.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^get_junk%^RESET%^
.EI
.SI 5
int get_junk(object ob)
.EI
.SP 7 5

Filter function for the objects() efun.  We only want clones without
references from other objects that are not shadowing stuff,
not in a room and are not rooms themselves.

.EP


