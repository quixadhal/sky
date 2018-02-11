.DT
dungeon_maker.c
$MUDNAME$ autodoc help
dungeon_maker.c

.SH Inherits
.SP 5 5
This class inherits the following classes /std/object.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/terrain.h and /include/dirs.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^do_generate%^RESET%^
.EI
.SI 5
int do_generate(string word)
.EI

.SI 3
* %^BOLD%^mark_passage%^RESET%^
.EI
.SI 5
void mark_passage(int * co_ord)
.EI

.SI 3
* %^BOLD%^mark_room%^RESET%^
.EI
.SI 5
void mark_room(int * co_ord, string room)
.EI

.SI 3
* %^BOLD%^process_passages%^RESET%^
.EI
.SI 5
void process_passages()
.EI

.SI 3
* %^BOLD%^query_continue_probabilities%^RESET%^
.EI
.SI 5
int * query_continue_probabilities()
.EI

.SI 3
* %^BOLD%^query_easel%^RESET%^
.EI
.SI 5
object query_easel()
.EI

.SI 3
* %^BOLD%^query_junction_clearance%^RESET%^
.EI
.SI 5
int * query_junction_clearance()
.EI

.SI 3
* %^BOLD%^query_max_locations%^RESET%^
.EI
.SI 5
int query_max_locations()
.EI

.SI 3
* %^BOLD%^query_passage_files%^RESET%^
.EI
.SI 5
string * query_passage_files()
.EI

.SI 3
* %^BOLD%^query_passage_probabilities%^RESET%^
.EI
.SI 5
int * query_passage_probabilities()
.EI

.SI 3
* %^BOLD%^query_passages%^RESET%^
.EI
.SI 5
mixed * query_passages()
.EI

.SI 3
* %^BOLD%^query_room_entries%^RESET%^
.EI
.SI 5
mixed * query_room_entries()
.EI

.SI 3
* %^BOLD%^query_room_files%^RESET%^
.EI
.SI 5
string * query_room_files()
.EI

.SI 3
* %^BOLD%^query_room_probabilities%^RESET%^
.EI
.SI 5
int * query_room_probabilities()
.EI

.SI 3
* %^BOLD%^query_start_co_ord%^RESET%^
.EI
.SI 5
int * query_start_co_ord()
.EI

.SI 3
* %^BOLD%^query_terrain_name%^RESET%^
.EI
.SI 5
string query_terrain_name()
.EI

.SI 3
* %^BOLD%^set_continue_probabilities%^RESET%^
.EI
.SI 5
void set_continue_probabilities(mixed * args)
.EI

.SI 3
* %^BOLD%^set_junction_clearance%^RESET%^
.EI
.SI 5
void set_junction_clearance(mixed * args)
.EI

.SI 3
* %^BOLD%^set_max_locations%^RESET%^
.EI
.SI 5
void set_max_locations(mixed arg)
.EI

.SI 3
* %^BOLD%^set_passage_files%^RESET%^
.EI
.SI 5
void set_passage_files(string * words)
.EI

.SI 3
* %^BOLD%^set_passage_probabilities%^RESET%^
.EI
.SI 5
void set_passage_probabilities(mixed * args)
.EI

.SI 3
* %^BOLD%^set_room_files%^RESET%^
.EI
.SI 5
void set_room_files(string * words)
.EI

.SI 3
* %^BOLD%^set_room_probabilities%^RESET%^
.EI
.SI 5
void set_room_probabilities(mixed * args)
.EI

.SI 3
* %^BOLD%^set_start_co_ord%^RESET%^
.EI
.SI 5
void set_start_co_ord(mixed * args)
.EI

.SI 3
* %^BOLD%^set_terrain_name%^RESET%^
.EI
.SI 5
void set_terrain_name(string word)
.EI

.SI 3
* %^BOLD%^shift_in%^RESET%^
.EI
.SI 5
int * shift_in(int * co_ord, string direc, string from, string to)
.EI

.SI 3
* %^BOLD%^stop_working%^RESET%^
.EI
.SI 5
void stop_working()
.EI


