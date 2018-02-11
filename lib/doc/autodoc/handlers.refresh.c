.DT
refresh.c
$MUDNAME$ autodoc help
refresh.c

.SH Description
.SP 5 5

This is the Refresh Handler.  When a player refreshes or
gets deleted, this handler is called upon, so that all the
miscellaneous bookkeeping about that player can be reset.
This should be used for taking someone out of the playtesters'
group, resetting their criminal status, etc.  Everything,
in short, which is not a property on the player object or otherwise
can be handled entirely by the player object without using any other
objects.

If you have code that stores information about a player outside of
the player object, then you should call register_delete() on this
handler.  That will then remember the function you give it.
Then, whenever a player refreshes or deletes, the function you
specified will get called with a string with the player
name.  Do the right thing.

If your object moves to a different file, then you will
have to manually unregister the object from the refresh
handler.  This is very important!  To unregister, simply
call register_delete() again, with the same object, but
give 0 for the function.

Each object can have only one refresh function registered,
and clones can't have any!

The callback functions should be in the form of -
   void callback_func( string player )

.EP
.SP 10 5


Written by Sin

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/playerinfo.h and /secure/include/origin.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^player_deleted%^RESET%^
.EI
.SI 5
void player_deleted(string player)
.EI
.SP 7 5

This method goes through and calls all the registered deletion
callbacks.  The parameter passed to the deletion callbacks is
a string containing the name of the player who is being deleted.

.EP

.SI 3
* %^BOLD%^player_refreshed%^RESET%^
.EI
.SI 5
void player_refreshed(object player)
.EI
.SP 7 5

This function gets called by the player object whenever
a player refreshes.  You should never call this function directly.

.EP

.SI 3
* %^BOLD%^query_delete_callbacks%^RESET%^
.EI
.SI 5
mapping query_delete_callbacks()
.EI
.SP 7 5

This method returns the current list of deletion callback functions.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current list of deletion callback functions

.EP

.SI 3
* %^BOLD%^query_name%^RESET%^
.EI
.SI 5
string query_name()
.EI

.SI 3
* %^BOLD%^register_delete%^RESET%^
.EI
.SI 5
string register_delete(mixed ob, string func)
.EI
.SP 7 5

Use this function to tell the refresh handler about functions that
you want to have called whenever any player refreshes or gets
deleted.

Typically, you will call this by hand, with the 'call' command,
rather than coding a call to this function into your code.

The first parameter is the object that contains the callback
to be called.  This can be either a pointer to the object, or
the filename to the object.

The second parameter is the name of the function that should be
called.  This callback should take one parameter: a string
containing the player's name who's data is being deleted.

This function will refuse to register a callback if either:
the object is a clone, the callback isn't defined in the object, or
the callback is a function pointer.
.EP

.SI 3
* %^BOLD%^unregister_delete%^RESET%^
.EI
.SI 5
int unregister_delete(string ob, string fun)
.EI
.SP 7 5

This method unregisters a deletion call back function.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object to remove
.EP
.SP 9 5
fun - the function to remove
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 upon success, 0 upon failure

.EP


