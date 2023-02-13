#include "main.h"

/**
 * simple_shell - execute a simple shell program
 * @prog_Name: Name of the program to indicate error
 *
 * Return: nothing
 */

void simple_shell(char *prog_Name)
{
	char *my_command = NULL, *prog_path;
	char **argv = NULL;
	size_t length = 0;
	int size, rtr_val, status, exit_input = 0;
	pid_t pid;

	printf(":) ");
	while ((size = getline(&my_command, &length, stdin)) != -1)
	{
		my_command[size - 1] = '\0';
		if (_strcmp(my_command, "exit") == 0)
		{
			free(my_command);
			exit(0);
		}
		pid = fork();
		if (pid == 0)
		{
			argv = split_str(my_command);
			rtr_val = execve(argv[0], argv, NULL);
			if (rtr_val == -1)
			{
				prog_path = malloc(sizeof(char) * (6 + _strlen(argv[0])));
				_strcpy(prog_path, "/bin/");
				_strcat(prog_path, argv[0]);
				execve(prog_path, argv, NULL);
				perror(prog_Name);
				exit_input = 1;
				break;
			}
		}
		else if (pid > 0)
			wait(&status);
		else
			perror("Error");
		printf(":) ");
		if (exit_input)
			break;
	}
}
