/*  -*- LPC -*-  */
/*
 * $Locker:  $
 * $Id: drunk.c,v 1.1 1998/01/06 04:13:03 ceres Exp $
 * $Log: drunk.c,v $
 * Revision 1.1  1998/01/06 04:13:03  ceres
 * Initial revision
 * 
*/
/**
 * This is the effect skelton docs.  This effect
 * has a classification of "fighting.warcry".
 * <p>
 * Describe the arguments in here.
 * @classification fighting.warcry
 * @see help::effects
 */
inherit "/std/effects/basic";
/* ok, reduces drunkenness */

/*
 * NB: This potion is intended to cure equiv of 1 scumble for 'standard' coord
 *     and standard dose (100ml)
 */

void create() {
   set_boundaries(
      ({ 1, 5 }), ({ 10, 20 }) );
}

int query_pass_through(int *coord) {
   return 30;
}

mixed *query_attrs(int *coord) {
   int total;
   total = distance_within_region(coord) * 100 / 17;
   
   return ({ 30, 90, 
/* NAME */ ({ }),
/* COLS */ ({ ({ "orange", total }) }),
/* SMEL */ ({ ({ "citrus", total }), ({ "smoke", total / 2 }) }),
/* FLAV */ ({ ({ "orange", total }), ({ "ashes", total / 2 }) })
   });
}

void action_drunk(object ob, int *coord, int quantity) {
   int total, heal;
   string desc;
   int old_vol;
   
   total = distance_within_region(coord) * 100 / 17;
   
   heal = (400 + random(200)) * total * quantity / (8 * 100);
   old_vol = ob->query_volume(0);
   if (heal > old_vol) heal = old_vol;
   ob->adjust_volume(0,-heal);

   switch (heal) {
   case 0..100:
      desc = "ever so slightly less woozey";
      break;
   case 101..200:
      desc = "slightly less woozey";
      break;
   case 201..300:
      desc = "noticeably less drunk";
      break;
   case 301..400:
      desc = "significantly less drunk";
      break;
   case 401..600:
      desc = "much less drunk";
      break;
   case 601..800:
      desc = "a great deal less drunk";
      break;
   default:
/* this effect is not intended to heal > 800 drunk points */
      desc = "incredibly less drunk";
      break;
   }
   tell_object(ob, "You feel " + desc + ".\n");
   heal = ob->query_volume(0);
   if (heal > 1000) tell_object(ob, "You are still very drunk though.\n");
   else if (heal > 500) tell_object(ob, "You are still drunk though.\n");
   else if (heal > 300) tell_object(ob, "You are still somewhat drunk though.\n");
   else if (heal > 150) tell_object(ob, "You are still slightly drunk though.\n");
   else if (heal) tell_object(ob, "You still feel a touch drunk though.\n");
}

void action_smell(object ob, int *coord, int quantity) {
   tell_object(ob, "Your nose tingles pleasantly.\n");
}
