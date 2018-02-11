.DT
gossip.c
$MUDNAME$ autodoc help
gossip.c

.SH Description
.SP 5 5

This is the gossip effect for those gossiping beggars, etc.

To use it, simply add it to the thingy you want to gossip...
It should then call do_gossip_say(str); to do the gossping.
'str' is the pattern to use, where the string $name$ is replaced
with the name of the person who gossiped and $mess$ is replaced
with the message they said.

You can do this with the standard chat strings by using
"#do_gossip_say:$name$ said: $mess$" or whatever instead
of a regular chat.

The single argument this effect takes is the chance of it
getting the gossip from the gossip handler, instead of saying
things what they actually heard themselves.  The chance is one
in the given number, so the higher the number the less the
chance.  If no chance argument is given, it will default to 4.

.EP
.SP 10 5

.EP

.SH Includes
.SP 5 5
This class includes the following files /std/effects/npc/path.h.
.EP

