/*  -*- LPC -*-  */
/*
 * $Locker:  $
 * $Id: green.c,v 1.1 1998/01/06 04:21:18 ceres Exp $
 * $Log: green.c,v $
 * Revision 1.1  1998/01/06 04:21:18  ceres
 * Initial revision
 * 
*/
/**
 * This is the effect skelton docs.  This effect
 * has a classification of "poison.constitution".
 * <p>
 * Describe the arguments in here.
 * @classification poison.constitution
 * @see help::effects
 */
inherit "/std/effects/basic";

/* this is the low level background poison */

void create(){
   set_boundaries( ({ -50000, -50000 }), ({ 50000, 50000 }) );
}

int backdrop() { return 1; }

mixed *query_attrs(int *coord)
{
   int total;
   
   total = (coord[0] < 0) ? -coord[0] : coord[0];
   total += (coord[1] < 0) ? -coord[1] : coord[1];
   return ({ 5, 95, ({ }), ({ ({ "icky green", (total < 100) ? total : 100 }) }),
             ({ ({ "bile", (total < 100) ? total : 100 }) }), 
             ({ ({ "bile", (total < 100) ? total : 100 }) }) });
}

int *query_coordinate()
{
   return ({ -20, -20 });  /* hopefully some decent value.  If it gets masked, then we'll have to move it won't we? */
}

void action_drunk(object ob, int *coord, int quantity) {
   int total;
   
   if (quantity < 5) { /* taste amount */
      tell_object(ob, "You feel quite ill briefly.\n");
      tell_room(environment(ob), 
        ob->one_short() + " looks green for a moment.\n", ob);
      return;
   }
   /* I want to add a long-term effect on to the player ... */
   tell_object(ob, "You feel really really ill.\n");
   tell_object(ob, "You are racked with spasms of vomiting.\n");
   tell_room(environment(ob),
         ob->one_short() + " looks incredibly ill, and vomits violently.\n", ob);
   total = (coord[0] < 0) ? -coord[0] : coord[0];
   total += (coord[1] < 0) ? -coord[1] : coord[1];
   ob->adjust_hp(-random(total * quantity / 100));
   return;
}
