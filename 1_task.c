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
	int size, rtr_val, status, wrd_count, exit_status = 0;
	pid_t pid;

	printf("#cisfun$ ");
	while ((size = getline(&my_command, &length, stdin)) != -1)
	{
		my_command[size - 1] = '\0';
		pid = fork();
		if (pid == 0)
		{
			argv = split_str(my_command);
			wrd_count = count_words(argv);
			if (wrd_count != 0)
			{
				rtr_val = execve(argv[0], argv, NULL);
				if (rtr_val == -1)
				{
					perror(prog_Name);
					exit_status = 1;
					break;
				}
			}
			exit_status = 1;
			break;
		}
		else if (pid > 0)
			wait(&status);
		else
			perror(prog_Name);
		printf("#cisfun$ ");
		if (exit_status)
			break;
	}
}
