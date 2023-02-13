#include "main.h"

/**
 * _getenv - get environment value for a particular key
 * @key: the environment key
 *
 * Return: an array of characters containing the environment
 * value
 */

char *_getenv(const char *key)
{
	int i, j, key_length;

	key_length = _strlen(key);
	for (i = 0; environ[i] != NULL; i++)
	{
		j = 0;
		while (environ[i][j] == key[j] && key[j] != '\0')
			j++;
		if (key[j] == '\0' && environ[i][j] == '=')
			return (&environ[i][key_length + 1]);
	}

	return (NULL);
}
