// Broken ribcage curse
// Windy, May 2001

#include <effect.h>
#define CURE 340 // The bonus at which curing will certainly succeed.

string query_classification() { return "disease.injury.broken.ribcage"; }

int *beginning( object player, int time ) {
    int *arg;

    arg = ({ time, 0 });
    tell_object( player, "You exhale sharply and begin gasping for breath as "+
      "your ribcage is shattered!\n");
    tell_room( ENV( player ), player -> the_short() +" exhales sharply and begins "+
      "gasping for breath as "+ player -> query_possessive() +" ribcage is "+
      "shattered!\n", player );
    player->add_extra_look( TO );
    player->adjust_bonus_str( -1 );
    player->adjust_bonus_dex( -1 );
    player->submit_ee( 0, arg, EE_REMOVE );
    return arg;
} /* beginning() */

int *restart( object player, int *arg ) {
    player->add_extra_look( TO );
    player->adjust_bonus_str( -1 );
    player->adjust_bonus_dex( -1 );
    arg [ 0 ] = player->expected_tt();
    return arg;
} /* restart() */

int *merge_effect( object target, int *old_arg, int *new_arg ) {
    int old_time, new_time;

    old_time = old_arg [ 0 ];
    new_time = new_arg [ 0 ];
    old_time = target->expected_tt() + new_time;
    old_arg [ 0 ] = old_time;
    target->add_extra_look( TO );
    target->submit_ee( 0, old_arg, EE_REMOVE );
    return old_arg;
} /* merge_effect() */

int *test_remove( object player, int *arg, int enum, int bonus ) {
    int old_time, new_time, percent;

    old_time = player->expected_tt(1, enum);
    if ( old_time < bonus || bonus >= CURE ) {
        arg = ({ 0, 1 });
        player->set_arg_of( enum, arg );
        player->submit_ee2( enum, 0, 0, EE_REMOVE );
        return arg;
    }
    percent = ( 100 * bonus ) / CURE;
    new_time = 10 + old_time - ( ( old_time * percent ) / 100 );
    arg [ 0 ] = new_time;
    player->set_arg_of( enum, arg );
    player->submit_ee2( enum, 0, arg, EE_REMOVE );
    return arg;
} /* test_remove() */

void end( object player, int *arg ) {
    player->remove_extra_look( TO );
    player->adjust_bonus_str( 1 );
    player->adjust_bonus_dex( 1 );
    if( player->query_property( "dead" ) ) return;

    if( arg [ 1 ] ) {
        tell_object( player, "Your broken ribcage is rapidly healed.\n");
        tell_room( ENV( player ), player->the_short() +"'s broken ribcage is "
          "rapidly healed.\n", player );
        return;
    }
    tell_object( player, "Your broken ribcage heals itself.\n");
    tell_room( ENV( player ), player->the_short() +"'s broken ribcage heals "+
      "itself.\n", player );
} /* end() */

string extra_look( object player ) {
    return CAP( player->HE ) +" has a shattered ribcage.\n";
} /* extra_look() */
