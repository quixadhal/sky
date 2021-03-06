/**
 * *sob* This is, to my knowledge, the 4th complete or major re-write
 * of the magic_spell object that I have done. And this time, it's
 * starting with nothing due to formatting this machine. *sigh*
 * This one better damn well work RIGHT.
 * @author Shiannar
 * @revision 10/05/04 Changed the way that consumables work a tad, to
 * get consumables working right. - Shiannar.
 */

#include <magic.h>
#include <tasks.h>
#include <effect.h>
#include <obj_parser.h>

mixed *ritual;
int gp_cost;
int time;
mapping consumed;
mapping required;
string name;
string help;
string spell_type;

/* Function Prototypes */
void real_end_spell(object, mixed *, int, int);
string query_name();
int query_time();

void create() {
  //Not initialising ritual mapping because if this inherit is ever used in
  //a spell that doesn't have a ritual mapping, it doesn't deserve to work.
  consumed = ([ ]);
  required = ([ ]);

  seteuid("Spell");
  TO->setup();
}

/** Sets the ritual array up. The ritual array is the
 * array of steps that a spell will take.
 */
void set_ritual(mixed *_ritual) {
  if(!arrayp(_ritual) || !sizeof(_ritual)) return;
  ritual = _ritual;
} /* set_ritual() */

/**
 * Returns the ritual array.
 * @see set_ritual
 */
mixed *query_ritual() {
  return ritual;
} /* query_ritual() */

/**
 * Checks to see if the spell can be cast, and if so, casts it.
 * Should never be called directly.
 */
int query_cast_spell(object caster, string arg, object *_targets, object *_using) {
  object *targets;
  mixed *args;

  /* Check to see if the caster is already casting a spell. */
  if(caster->query_casting_spell()) {
    tell_object(caster, "You are already casting a spell, you cannot "
                        "cast "+query_name()+".\n");
    return 1;
  }

  /* See if the caster can cast the spell on their chosen targets.
   * By default, spells can't be cast on anything. */
  targets = TO->check_targets(caster, _targets);
  if(!targets) return 0;

  /* Check to see if everything else has been specified right.
     check_args should be overloaded to do things. */
  args = ({ 1, targets, _using, 0, arg });
  if(!args = TO->check_args(caster, args)) {
    return 0;
  }

  /* Is there _anything_ else we should check for? */
  if(!TO->check_else(caster, args)) {
     return 1;
  }

  /* Does the caster have enough guild points? */
  if(!TASKER->point_tasker(caster, "magic",
                to_int(gp_cost * TO->scale_gp_cost(caster, args)))) {
    tell_object(caster, "You cannot summon enough magical energy to "
                        "cast "+query_name()+".\n");
    return 1;
  }

  /* For all intents and purposes, they can now start casting. */
  caster->add_effect(file_name(TO), args);
  return 1;
} /* query_cast_spell() */

/**
 * @ignore yes
 */
void beginning(object caster, mixed *args, int id) {
  mixed *targets;
  targets = args[ARG_TARGETS];
  if(!sizeof(targets)) {
    tell_object(caster, "You prepare to cast "+query_name()+".\n");
  }
  else {
    if(member_array(caster, targets) != -1) {
      targets -= ({ caster });
      targets = targets + ({ "yourself" });
    }
    tell_object(caster, "You prepare to cast "+query_name()+" on "+
      query_multiple_short(args[ARG_TARGETS])+".\n");
  }

  caster->submit_ee("spell_stage",
                    to_int(time * TO->scale_time(caster, args)),
                    EE_ONCE);
} /* beginning() */

/**
 * @ignore yes
 */
void spell_stage(object caster, mixed *args, int id) {
  object *targets;
  int difficulty;
  class task_class_result tasker_result;

  /* Make sure all targets are still agreeable according to the spell */
  targets = TO->check_targets(caster, args[ARG_TARGETS]);
  if(!targets) {
    TO->end_spell(caster, args, END_ABORT, id);
 return;
  }
  else if(sizeof(targets) < sizeof(args[ARG_TARGETS])) {
    if(!sizeof(targets)) {
      tell_object(caster, "You have lost all of your targets.\n");
      TO->end_spell(caster, args, END_ABORT, id);
   return ;
    }
    if(sizeof(args[ARG_TARGETS]) - sizeof(targets) > 1) {
      tell_object(caster, "You have lost some of your targets.\n");
    }
    else {
      tell_object(caster, "You have lost one of your targets.\n");
    }
  }
  args[ARG_TARGETS] = targets;

  /* Caster has all required components? */
  if(!TO->check_components(caster, args[ARG_STAGE], args)) {
    TO->end_spell(caster, args, END_ABORT, id);
    return;
  }

  /* Check to see if the spell has anything else to do before
     attempting this stage. */
  if(function_exists("fail_stage_"+query_num(args[ARG_STAGE]), TO, 1)) {
    if(call_other(TO, "fail_stage_"+query_num(args[ARG_STAGE]), caster,
        args)) {
      TO->end_spell(caster, args, END_FAIL_HANDLED, id);
    return 0;
    }
    else {
//    TO->end_spell(caster, args, END_FAIL, id);
    }
  }

  /* Work out difficulty for the stage, perform stage. */
  difficulty = to_int( RITUAL_DIFF(args[ARG_STAGE]) *
               TO->scale_difficulty(caster, args) );
  tasker_result = TASKER->perform_task(caster,
                                       RITUAL_SKILL(args[ARG_STAGE]),
                                       difficulty,
                                       TM_SPELL, 1);

  switch(tasker_result->result) {
    case AWARD: {
      tell_object(caster, "%^YELLOW%^"+({
        "Your concentrated mind becomes aware of another facet of "+
        RITUAL_TM_SKILL(args[ARG_STAGE]),
        "While contemplating "+RITUAL_TM_SKILL(args[ARG_STAGE])+", you "
        "obtain a deeper understanding",
        "A more practical application of "+RITUAL_TM_SKILL(args[ARG_STAGE])+
        " suddenly becomes apparent",
        "An obscure theory relating to "+RITUAL_TM_SKILL(args[ARG_STAGE])+
        " becomes suddenly clearer"})[random(4)]+"!%^RESET%^\n");
      break;
    }
    case FAIL: {
      MAGIC_H->write_messages(caster, targets,
                              RITUAL_FAIL_MESSAGES(args[ARG_STAGE]));
      if(!function_exists("fail_stage_"+query_num(args[ARG_STAGE]), TO, 1)) {
        TO->end_spell(caster, args, END_FAIL, id);
      }
      else {
        call_other("fail_stage_"+query_num(args[ARG_STAGE]), TO);
      }
      return;
    }
  }
  MAGIC_H->write_messages(caster, targets,
                          RITUAL_MESSAGES(args[ARG_STAGE]));

  /* Update args */
  args[ARG_BONUS] += tasker_result->degree;
  args[ARG_STAGE] += 1;
  caster->set_arg_of(caster->sid_to_enum(id), args);

  if(args[ARG_STAGE] > RITUAL_STAGES) {
    TO->end_spell(caster, args, END_SUCCEED, id);
    return;
  }
  /* Submit effect event for next stage. */
  caster->submit_ee("spell_stage",
                    to_int(time * TO->scale_time(caster, args)),
                    EE_ONCE);
} /* spell_stage() */

/**
 * Checks to see if valid arguments for the spell have
 * been entered. Should be overloaded by inheriting
 * objects to perform proper checking.
 * @arg caster The person casting the spell
 * @arg args Array of arguments for the spell, accessed through the defines in magic.h
 * @return The new array of arguments, or 0 for failure due to incorrect args
 */
mixed *check_args(object caster, mixed *args) {
  return args;
} /* check_args() */

/**
 * Checks to see if the spell should fail due to any other reasons.
 * Suppresses error messages, thus custom ones must be provided
 * by inheriting objects. Should be overloaded if needed.
 * @arg caster The person casting the spell
 * @arg args Array of arguments for the spell, accessed through the defines in magic.h
 * @return 0 to halt the spell, 1 to continue
 */
int check_else(object caster, mixed *args) {
  return 1;
} /* check_else() */

/**
 * Checks to see if all targets are valid. Called once per
 * spell stage, before the spell stage takes place. Should
 * be overloaded for any targeted spells.
 * @arg caster The person casting the spell
 * @arg targets Object array of all current targets
 * @return Object array of all new targets
 */
object *check_targets(object caster, object *targets) {
  if(sizeof(targets)) {
    tell_object(caster, "You cannot cast "+query_name()+" at anything.\n");
    return 0;
  }
  return ({ });
} /* check_targets() */

/**
 * Scaling function. Overload to scale GP cost to cast a spell
 * if so desired.
 * @arg caster The person casting the spell
 * @arg args The args for the spell, see magic.h
 * @return Float percentage of GP cost, default 1.0
 */
float scale_gp_cost(object caster, mixed *args) {
  return 1.0;
} /* scale_gp_cost() */

/**
 * Scaling function. Overload to scale the time it takes to cast
 * a spell if you so desire.
 * @arg caster The person casting the spell
 * @arg args The args for the spell, see magic.h
 * @return Float percentage of normal speed, for default see code.
 */
float scale_time(object caster, mixed *args) {
  int bnus;
  int ntime;
  if(TO->query_spell_type()) {
    bnus += caster->query_skill_bonus(TO->query_spell_type());
  }
  if(bnus < 0) bnus = 0;
  switch(bnus) {
    case 400..599 : {
      ntime = 2;
      break;
    }
    case 300..399 : {
      ntime = 3;
      break;
    }
    case 200..299 : {
      ntime = 4;
      break;
    }
    case 150..199 : {
      ntime = 5;
      break;
    }
    case 100..149 : {
      ntime = 6;
      break;
    }
    case 50..99 : {
      ntime = 7;
      break;
    }
    case 20..49 : {
      ntime = 8;
      break;
    }
    case 0..19 : {
      ntime = 9;
      break;
    }
    default : {
      ntime = 1;
    }
  }
  return 1.0 + random(to_float(ntime)/2);
} /* scale_time() */

/**
 * Scaling function. Overload to scale difficulty of stages according
 * to any factors you may desire. For example, you could make a spell
 * more difficult if there are more targets.
 * @arg caster The person casting the spell
 * @arg args The spell args, see magic.h
 * @return Float percentage of difficulty, default 1.0
 */
float scale_difficulty(object caster, mixed *args) {
  return 1.0;
} /* scale_difficulty() */

/**
 * @ignore yes
 */
void end_spell(object caster, mixed *args, int end_type, int id) {
  args[ARG_STAGE] = end_type;
  caster->set_arg_of(caster->sid_to_enum(id), args);
  caster->submit_ee(0, 1, EE_REMOVE);
} /* end_spell() */

/**
 * @ignore yes
 */
void end(object caster, mixed *args, int id) {
  int bonus;
  bonus = args[ARG_BONUS] / RITUAL_STAGES;
  if(args[ARG_STAGE] == END_ABORT) {  //No, I'm not proud of this hack,
                                      //But it's the prettiest option.
    tell_object(caster, "You hastily release "+query_name()+"!\n");
    TO->spell_aborted(caster, args, bonus);
    return;
  }
  if(args[ARG_STAGE] == END_SUCCEED) {
    XP_H->handle_xp(caster, to_int(gp_cost*TO->scale_gp_cost(caster, args)), 1);
    TO->spell_succeeded(caster, args, bonus);
  }
  if(args[ARG_STAGE] == END_FAIL_HANDLED) {
    XP_H->handle_xp(caster, to_int((gp_cost*TO->scale_gp_cost(caster, args)/2)), 0);
  }
  if(args[ARG_STAGE] == END_FAIL) {
    XP_H->handle_xp(caster, to_int(gp_cost*TO->scale_gp_cost(caster, args)), 0);
    TO->spell_failed(caster, args, bonus);
  }
} /* end() */

/**
 * @return The name of the spell
 */
string query_name() {
  return name;
} /* query_name() */

/**
 * @arg nname The new name of the spell
 */
void set_name(string nname) {
  name = nname;
} /* set_name() */

/**
 * @return The raw time in seconds per spell stage, I think.
 * @see set_time, scale_time
 */
int query_time() {
  return time;
} /* query_time() */

/**
 * @arg ttime The new raw time in seconds per stage.
 * @see query_time, scale_time
 */
void set_time(int ttime) {
  time = ttime;
} /* set_time() */

/**
 * @arg gp The raw gp cost to cast the spell.
 * @see query_gp, scale_gp_cost
 */
void set_gp(int gp) {
  gp_cost = gp;
} /* set_gp() */

/**
 * @return The raw gp cost to cast the spell.
 * @see set_gp, scale_gp_cost
 */
int query_gp() {
  return gp_cost;
} /* query_gp() */

/**
 * @arg n_type String type of spell, eg "magic.spells.misc"
 * @see query_spell_type
 */
void set_spell_type(string n_type) {
  spell_type = n_type;
} /* set_spell_type() */

/**
 * @return String skill used primarily in spell.
 * @see set_spell_type
 */
string query_spell_type() {
  return spell_type;
} /* query_spell_type() */

/**
 * @arg _help The string help for the spell.
 */
void set_help(string _help) {
  help = _help;
} /* set_help() */

/**
 * @ignore yes
 */
string help() {
  return help;
} /* help() */


/**
 * This function sets the items consumed by the spell, and the stages they're consumed in.
 * @param cconsumed the entire mapping of items consumed in the format:
 * ([
 *   (int)stage : ([ (string)id of the item : ({ (string)short used for error message, (int)quantity used ]),
 * ])
 * EG: ([
 *   1 : ({ "pinche$s$ of ForestGreenDust", "forest-green dust", 1 }),
 *   3 : ({ "metal shield$s$", "metal shield", 1 }),
 * ])
 */
void set_consumed(mapping cconsumed) {
  if(!mappingp(cconsumed)) return;
  consumed = cconsumed;
} /* set_consumed() */

/**
 * This function sets the items required by the spell, and the stages they're required for.
 * NB: Items that are required are not consumed! Use set_consumed for items that will
 * be consumed by the spell. Furthermore, having items that conflict in both the consumed
 * and required mappings is a bad idea, no guarantees made about behaviour.
 * @param rrequired the entire mapping of items required in the format:
 * ([
 *   (int)stage : ([ (string)id of the item : ({ (string)short used for error message, (int)quantity used ]),
 * ])
 * EG: ([
 *   1 : ([ "pinche$s$ of ForestGreenDust" : ({ "forest-green dust", 1 }) ]),
 *   3 : ([ "metal shield$s$" : ({ "metal shield", 1 }) ]),
 * ])
 */
void set_required(mapping rrequired) {
  if(!mappingp(rrequired)) return;
  required = rrequired;
} /* set_required() */

/**
 * check_components is used internally. Should not be overloaded.
 * To adjust quantities of components dynamically, see adjust_components()
 */
int check_components(object caster, int stage, mixed *args) {
  object *dest;
  string *missing;
  mixed *quant;
  string thing;
  string bit1, bit2, bit3;
  int i;
  class obj_match result;
  dest = ({});
  missing = ({});

  //Handle consumed items.
  /*if(consumed[stage] && arrayp(consumed[stage])) {
    tell_object(caster, CAP(TO->query_name())+" is using an outdated components list!\n"
      "Please report this to a creator in charge of magic!\n"+
      CAP(TO->query_name())+" will now abort.\n");
    return 0;
  }*/
  if(consumed[stage] && arrayp(consumed[stage])) {
    for(i = 0; i < sizeof(consumed[stage]); i+=3) {
      quant = TO->adjust_components(caster, stage, consumed[stage][i..i+2], args);
      sscanf(quant[0], "%s$%s$%s", bit1, bit2, bit3);
      if(quant[2] > 1) {
        thing = quant[2]+" "+bit1+bit2+bit3;
      }
      else {
        thing = quant[2]+" "+bit1+bit3;
      }
      result = match_objects_in_environments(thing, caster);
      if(result->result != OBJ_PARSER_SUCCESS) {
        sscanf(quant[1], "%s$%s$%s", bit1, bit2, bit3);
        missing += ({query_num(quant[2])+" "+bit1+(quant[2]>1?bit2:"")+bit3});
      }
      else {
        dest += result->objects;
      }
    }
  }

  dest->move("/room/rubbish");

  //Handle required, non-consumed items.
  if(required[stage] && arrayp(required[stage])) {
    for(i = 0; i < sizeof(required[stage]); i+=3) {
      quant = TO->adjust_components(caster, stage, required[stage][i..i+2], args);
      sscanf(quant[0], "%s$%s$%s", bit1, bit2, bit3);
      if(quant[2] > 1) {
        thing = quant[2]+" "+bit1+bit2+bit3;
      }
      else {
        thing = quant[2]+" "+bit1+bit3;
      }
      result = match_objects_in_environments(thing, caster);
      if(result->result != OBJ_PARSER_SUCCESS) {
        sscanf(quant[1], "%s$%s$%s", bit1, bit2, bit3);
        missing += ({query_num(quant[2])+" "+bit1+(quant[2]>1?bit2:"")+bit3});
      }
    }
  }

  if(sizeof(missing)) {
    tell_object(caster, "To continue casting "+TO->query_name()+" you require "+
//      query_multiple_short(map(missing, (:add_a($1):)))+".\n");
      query_multiple_short(missing)+".\n");
    return 0;
  }
  return 1;
} /* check_components() */

/**
 * This function is used to adjust the quantities of components consumed by
 * a spell. Overload it to adjust them.
 * @param caster the person casting the spell
 * @param stage the stage currently being executed
 * @param quant mapping containing the components for that stage
 * @param args the args for the spell
 * @return mapping showing the correct components for that stage.
 */
mixed *adjust_components(object caster, int stage, mixed *quant, mixed *args) {
  return quant;
} /* adjust_components() */

/**
 * @ignore yes
 */
int query_is_spell() { return 1; } /* query_is_spell() */

/**
 * @ignore yes
 */
string query_classification() {
  if(!TO->query_spell_type()) {
    return "magic.spell";
  }
  return "magic.spell."+
     explode(TO->query_spell_type(), ".")[sizeof(explode(TO->query_spell_type(), "."))-1];
} /* query_classification() */

/**
 * @ignore yes
 */
string query_shadow_ob() { return "/std/shadows/magic/magic_spell"; } /* query_shadow_ob() */
