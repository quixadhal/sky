/**
 * Hours command.
 * <p>
 * This command displays which players have been connected to the MUD for a 
 * certain number of hours.  
 * <p>
 * @author Taffyd
 * @started 27/08/99 3:16AM
 * @finished 27/08/99 3:43AM
 */

inherit COMMAND_BASE;

/** @ignore yes */
int cmd( int time ) {
    mapping people;
    int seconds, num;
    string mess;
       
    if ( !time ) {
        people = unique_mapping( filter( users(), 
            (: interactive( $1 ) && !$1->query_login_ob() :) ),
            (: ( (time() - $1->query_last_log_on() ) / 3600 ) :) );
        
        mess = "";
        
        foreach( num in sort_array( keys( people ), -1 ) ) {
            if ( num > 0 ) {
                mess += "Online for " + query_num( num ) + 
                    ( num == 1 ? " hour: \n" : " hours: \n" ) +
                    query_multiple_short( people[ num ] ) + ".\n\n";
            }
        }
        
        tell_object( this_player(), "$P$Online time$P$" + 
            mess );
    }
    else {
        seconds = time * 60 * 60;
        
        people = allocate_mapping( users(), (: $(time()) -  $1->query_last_log_on() :) );        
        people = filter( people, (: interactive($1) && !$1->query_login_ob() 
            && $2 > $(seconds) :) );
        
        if ( sizeof( people ) ) {
            tell_object( this_player(), "The following people have been "
                "connected for more than " + query_num( time ) + 
                ( time % 3600 < 2 ? " hour: " : " hours: " ) +
                query_multiple_short( keys( people ) ) + ".\n" );
        }
        else {
            tell_object( this_player(), "No one has been connected for that "
                "long.\n" );
        }
    }
        
    return 1;
} /* cmd() */


/** @ignore yes */
mixed *query_patterns() {
    return ({ "<number>", (: cmd($4[0]) :),
              "", (: cmd(0) :) });
} /* query_patterns() */
