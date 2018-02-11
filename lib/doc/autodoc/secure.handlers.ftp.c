.DT
ftp.c
$MUDNAME$ autodoc help
ftp.c

.SH Description
.SP 5 5

This method flushes out all the buffered stuff for the log files.

.EP
.SP 10 5

.EP

.SH Inherits
.SP 5 5
This class inherits the following classes /net/inherit/server.
.EP

.SH Includes
.SP 5 5
This class includes the following files /secure/include/socket_errors.h, /include/localtime.h, /secure/include/ftp.h and /secure/include/network.h.
.EP

.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^data_close_callback%^RESET%^
.EI
.SI 5
void data_close_callback(int fd)
.EI

.SI 3
* %^BOLD%^log_write%^RESET%^
.EI
.SI 5
void log_write(string name, string fmt, mixed * args ...)
.EI

.SI 3
* %^BOLD%^query_connections%^RESET%^
.EI
.SI 5
string * query_connections()
.EI


.SH Protected Functions
.SP 5 5
These are functions that only objects inheriting the class can access.
.EP

.SI 3
* %^BOLD%^check_connections%^RESET%^
.EI
.SI 5
void check_connections()
.EI

.SI 3
* %^BOLD%^check_dots%^RESET%^
.EI
.SI 5
int check_dots(mixed arg)
.EI

.SI 3
* %^BOLD%^data_conn%^RESET%^
.EI
.SI 5
void data_conn(int fd, string mess, string name, int type)
.EI

.SI 3
* %^BOLD%^data_listen_callback%^RESET%^
.EI
.SI 5
void data_listen_callback(int fd)
.EI

.SI 3
* %^BOLD%^data_read_callback%^RESET%^
.EI
.SI 5
void data_read_callback(int fd, mixed mess)
.EI

.SI 3
* %^BOLD%^data_write_callback%^RESET%^
.EI
.SI 5
void data_write_callback(int fd)
.EI

.SI 3
* %^BOLD%^desc_f_object%^RESET%^
.EI
.SI 5
string desc_f_object(object o)
.EI

.SI 3
* %^BOLD%^desc_object%^RESET%^
.EI
.SI 5
string desc_object(mixed o)
.EI

.SI 3
* %^BOLD%^do_update%^RESET%^
.EI
.SI 5
void do_update(string name, int fd)
.EI

.SI 3
* %^BOLD%^eventNewConnection%^RESET%^
.EI
.SI 5
void eventNewConnection(int fd)
.EI

.SI 3
* %^BOLD%^eventRead%^RESET%^
.EI
.SI 5
void eventRead(int fd, string str)
.EI

.SI 3
* %^BOLD%^eventSocketClosed%^RESET%^
.EI
.SI 5
void eventSocketClosed(int fd)
.EI

.SI 3
* %^BOLD%^get_cfile%^RESET%^
.EI
.SI 5
string get_cfile(string str)
.EI

.SI 3
* %^BOLD%^get_path%^RESET%^
.EI
.SI 5
string get_path(int fd, string str)
.EI

.SI 3
* %^BOLD%^logout%^RESET%^
.EI
.SI 5
void logout(int fd)
.EI

.SI 3
* %^BOLD%^ls%^RESET%^
.EI
.SI 5
string ls(string path, int mask)
.EI

.SI 3
* %^BOLD%^parse_comm%^RESET%^
.EI
.SI 5
void parse_comm(int fd, string str)
.EI

.SI 3
* %^BOLD%^passive%^RESET%^
.EI
.SI 5
void passive(class session sess)
.EI

.SI 3
* %^BOLD%^read_connection%^RESET%^
.EI
.SI 5
void read_connection(int fd, string path, int append)
.EI

.SI 3
* %^BOLD%^s_address%^RESET%^
.EI
.SI 5
varargs string s_address(mixed first, int port)
.EI

.SI 3
* %^BOLD%^s_bind%^RESET%^
.EI
.SI 5
varargs int s_bind(int fd, int port, string str)
.EI

.SI 3
* %^BOLD%^setup_ftp%^RESET%^
.EI
.SI 5
void setup_ftp()
.EI


