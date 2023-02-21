# C - Simple Shell

## Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

| S/N | Task |
| --- | ---- |
| Task 0 | Write a beautiful code that passes the Betty checks |
| Task 1 | Write a UNIX command line interpreter. |
| Task 2 | Handle command lines with arguments |
| Task 3 | Handle the PATH |
| Task 4 | Implement the exit built-in, that exits the shell |
| Task 5 | Implement the env built-in, that prints the current environment |

Builtins
exit exits shell (Usage: exit [status])
env prints environmental variables (Usage: env)
setenv creates or modifies an environmental variable (Usage: setenv name value)
unsetenv removes an envrionmental variable (Usage: unsetenv name value)
cd changes directories (Usage: cd [-][~][path])
Functions and system calls used
read, signal, malloc, free, getcwd, chdir, access, execve, wait, write, exit

Description of what each file shows:
man_3_shell ------------------------ custom manpage for our simple shell
main.c ----------------------------- holds entrance into program
shell.h ---------------------------- holds prototypes of functions spread across all files
Helper files

prompt.c --------------------------- handles outline of shell's reprompting and executing
non_interactive.c ------------------ handles output when shell is called outside of shell
_realloc.c ------------------------- helper function handles reallocation
_strcat.c -------------------------- concatenates two strings
_strcmp.c -------------------------- compares if two strings match
_strcpy.c -------------------------- copies a string
_strdup.c -------------------------- duplicates a string
_str_tok.c -------------------------- (custom) tokenizes user's command input and returns array
c_str_tok.c ------------------------- tokenizes PATH to include ":" as Null, checks current dir
get_line.c ------------------------- (custom) reads user's typed input into buffer
_which.c --------------------------- appends command to PATHs, fleshes paths out, returns match
_cd.c ------------------------------ changes directories
linked_lists.c --------------------- adds and deletes nodes; prints and frees linked list
get_env.c -------------------------- finds and returns copy of environmental variable
env_linked_list.c ------------------ prints and creates linked list of envrionmental variables
set_unset_env.c -------------------- finds environment variable index node, sets and unsets
free_double_ptr -------------------- frees double pointers (user's command, arrays)
_execve.c -------------------------- executes and frees command, then exits program
__exit.c --------------------------- handles if user types exit or exit(value)
int_to_string.c -------------------- converts int to string to write error messages
print_error.c ---------------------- prints special error messages for certain fails
Environment
Language: C
OS: Ubuntu 14.04 LTS
Compiler: gcc 4.8.4
Style guidelines: Betty style
How To Install, Compile, and Use
Install and Compile

(your_terminal)$ git clone https://github.com/MelissaN/simple_shell.git
(your_terminal)$ cd simple_shell
(your_terminal)$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c -o simple_shell
Non-Interactive Mode

echo "ls -l" | ./simple_shell
Interactive Mode* Activate the shell

(your_terminal)$ ./simple_shell
$
Sample Usage

$ ls -al
total 4
-rw-rw-r-- 1 vagrant vagrant   234 Mar 28 19:32 file1.c
-rw-rw-r-- 1 vagrant vagrant    69 Mar 28 19:32 file2.c
$ echo "This is a pretty cool!"
This is pretty cool!
$ man ./man_1_simple_shell (opens our manpage for more information)
Stop and return to your original shell

$ exit
(your_terminal)$

$ Authors
Olowosuyi Temitope
Martha Akinlolu
