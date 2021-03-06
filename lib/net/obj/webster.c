/*  -*- LPC -*-  */
/*
 * $Locker:  $
 * $Id: webster.c,v 1.1 1998/01/06 05:20:37 ceres Exp $
 * $Log: webster.c,v $
 * Revision 1.1  1998/01/06 05:20:37  ceres
 * Initial revision
 * 
*/
/* Ick I hate // comments.
 * Converted to this illustrious mudlib by Pinkfish.
 *
 * file:   obj/webster.c
 * author: Truilkan@Basis
 * date:   1992/10/29
 * mudlib: Basis
 *
 * if you choose to use this code in your mud, please retain the above
 * header.  if you write a help screen for this object, please give credit
 * to the original authors (Truilkan and Jacques)
 *
 * This object obeys part of the RFC for dictionary lookups.  It provides
 * an LPC object frontend (in the form of a dictionary object) to an online
 *  dictionary server.
 *
 * todo: parse the first line returned in order to be smart about
 * interpreting results of a query (successful, failed, etc).
 * 
 * Modified by Turrican@Discworld to use a new server object, 28-4-96.
 */

#include <network.h>

#define DISCONNECTED "dictionary (closed)"
#define CONNECTED "dictionary (open)"

inherit CLIENT;
inherit "/std/object";

private nosave int fd, connected;

protected void create() {
  client::create();
  SetSocketType(STREAM);
  object::create();
  connected = 0;
  fd = -1;
} /* create() */

protected void setup() {
  set_name("dictionary");
  add_alias(({ "book", "webster" }));
  set_short(DISCONNECTED);
  set_long("This is a fine dictionary with faded gold embossing.  You could "
           "probably do all manner of things with it such as defining, "
           "completing, and spelling words.\n");
} /* setup() */

protected void eventRead(int fd, string mess) {
  mess = replace_string(mess, "\r\n", "\n");
  say(mess);
}

protected void eventSocketClose(int fd) {
  if (!connected) return;
  tell_object(environment(), "The dictionary slams shut!\n");
  set_short(DISCONNECTED);
  connected = 0;
}

int do_open() {
  if (connected)
    return notify_fail("The dictionary is already open!\n");
  if ((fd = eventCreateSocket("128.163.128.130", 2627)) < 0)
    return notify_fail("The dictionary fails to open!\n");
  set_short(CONNECTED);
  say(capitalize(this_player()->query_name()) + " opens " +
      this_player()->query_possessive() + " dictionary.\n");
  tell_object(environment(), "The dictionary creaks open.\n");
  connected = 1;
  call_out("do_close", 5 * 60);
  return 1;
} /* do_open() */

int do_close() {
  if (!connected)
    return notify_fail("The dictionary isn't open!\n");
  if (this_player())
    say(capitalize(this_player()->query_name()) + " closes " +
        this_player()->query_possessive() + " dictionary.\n");
  remove_call_out("do_close");
  eventAbortCallback(fd);
  eventSocketClose(fd);
  return 1;
} /* do_close() */

int dlookup(string arg) {
  if (!connected)
    return notify_fail("The dictionary isn't open!\n");
  say(capitalize(this_player()->query_name()) + " looks up a word.\n");
  eventWrite(fd, sprintf("DEFINE %s\r\n", arg));
  return 1;
} /* dlookup() */

int dskim(string arg) {
   if (!connected)
    return notify_fail("The dictionary isn't open!\n");
  say(capitalize(this_player()->query_name()) + " skims the dictionary.\n");
  eventWrite(fd, sprintf("ENDINGS %s\r\n", arg));
  return 1;
} /* dskim() */

int dspell(string arg) {
  if (!connected)
    return notify_fail("The dictionary isn't open!\n");
  say(capitalize(this_player()->query_name()) + " searches for a word.\n");
  eventWrite(fd, sprintf("SPELL %s\r\n", arg));
  return 1;
} /* dspell() */

int dcomplete(string arg) {
  if (!connected)
    return notify_fail("The dictionary isn't open!\n");
  say(capitalize(this_player()->query_name()) + " searches for a word.\n");
  eventWrite(fd, sprintf("COMPLETE %s\r\n", arg));
  return 1;
} /* dcomplete() */

void init() {
#ifndef __NO_ADD_ACTION__
  add_action("dlookup", "define");
  add_action("dskim", "endings");
  add_action("dspell", "spell");
  add_action("dcomplete", "complete"); 
#endif
  this_player()->add_command("open", this_object());
  this_player()->add_command("close", this_object());
} /* init() */

void dest_me() {
  object::dest_me();
  client::dest_me();
}
