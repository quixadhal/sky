inherit "/std/races/base";

void create() {
   do_setup++;
   ::create();
   do_setup--;

   set_desc( "your standard tree.  Shouldn't be used since this is a base "
      "race" );

   bits = ({
      "trunk", "trunk", ({ 0, 1000, 0 }),
      "branch", "branch", ({ 0, 20, ({"/std/bit", 20}) }),
//      "twig", "twig", ({ "branch", 1, ({"/std/bit", 5}) }),
// I wanted to have 5 twigs per branch, but the bit handler won't allow
// me to do this for some reason.
      "root", "root", ({ 0, 20, ({"/std/bit", 10}) })
   });

   inedible = ({ "trunk", "branch", "root" });
   unrottable = ({ });
   set_skin( "bark" );

   if( !do_setup )
      this_object()->setup();
} /* create() */
