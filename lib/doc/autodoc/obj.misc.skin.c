.DT
skin.c
$MUDNAME$ autodoc help
skin.c

.SH Description
.SP 5 5

A skin inherit for use with the skin command and in scraping/tanning.
.EP
.SP 10 5


Written by Sandoz, 08th September 2001.

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /std/object.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/skin.h and /include/bit.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^do_decay%^RESET%^
.EI
.SI 5
int do_decay()
.EI
.SP 7 5

This method is called by the bits controller to do the actual
decaying of the skin.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if it still exists, 0 if it has finished decaying

.EP

.SI 3
* %^BOLD%^do_scrape%^RESET%^
.EI
.SI 5
int do_scrape(int _hair)
.EI
.SP 7 5

This method is called when the skin is being scraped.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the scraping was successful, 0 if the skin
has already been scraped

.EP

.SI 3
* %^BOLD%^do_tan%^RESET%^
.EI
.SI 5
int do_tan()
.EI
.SP 7 5

This method is called when the skin is being tanned.
It stops the decay of the skin and changes its short
and extra look.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the tanning was successful, 0 if the skin
cannot be tanned or has already been tanned

.EP

.SI 3
* %^BOLD%^query_amount_scraped%^RESET%^
.EI
.SI 5
int query_amount_scraped()
.EI
.SP 7 5

This method queries how much of the skin has been
scraped, percentually.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the amount of skin that has been scraped

.EP

.SI 3
* %^BOLD%^query_decay%^RESET%^
.EI
.SI 5
int query_decay()
.EI
.SP 7 5

This method returns the current decay level of the skin
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the current decay level

.EP

.SI 3
* %^BOLD%^query_gender%^RESET%^
.EI
.SI 5
int query_gender()
.EI
.SP 7 5

This method returns the gender associated with the skin.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the gender associated with the skin

.EP

.SI 3
* %^BOLD%^query_gender_string%^RESET%^
.EI
.SI 5
string query_gender_string()
.EI
.SP 7 5

This method returns the gender string of the pelt.
This will be either male, female or neuter.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the gender string

.EP

.SI 3
* %^BOLD%^query_hair_left%^RESET%^
.EI
.SI 5
int query_hair_left()
.EI
.SP 7 5

This methods queries the percentual amount of hair that is left.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the percentual amount of hair left

.EP

.SI 3
* %^BOLD%^query_hair_lost%^RESET%^
.EI
.SI 5
int query_hair_lost()
.EI
.SP 7 5

This methods queries the amount of hair that has been
scraped off or otherwise lost.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the amount of hair lost

.EP

.SI 3
* %^BOLD%^query_max_hair%^RESET%^
.EI
.SI 5
int query_max_hair()
.EI
.SP 7 5

This methods queries the max amount of hair this type of
skin can have.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the max amount hair the skin can have

.EP

.SI 3
* %^BOLD%^query_no_hair%^RESET%^
.EI
.SI 5
int query_no_hair()
.EI
.SP 7 5

This method queries if the skin has any hair left or not.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the skin has some hair left, 0 if there is no
hair left

.EP

.SI 3
* %^BOLD%^query_preferred_item%^RESET%^
.EI
.SI 5
string query_preferred_item()
.EI
.SP 7 5

This method returns the preferred cloting item to be
made out of the skin based on its softness.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the preferred clothing item

.EP

.SI 3
* %^BOLD%^query_race%^RESET%^
.EI
.SI 5
string query_race()
.EI
.SP 7 5

This method queries the race of the skin.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the race of the skin

.EP

.SI 3
* %^BOLD%^query_scrape_string%^RESET%^
.EI
.SI 5
string query_scrape_string()
.EI
.SP 7 5

This method returns a string description on how much of
the skin has been scraped along with how much hair is left.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the scraped description string

.EP

.SI 3
* %^BOLD%^query_scraped%^RESET%^
.EI
.SI 5
int query_scraped()
.EI
.SP 7 5

This method queries if the skin has been successfully scraped.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the skin has been successfully scraped, 0 if not

.EP

.SI 3
* %^BOLD%^query_size_string%^RESET%^
.EI
.SI 5
string query_size_string()
.EI
.SP 7 5

This method returns the size string of the skin,
calculated from the weight of the skin.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the size of skin as a string, calculated from the
weight

.EP

.SI 3
* %^BOLD%^query_skin_type%^RESET%^
.EI
.SI 5
string query_skin_type()
.EI
.SP 7 5

This method returns the skin type - pelt, fur etc.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the skin type

.EP

.SI 3
* %^BOLD%^query_softness%^RESET%^
.EI
.SI 5
int query_softness()
.EI
.SP 7 5

This method returns the percentual softness of the skin.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the softness percentage

.EP

.SI 3
* %^BOLD%^query_softness_string%^RESET%^
.EI
.SI 5
string query_softness_string()
.EI
.SP 7 5

This method returns the softness of the skin in a string format.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the softness of the skin

.EP

.SI 3
* %^BOLD%^query_tanned%^RESET%^
.EI
.SI 5
int query_tanned()
.EI
.SP 7 5

This method returns if the skin is tanned or not.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if the skin is tanned, 0 if not tanned

.EP

.SI 3
* %^BOLD%^setup_skin%^RESET%^
.EI
.SI 5
void setup_skin(string _race, string _type, int _gender, int _decay)
.EI
.SP 7 5

This method sets the skin type.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
_race - the race of the creature the skin came off from
.EP
.SP 9 5
_type - the type of skin - pelt, fur, scales etc.
.EP
.SP 9 5
_gender - the gender of the creature the skin came off from
.EP
.SP 9 5
_decay - the current decay level of the skin

.EP


