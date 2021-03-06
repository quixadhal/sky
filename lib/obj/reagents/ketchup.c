// Autogenned file

inherit "/obj/food.c";

void setup(){

// #debug
// #class
  set_name( "ketchup" );
  set_short( "ketchup" );
  set_long( "This is some ketchup, $amount_size$.  So where's the rats?\n" );
  add_adjective( "some" );
  add_plural( "ketchup" );
  set_medium_alias( "TomatoKetchup"  );
  set_amount_types( ([ "drop": ({ 1, "drops" }),                          "teaspoon": ({ 20, "teaspoons" }),                          "tablespoon": ({ 60, "tablespoons" }),                          "ounce": ({ 120, "ounces" }),                          "cup": ({ 960, "cups" }),                          "pint": ({ 2400, "pints" }),                          "quart": ({ 4800, "quarts" }),                          "gallon": ({ 19200, "gallons" }) ])  );
  add_adjective( ({ "drop", "drops", "teaspoon", "teaspoons", "tablespoon",                  "tablespoons", "ounce", "ounces", "cup", "cups", "pint",                  "pints", "quart", "quarts", "gallon", "gallons", "of" }) );
  set_amount( 2400  );
  set_continuous(  );
  set_liquid(  );
  set_pile_types( ({ 50, "small", 100, "medium", "large" }) );
} /* setup() */
