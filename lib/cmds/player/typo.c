/**
 * Does this nice bug reporting for the players.  Uses a neato
 * base object whizz bang thing now.
 * @author Pinkfish
 */

inherit REPORT_BASE;

void create() {
   ::create();
   set_error_type("TYPO");
   set_use_last_error(0);
} /* create() */
