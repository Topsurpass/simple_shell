#include "main.h"

/**
 * _strlen - Get the length of a string
 * @str: The string
 *
 * Return: the length of the string
 */

int _strlen(const char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return (0);
	i++;
	return (i + _strlen(str + i));
}
