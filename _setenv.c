#include "main.h"

/**
 * _setenv - set environment variable
 * @key: the environment variable name
 * @value: the environment variable value
 * @overwrite: flag to determine if environment variable should be
 * overwrite or not
 *
 * Return: 0 (successful), -1 (failed)
 */

int _setenv(const char *key, const char *value, int overwrite)
{
	char *new_environ;
	int key_length, value_length, i, j;

	key_length = _strlen(key);
	value_length = _strlen(value);

	new_environ = malloc(sizeof(char) * (key_length + value_length + 2));

	if (new_environ == NULL)
		return (-1);

	_strcpy(new_environ, key);
	_strcat(new_environ, "=");
	_strcat(new_environ, value);

	for (i = 0; environ[i] != NULL; i++)
	{
		j = 0;
		while (environ[i][j] == key[j] && key[j] != '\0')
			j++;
		if (key[j] == '\0' && environ[i][j] == '=')
		{
			if (overwrite == 1)
			{
				environ[i] = new_environ;
				return (0);
			}
			else
				return (0);
		}
	}
	environ = _realloc(environ, (sizeof(char *) * i), (sizeof(char *) * (i + 2)));
	environ[i] = new_environ;
	environ[i + 1] = NULL;
	return (0);
}
