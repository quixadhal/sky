/**
 * room.c - milestone implementation of /std/room.
 */

inherit "/std/room";

// My apologies for including .c files.  If anyone else has a better way,
// I'm open to suggestions (the main problem is I need to mask
// query_dest_other() in the base room).

#include "/std/room/inherit/topography/milestone.c"

void create() {

  do_setup++;
  ::create();
  do_setup--;

  if ( !do_setup ) {
    TO->setup();
    TO->reset();
  }

  // This is a dummy exit so we can print a helpful message
  add_exit(motion_verb, "interroom", "hidden");
  call_out("setup_milestone", 0);
} /* create() */
