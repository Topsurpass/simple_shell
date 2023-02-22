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

## Builtins

exit exits shell (Usage: exit [status])

env prints environmental variables (Usage: env)

setenv creates or modifies an environmental variable (Usage: setenv name value)

unsetenv removes an envrionmental variable (Usage: unsetenv name value)

cd changes directories (Usage: cd [-][~][path])

## Functions and system calls used

read, signal, malloc, free, getcwd, chdir, access, execve, wait, write, exit

## Description of what each file shows:


shell.c ----------------------------- holds entrance into program

shell.h ---------------------------- holds prototypes of functions spread across all files

## Function files

_atoi.c ------------------ handles string conversion to integers

realloc.c ------------------------- helper function handles reallocation

str_func1.c -------------------------- Contains strings functions used

str_func2.c -------------------------- Continuation of strings functions used

str_func3.c -------------------------- Continuation of strings functions used

builtin_func1.c -------------------------- Contains builtin functions

builtin_func2.c -------------------------- Continuation of builtin functions

chng_variables.c -------------------------- Contains functions for changing variable names and aliases

parser.c -------------------------- Find command in specified PATH 

str_tokokenizer.c -------------------------- Tokenizes user's command input and returns array

handle_err1.c ------------------------- Handle shell error

handle_err2.c ------------------------- Continuation of functions that handle shell error

_getline.c ------------------------- Reads user's typed input into buffer

getinfo.c ------------------------------- Initializes the info struct that contains information necessary for our shell

history.c --------------------------- Handles shell history

memory.c ------------------------------ Handles memory re-allocation and free-ing of memory

linked_list1.c --------------------- adds and deletes nodes; prints and frees linked list

linked_list2.c --------------------- Continuation of linked list functions

environ.c -------------------------- Finds and returns copy of environmental variable

shell_loop.c ---------------------------- Loop through the shell

## Environment

Language: C

OS: Ubuntu 14.04 LTS

Compiler: gcc 4.8.4

Style guidelines: Betty style

## How To Install, Compile, and Use

Install and Compile

(your_terminal)$ git clone https://github.com/Topsurpass/simple_shell.git

(your_terminal)$ cd simple_shell

(your_terminal)$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c -o simple_shell

## Non-Interactive Mode

echo "ls -l" | ./simple_shell

## Interactive Mode* Activate the shell

(your_terminal)$ ./simple_shell

$

## Sample Usage

$ ls -al

total 4

-rw-rw-r-- 1 vagrant vagrant   234 Mar 28 19:32 file1.c

-rw-rw-r-- 1 vagrant vagrant    69 Mar 28 19:32 file2.c

$ echo "My simple shell program!"

My simple shell program!

## Stop and return to your original shell or parent program

$ exit

(your_terminal)$

## Authors

Olowosuyi Temitope

Martha Akinlolu
