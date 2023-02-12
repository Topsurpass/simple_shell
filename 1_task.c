#include "main.h"

/**
 * simple_shell - execute a simple shell program
 *
 * Return: nothing
 */

void simple_shell(void)
{
	char *my_command = NULL;
	char **argv = NULL;
	size_t length = 0;
	int size, rtr_val, status, wrd_count;
	pid_t pid;

	printf("$ ");
	while ((size = getline(&my_command, &length, stdin)) != -1)
	{
		if (my_command[size - 1] == '\n')
			my_command[size - 1] = '\0';
		pid = fork();
		if (pid == 0)
		{
			_setenv("TERM", "xterm-256color", 1);
			argv = split_str(my_command);
			wrd_count = count_words(argv);
			if (wrd_count == 1)
			{
				rtr_val = execve(argv[0], argv, environ);
				if (rtr_val == -1)
				{
					char *prog_path;

					prog_path = malloc(sizeof(char) * (6 + _strlen(argv[0])));
					_strcpy(prog_path, "/bin/");
					_strcat(prog_path, argv[0]);
					execve(prog_path, argv, environ);
					perror("Error");
				}
			}
			else if (wrd_count > 1)
				perror("Error");
		}
		else if (pid > 0)
			wait(&status);
		else
			perror("Error");
		printf("$ ");
	}
}
