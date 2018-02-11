.DT
projects.c
$MUDNAME$ autodoc help
projects.c

.SH Description
.SP 5 5

A creator/project management handler for Lords. This handler tracks
projects and creators.

This handler is currently under development, please do not use!

.EP
.SP 10 5


Written by Ceres

.EP

.SH Classes

.SI 3
* %^BOLD%^creator%^RESET%^
class creator {
string * completed_projects;
int * projects_in_progress;
class note * notes;
}

.EI
.SP 7 5

This class stores information about which creators are working on which
projects and which projects they have completed.

.EP

.SI 3
* %^BOLD%^note%^RESET%^
class note {
string author;
int date;
string contents;
}

.EI
.SP 7 5

This class is used to store notes about a given project.

.EP

.SI 3
* %^BOLD%^project%^RESET%^
class project {
string name;
string description;
class note * notes;
int target_completion_date;
int estimated_completion_date;
string progress_so_far;
int date_started;
int date_completed;
string * assigned_to;
}

.EI
.SP 7 5

This class is the project itself.

.EP


.SH Public Functions
.SP 5 5
These are functions that everyone can access.
.EP

.SI 3
* %^BOLD%^add_project_note%^RESET%^
.EI
.SI 5
int add_project_note(string domain, int pid, string author, string note)
.EI
.SP 7 5

Add a note to a project.

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
domain - The domain this project belongs in.
.EP
.SP 9 5
pid - The id of the project.
.EP
.SP 9 5
author - The author of the note.
.EP
.SP 9 5
note - The note to be added.

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
int

.EP

.SI 3
* %^BOLD%^create_project%^RESET%^
.EI
.SI 5
int create_project(string domain, string name, string desc)
.EI
.SP 7 5

Create a new project.

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
domain - The domain this project belongs in.
.EP
.SP 9 5
name - The name of the project.
.EP
.SP 9 5
description - A description of the project.

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
int

.EP

.SI 3
* %^BOLD%^delete_project%^RESET%^
.EI
.SI 5
int delete_project(string domain, int pid)
.EI
.SP 7 5

Delete a project

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
domain - The domain this project belongs in.
.EP
.SP 9 5
pid - The id of the project.

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
int

.EP

.SI 3
* %^BOLD%^print_info%^RESET%^
.EI
.SI 5
void print_info(string domain)
.EI

.SI 3
* %^BOLD%^query_all_projects%^RESET%^
.EI
.SI 5
string * query_all_projects(string domain, string creator)
.EI

.SI 3
* %^BOLD%^query_projects%^RESET%^
.EI
.SI 5
string * query_projects(string domain, string creator)
.EI

.SI 3
* %^BOLD%^set_assigned_to%^RESET%^
.EI
.SI 5
int set_assigned_to(string domain, int pid, string * assigned)
.EI
.SP 7 5

Assign a project to a creator (or creators).

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
domain - The domain this project belongs in.
.EP
.SP 9 5
pid - The id of the project.
.EP
.SP 9 5
date - The creators assigned.

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
int

.EP

.SI 3
* %^BOLD%^set_completed%^RESET%^
.EI
.SI 5
int set_completed(string domain, int pid)
.EI
.SP 7 5

Mark a project as completed.

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
domain - The domain this project belongs in.
.EP
.SP 9 5
pid - The id of the project.

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
int

.EP

.SI 3
* %^BOLD%^set_estimated_date%^RESET%^
.EI
.SI 5
int set_estimated_date(string domain, int pid, int date)
.EI
.SP 7 5

Set the currently estimated completion date for a project.

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
domain - The domain this project belongs in.
.EP
.SP 9 5
pid - The id of the project.
.EP
.SP 9 5
date - The estimated completion date.

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
int

.EP

.SI 3
* %^BOLD%^set_progress%^RESET%^
.EI
.SI 5
int set_progress(string domain, int pid, string progress)
.EI
.SP 7 5

Set the progress for far for a project. This may be a date, a percentage
completion or even an estimate of work left, which it is will be determined
by the creator and/or lord.

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
domain - The domain this project belongs in.
.EP
.SP 9 5
pid - The id of the project.
.EP
.SP 9 5
date - The progress so far.

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
int

.EP

.SI 3
* %^BOLD%^set_start_date%^RESET%^
.EI
.SI 5
int set_start_date(string domain, int pid, int date)
.EI
.SP 7 5

Set the date a project was started or assigned to a creator.

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
domain - The domain this project belongs in.
.EP
.SP 9 5
pid - The id of the project.
.EP
.SP 9 5
date - The start date.

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
int

.EP

.SI 3
* %^BOLD%^set_target_date%^RESET%^
.EI
.SI 5
int set_target_date(string domain, int pid, int date)
.EI
.SP 7 5

Set the target completion date for a project.

.EP
.SI 7
%^BOLD%^Parameters:%^RESET%^
.EI
.SP 9 5
domain - The domain this project belongs in.
.EP
.SP 9 5
pid - The project id (this must be unique within a domain).
.EP
.SP 9 5
date - The target completion date.

.EP
.SI 7
%^BOLD%^Returns:%^RESET%^
.EI
.SP 9 5
int

.EP


