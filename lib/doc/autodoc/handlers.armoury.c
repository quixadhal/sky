.DT
armoury.c
$MUDNAME$ autodoc help
armoury.c

.SH Description
.SP 5 5

Keeps track of all the standard armours, weapons and clothing.
.EP
.SP 10 5


Written by Furball
.EP

.SH Change history
.SP 5 5
Many many, by many people

4/1/97 Ceres
The discworld armoury was rewritten by Ceres on 4/1/97 to handle
subdirectories within the standard dirs.

20/06/01 Shaydz
Rewritten to remove a few annoying bugs, including not being able to
request items that had more than one word.

26/06/02 Sandoz
Removed all the recycling code, because it will never be reliable,
because of properties, effects and whatnot.

06/09/02 Sandoz
Added stationery and instrument lists, and new recycling code which
will hopefully work ( gotta love reload_object() :) ).

26/09/02 Sandoz
Changed to only recycle items that have been requested before with
request_item(), and to only accept an item for recycling if its
miss count is higher than the number of currently recycled items.

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /std/room/basic_room.
.EP

.SH Classes

.SI 3
* %^BOLD%^item_data%^RESET%^
class item_data {
string file;
object * recycled;
int hits;
int misses;
int flags;
}

.EI
.SP 7 5

This class stores all the data for a specific armoury item.
.EP
.SI 7
%^BOLD%^Members:%^RESET%^
.EI
.SP 9 5
file - the file name of the item
.EP
.SP 9 5
recycled - the recycled objects
.EP
.SP 9 5
hits - recycle hits
.EP
.SP 9 5
misses - recycle misses

.EP


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^get_guttered%^RESET%^
.EI
.SI 5
object get_guttered(int percent)
.EI
.SP 7 5

This method gets a guttered item from the armoury.
This is used by the search function in city rooms,
and returns a random smaller item from the armoury's
recycled items list.  The condition percentage should
not be set too high for guttered items, and has been
capped at 50% for that very reason.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
percent - the percentage condition the item should be in
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a guttered object or 0 if there are none

.EP

.SI 3
* %^BOLD%^query_accepting%^RESET%^
.EI
.SI 5
int query_accepting(string word)
.EI
.SP 7 5

This method returns whether or not the armoury is currently accepting
the specified item for recycling.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the name of the object to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if we are currently accepting the item, 0 if not

.EP

.SI 3
* %^BOLD%^query_armour%^RESET%^
.EI
.SI 5
string * query_armour()
.EI
.SP 7 5

Returns the current list of known armours.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the armours array

.EP

.SI 3
* %^BOLD%^query_clothing%^RESET%^
.EI
.SI 5
string * query_clothing()
.EI
.SP 7 5

Returns the current list of known clothing.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the clothing array

.EP

.SI 3
* %^BOLD%^query_guttered%^RESET%^
.EI
.SI 5
object * query_guttered()
.EI
.SP 7 5

This method returns the list of items that could be
searched up from gutters.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the guttered items list

.EP

.SI 3
* %^BOLD%^query_hits%^RESET%^
.EI
.SI 5
int query_hits(string word)
.EI
.SP 7 5

This method returns the recycle hits count for a specific file.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the name of the object to get the hits count for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the hits count

.EP

.SI 3
* %^BOLD%^query_instruments%^RESET%^
.EI
.SI 5
string * query_instruments()
.EI
.SP 7 5

Returns the current list of known musical instruments.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the musical instruments array

.EP

.SI 3
* %^BOLD%^query_item_filename%^RESET%^
.EI
.SI 5
string query_item_filename(string item)
.EI
.SP 7 5

This method returns the absolute filename of an item.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the item
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the absolute filename of the item

.EP

.SI 3
* %^BOLD%^query_item_list%^RESET%^
.EI
.SI 5
mapping query_item_list()
.EI
.SP 7 5

Returns the current list of all items.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the items mapping

.EP

.SI 3
* %^BOLD%^query_jewellery%^RESET%^
.EI
.SI 5
string * query_jewellery()
.EI
.SP 7 5

Returns the current list of known jewelley.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the jewellery array

.EP

.SI 3
* %^BOLD%^query_misses%^RESET%^
.EI
.SI 5
int query_misses(string word)
.EI
.SP 7 5

This method returns the recycle miss count for a specific file.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the name of the object to get the misses count for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the misses count

.EP

.SI 3
* %^BOLD%^query_ores%^RESET%^
.EI
.SI 5
string * query_ores()
.EI
.SP 7 5

Returns the current list of known ores.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the ores instruments array

.EP

.SI 3
* %^BOLD%^query_recycled%^RESET%^
.EI
.SI 5
object * query_recycled(string word)
.EI
.SP 7 5

This method returns the recycled items for a specific file.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the name of the object to get the recycled objects for
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the recycled objects

.EP

.SI 3
* %^BOLD%^query_scabbards%^RESET%^
.EI
.SI 5
string * query_scabbards()
.EI
.SP 7 5

Returns the current list of known scabbards.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the scabbards array

.EP

.SI 3
* %^BOLD%^query_stationery%^RESET%^
.EI
.SI 5
string * query_stationery()
.EI
.SP 7 5

Returns the current list of known stationery items.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the stationery items array

.EP

.SI 3
* %^BOLD%^query_weapons%^RESET%^
.EI
.SI 5
string * query_weapons()
.EI
.SP 7 5

Returns the current list of known weapons.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the weapons array

.EP

.SI 3
* %^BOLD%^recycle_object%^RESET%^
.EI
.SI 5
int recycle_object(object ob)
.EI
.SP 7 5

This method recycles a suitable object.
It will call reload_object() on it, and make it available for
requesting from the armoury.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
ob - the object to try to recycle
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if recycled successfully, 0 if not

.EP

.SI 3
* %^BOLD%^request_item%^RESET%^
.EI
.SI 5
object request_item(string word, int percent)
.EI
.SP 7 5

General item retreival function.  It returns a new item
it handles any sort of item.  The percentage is the
percentage condition in which it is returned.
The "word" parameter is the name of the requested item, essentially
the filename without directory and with "_"'s changed to " "'s. The
"percent" parameter is used as measure of how good it
is compared to a fully functional one. So a 50% dagger is only 50% as
good as a 100% one.


The file armoury.h defines the ARMOURY variable.  You need to include this into your file to use it.  You should include this file and uyse ythis define rather than the full path to the armoury, as otherwise your code could stuff up :)
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
word - the name of the item to retreive
.EP
.SP 9 5
percent - the percentage condition to be in
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the requested object, or 0 on failure
.EP


