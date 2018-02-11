.DT
weather.c
$MUDNAME$ autodoc help
weather.c

.SH Description
.SP 5 5

An attempt at a new weather handler for Discworld.
Ceres@Discworld 14/4/96

Having thought about the way weather works (and Discworlds interesting
meteorology) I decided not to try and implement some model of realworld
weather. Instead regional variations in weather are handled by
regional climate properties. This system will handle diurnal and seasonal
variations and that's about it. Hopefully that will make it more
understandable, usable and efficient.

Basic Operation
---------------
The weather is based on weather 'pattern's. The pattern lasts for several
hours and is calculated from the 'seasonal' norm and the 'variance'. The
'current' weather will tend towards the pattern weather. The actual weather
in a room will depend on the current weather, local modifiers
(climate property), diurnal variations and variance.

Thus update_pattern() is called once every reboot (for the moment) and
update_weather() is called every 5 minutes (UPDATE_SPEED).

Decisions
---------
Calculation of the general weather has been moved into
update_weather. Rather than doing it on a room by room basis everytime
someone looks! Instead, local climate controls will be added verbatim to
the current global weather. This will improve efficiency massively, but will
reduce the overall weather variations.

Principles
----------
Temperature should go down during winter and during the night.
Clouds should increase during the winter.
Wind should be higher during autumn and winter (I guess).
Rain/sleet/snow will depend on cloud density and temperature.
If it's windy and lots of cloud density we might get a thunder storm.
Cloud cover should lower temperature as should wind.

Changed Jun 3 1996 by Grampa to include weather notifications for rooms.
Changed to Dediscify it Shaydz 2001

.EP
.SP 10 5

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /std/object.
.EP

.SH Includes
.SP 5 5
This class includes the following files /include/time.h and /include/climate.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^check_umbrella%^RESET%^
.EI
.SI 5
int check_umbrella(object ob)
.EI

.SI 3
* %^BOLD%^day_number%^RESET%^
.EI
.SI 5
int day_number()
.EI
.SP 7 5

Find out which day of the Disc (common) year it is.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the day of the year.

.EP

.SI 3
* %^BOLD%^minute_number%^RESET%^
.EI
.SI 5
int minute_number()
.EI
.SP 7 5

Find out which minute of the day (0 - 1439) it is.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the minute.

.EP

.SI 3
* %^BOLD%^query_cloud%^RESET%^
.EI
.SI 5
int query_cloud(object env)
.EI
.SP 7 5

Find out the cloud cover of a given room.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
env - the room
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
an open ended percentage. Greater than 100 means heavier cover.

.EP

.SI 3
* %^BOLD%^query_darkness%^RESET%^
.EI
.SI 5
int query_darkness(object env)
.EI
.SP 7 5

This method returns percentage of light.
It should be dependant on the base amount of light, day or night time
and cloud cover.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
the - room
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a percentage

.EP

.SI 3
* %^BOLD%^query_moon_phase%^RESET%^
.EI
.SI 5
string query_moon_phase()
.EI
.SP 7 5

Find out which phase of the moon we're currently in.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a string for the phase of the moon.

.EP

.SI 3
* %^BOLD%^query_moon_string%^RESET%^
.EI
.SI 5
string query_moon_string(object env)
.EI
.SP 7 5

Get the appropriate moon string. This is almost completely from the old
system. I don't understand the moon.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
env - the room to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the moon string.

.EP

.SI 3
* %^BOLD%^query_raining%^RESET%^
.EI
.SI 5
int query_raining(object env)
.EI
.SP 7 5

Find out if its raining in a given room.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
env - the room
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 or 0 for true or false.

.EP

.SI 3
* %^BOLD%^query_season%^RESET%^
.EI
.SI 5
string query_season()
.EI
.SP 7 5

Return which of the 4 seasons we are in.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
spring, summer, autumn or winter.

.EP

.SI 3
* %^BOLD%^query_snowing%^RESET%^
.EI
.SI 5
int query_snowing(object env)
.EI
.SP 7 5

Find out if its snowing in a given room.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
env - the room
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 or 0 for true or false.

.EP

.SI 3
* %^BOLD%^query_sunrise%^RESET%^
.EI
.SI 5
int query_sunrise(int doy)
.EI
.SP 7 5

Find out when sunrise will be on a given day of the year.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
doy - Day of the Discworld common year.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
sunrise time (in seconds past midnite).

.EP

.SI 3
* %^BOLD%^query_sunset%^RESET%^
.EI
.SI 5
int query_sunset(int doy)
.EI
.SP 7 5

Find out when sunset will be on a given day of the year.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
doy - Day of the Discworld common year.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
sunset time (in seconds past midnite).

.EP

.SI 3
* %^BOLD%^query_temperature%^RESET%^
.EI
.SI 5
int query_temperature(object env)
.EI
.SP 7 5

Find out the temperature of a given room.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
env - the room
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
a temperature in Celcius

.EP

.SI 3
* %^BOLD%^query_tod%^RESET%^
.EI
.SI 5
string query_tod()
.EI
.SP 7 5

Return a string for the period of the day
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
night, morning, midday, afteroon or evening.

.EP

.SI 3
* %^BOLD%^query_windsp%^RESET%^
.EI
.SI 5
int query_windsp(object env)
.EI
.SP 7 5

Find out the wind speed in a given room.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
env - the room
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the wind speed in miles per hour.

.EP

.SI 3
* %^BOLD%^room_dested%^RESET%^
.EI
.SI 5
void room_dested()
.EI
.SP 7 5

This method is called by the room object when it is dested.
It will delete it from the rooms mapping.

.EP

.SI 3
* %^BOLD%^temp_string%^RESET%^
.EI
.SI 5
string temp_string(int temp)
.EI
.SP 7 5

Return a temperature string equating to the temperature passed
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
int - The temperature in Celcius
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
string a temperature string.

.EP

.SI 3
* %^BOLD%^weather_notify%^RESET%^
.EI
.SI 5
int weather_notify(object which_room, int notifications)
.EI
.SP 7 5

Add a room to the list of rooms to notify about weather.  Notifications
are an ORed (|) combination of the #defines in /include/climate.h
IE: To inform about temperature and rain changes, call
weather_notify( room, (NOTIFY_TEMPERATURE | NOTIFY_RAIN) );
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
which_room - the room to be notified
.EP
.SP 9 5
notifications - a bitmap of notifications
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
success or failure (1 or 0)

.EP


