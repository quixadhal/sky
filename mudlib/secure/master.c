
#define ROOT     "Root"
#define SECURITY geteuid(PO)

#include <log.h>

#define SAVE_FILE  SECURE_DIR SAVE_DIR "/master"
#define READ_MASK  1
#define WRITE_MASK 2
#define GRANT_MASK 4
#define LOCK_MASK  8

private mapping permissions;
private nosave mapping snoop_list;
private nosave object unguarded_ob;

protected void create() {
    permissions = ([ ]);
    snoop_list = ([ ]);
    unguarded_ob = 0;
    if( !unguarded( (: restore_object, SAVE_FILE :) ) )
        if( !unguarded( (: restore_object, "/secure/config/master_fallback" :) ) )
            error("The master object couldn't restore its save file.\n");
} /* create() */

/** @ignore yes */
string query_name() { return "Root"; }

/*
 * This function is called every time a player connects.
 * input_to() can't be called from here.
 */
object connect( int port ) {
    object ob;

#ifdef __VERSION__
#define VERSION __VERSION__
#endif

    printf("LPmud version : %s on port %d.", VERSION, port );

    switch( port ) {
      case 7301:
        ob = clone_object(LOGIN_OBJ);
      break;
      default:
        ob = clone_object(LOGIN_OBJ);
    }

    ob->set_login_port(port);
    printf("\n");
    return ob;

} /* connect() */

/** @ignore yes */
int valid_load( string path, mixed euid, string func ) { return 1; }

/** @ignore yes */
string get_root_uid() { return ROOT; }

/** @ignore yes */
string get_bb_uid() { return "Room"; }

/** @ignore yes */
string *define_include_dirs() {
    return ({"/include/%s","/secure/include/%s"});
} /* define_include_dirs() */

/** @ignore yes */
int valid_trace() { return 1; }

/** @ignore yes */
void shut( int min ) { SHUTDOWN_H->init_shutdown( min, 1 ); }

/* This function comes from the Nightmare master object. */
varargs mixed apply_unguarded( function f, int local ) {
    object previous_unguarded;
    string err;
    mixed val;

    if( base_name(PO) != "/secure/simul_efun") {
        error("Illegal unguarded apply.");
        return 0;
    }

    previous_unguarded = unguarded_ob;

    if( local )
        unguarded_ob = master();
    else
        unguarded_ob = previous_object(1);

    err = catch( val = (mixed)(*f)() );

    unguarded_ob = previous_unguarded;

    if( err )
        error(err);

    return val;

} /* apply_unguarded() */

#include "/secure/master/permission.c"
#include "/secure/master/crash.c"
#include "/secure/master/create_dom_creator.c"
#include "/secure/master/creator_file.c"
#include "/secure/master/dest_env.c"
#include "/secure/master/ed_stuff.c"
#include "/secure/master/file_exists.c"
#include "/secure/master/logging.c"
#include "/secure/master/parse_command.c"
#include "/secure/master/preload.c"
#include "/secure/master/query_pl_level.c"
#include "/secure/master/simul_efun.c"
#include "/secure/master/snoop.c"
#include "/secure/master/valid_database.c"
#include "/secure/master/valid_exec.c"
#include "/secure/master/valid_hide.c"
#include "/secure/master/valid_ident.c"
#include "/secure/master/valid_link.c"
#include "/secure/master/valid_override.c"
#include "/secure/master/valid_read.c"
#include "/secure/master/valid_seteuid.c"
#include "/secure/master/valid_shadow.c"
#include "/secure/master/valid_socket.c"
#include "/secure/master/valid_write.c"
#include "/secure/master/valid_bind.c"
#include "/secure/master/valid_to_c.c"
#include "/secure/master/valid_binary.c"
