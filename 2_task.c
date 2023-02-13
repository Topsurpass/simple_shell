#include "main.h"

/**
 * simple_shell - execute a simple shell program
 * @prog_Name: Name of the program to indicate error
 *
 * Return: nothing
 */

void simple_shell(char *prog_Name)
{
	char *my_command = NULL;
	char **argv = NULL;
	size_t length = 0;
	int size, rtr_val, status;
	pid_t pid;

	while (1)
	{
		printf("#cisfun$ ");
		size = getline(&my_command, &length, stdin);
		if (size != -1)
		{
			if (my_command[size - 1] == '\n')
				my_command[size - 1] = '\0';
			pid = fork();
			if (pid == 0)
			{
				argv = split_str(my_command);
				rtr_val = execve(argv[0], argv, NULL);

				if (rtr_val == -1)
			}
			else if (pid > 0)
				wait(&status);
			else
				perror(prog_Name);
		}
		else
			perror(prog_Name);
	}
}
