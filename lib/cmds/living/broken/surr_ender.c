inherit COMMAND_BASE;

mixed cmd(int mode, int val) {
  if (!mode) {
    int surr = this_player()->query_surrender();

    if (surr)
      write(sprintf("You will surrender at %d%% of your max hps.\n", surr));
    else
      write("You will not surrender.\n");
    return 1;
  } else {
    if (val < 0 || val > 100)
      return notify_fail("Your surrender must be between 0 and 100.\n");
    this_player()->set_surrender(val);
    write(sprintf("Surrender set to %d%%\n", this_player()->query_surrender()));
    return 1;
  }
} /* cmd() */

mixed *query_patterns()
{
#ifdef SURRENDER_ON
  return ({ "", (: cmd(0, 0) :),
            "<number>", (: cmd(1, $4[0]) :) });
#endif
}
