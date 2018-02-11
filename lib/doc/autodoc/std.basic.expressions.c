.DT
expressions.c
$MUDNAME$ autodoc help
expressions.c

.SH Description
.SP 5 5

This is an inheritable to handle certain sorts of expressions in stuff.
These expression can be setup by players (or creators) and then run
or evaluated.  It allows controlling the types usable by the expression
handlers, strings, arrays, mappings, integers and floats.
.EP
.SP 10 5


Written by Pinkfish

Started Thu May  4 22:44:34 PDT 2000

.EP

.SH Includes
.SP 5 5
This class includes the following files /include/expressions.h and /include/money.h.
.EP

.SH Classes

.SI 3
* %^BOLD%^function_thing%^RESET%^
class function_thing {
int type;
function value;
int * arg_types;
}

.EI

.SI 3
* %^BOLD%^variable_thing%^RESET%^
class variable_thing {
int type;
function value;
}

.EI


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_allowed_function%^RESET%^
.EI
.SI 5
void add_allowed_function(string name, int type, int * args, function value)
.EI
.SP 7 5

This method adds in an allowe function and specifies the types it
takes.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the function
.EP
.SP 9 5
type - the return type of the function
.EP
.SP 9 5
args - the types of the arguements (an array)
.EP
.SP 9 5
value - the function to call to get the value

.EP

.SI 3
* %^BOLD%^add_allowed_variable%^RESET%^
.EI
.SI 5
void add_allowed_variable(string name, int type, function value)
.EI
.SP 7 5

This method adds in an allowed variable and specifies it's type.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the variable
.EP
.SP 9 5
type - the type of the variable
.EP
.SP 9 5
value - the value of the variable

.EP

.SI 3
* %^BOLD%^evaluate_expression%^RESET%^
.EI
.SI 5
class parse_node evaluate_expression(class parse_node * expr, mixed args ...)
.EI
.SP 7 5

This method evaluates the expression and creates a nice end result
thingy.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
expr - the exrpession to evaluate
.EP
.SP 9 5
args - the optional args parsed into the various function calls
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the type and value of the expression, 0 if failed

.EP

.SI 3
* %^BOLD%^parse_boolean_string%^RESET%^
.EI
.SI 5
class parse_node * parse_boolean_string(string str)
.EI
.SP 7 5

A very small recursive decent parser which must return a boolean
value.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the input string
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the array control structure

.EP

.SI 3
* %^BOLD%^parse_integer_string%^RESET%^
.EI
.SI 5
class parse_node * parse_integer_string(string str)
.EI
.SP 7 5

A very small recursive decent parser which must return a integer
value.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the input string
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the array control structure

.EP

.SI 3
* %^BOLD%^parse_money_string%^RESET%^
.EI
.SI 5
class parse_node * parse_money_string(string str)
.EI
.SP 7 5

A very small recursive decent parser which must return a money
value.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the input string
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the array control structure

.EP

.SI 3
* %^BOLD%^query_expression_string%^RESET%^
.EI
.SI 5
string query_expression_string(class parse_node * expr, int brief)
.EI
.SP 7 5

This method returns the expresion as a string.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
expr - the expression
.EP
.SP 9 5
brief - don't expand the variable names
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the expression as a string

.EP

.SI 3
* %^BOLD%^query_function_type%^RESET%^
.EI
.SI 5
int query_function_type(string name)
.EI
.SP 7 5

This method returns the type of the function.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the function to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the type of the function, EXPRESSION_TYPE_ERROR if there is no
function

.EP

.SI 3
* %^BOLD%^query_function_value%^RESET%^
.EI
.SI 5
function query_function_value(string name)
.EI
.SP 7 5

This method returns the value of the function.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the function to find
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the value of the function, 0 if not found

.EP

.SI 3
* %^BOLD%^query_last_expression_error%^RESET%^
.EI
.SI 5
string query_last_expression_error()
.EI
.SP 7 5

This method returns the last error if there was an error in the parsing.
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the last error

.EP

.SI 3
* %^BOLD%^query_null_type%^RESET%^
.EI
.SI 5
class parse_node query_null_type(int type)
.EI
.SP 7 5

This method returns a null object of the specified type.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the type to get the null object of
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the null object

.EP

.SI 3
* %^BOLD%^query_operator_name%^RESET%^
.EI
.SI 5
string query_operator_name(int operator)
.EI
.SP 7 5

This method returns the string value of the operator name.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
operator - the operator name to return
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the string name of the operator

.EP

.SI 3
* %^BOLD%^query_type_name%^RESET%^
.EI
.SI 5
string query_type_name(int type)
.EI
.SP 7 5

This method returns the name of the type.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the type to get the string name of
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the string name of the type

.EP

.SI 3
* %^BOLD%^query_variable_type%^RESET%^
.EI
.SI 5
int query_variable_type(string name)
.EI
.SP 7 5

This method returns the type of the variable.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the variable to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the type of the variable, EXPRESSION_TYPE_ERROR if there is no
variable

.EP

.SI 3
* %^BOLD%^query_variable_value%^RESET%^
.EI
.SI 5
function query_variable_value(string name)
.EI
.SP 7 5

This method returns the value of the variable.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
name - the name of the variable to find
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
the value of the variable, 0 if not found

.EP


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^is_alpha%^RESET%^
.EI
.SI 5
int is_alpha(int alpha)
.EI
.SP 7 5

This method checks to see if the passed in character is an alpha
or not.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
alpha - the character to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if it alpha, 0 if not

.EP

.SI 3
* %^BOLD%^is_number%^RESET%^
.EI
.SI 5
int is_number(int number)
.EI
.SP 7 5

This method checks to see if the passed in character is a number
or not.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
number - the character to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if it is a number, 0 if not

.EP

.SI 3
* %^BOLD%^is_number_type%^RESET%^
.EI
.SI 5
int is_number_type(int type)
.EI
.SP 7 5

This checks to make sure that the type is a number based type.
This can be controlled to make sure that any added types are also
allowed to be treated as numbers.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
type - the type to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if it is a number, 0 if not

.EP

.SI 3
* %^BOLD%^is_space%^RESET%^
.EI
.SI 5
int is_space(int space)
.EI
.SP 7 5

This method checks to see if the passed in character is a space or
a space equivilant.
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
space - the character to check
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
1 if it is a space, 0 if not

.EP

.SI 3
* %^BOLD%^query_token%^RESET%^
.EI
.SI 5
string * query_token(string str)
.EI
.SP 7 5

This method find the next token.  It can be overrideen in higher things
to deal with special token types (ie: money).
.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
str - the input string
.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
({ token, rest })

.EP


