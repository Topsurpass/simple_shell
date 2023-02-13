#include "main.h"

/**
 * chk_interactivity - check if shell is in interactive
 * mode or not
 * @shell_var: the shell environment variable
 * @term_var: the terminal environment variable
 *
 * Return: nothing
 */

void chk_interactivity(char *shell_var, char *term_var)
{
	char *shell = _getenv(shell_var);
	char *terminal = _getenv(term_var);
	char *shell_value = "/bin/bash";
	char *term_val = "xterm-256color";
	int i, j;

	i = 0, j = 0;
	while (shell[i] != '\0' && shell[i] == shell_value[i])
		i++;
	while (terminal[j] != '\0' && terminal[j] == term_val[j])
		j++;
	if (shell_value[i] == '\0' && term_val[j] == '\0')
		printf("#cisfun$ ");
	else
		printf("$ ");
}
