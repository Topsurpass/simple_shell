#include "main.h"

/**
 * _strcmp - compare two strings
 * @str1: first string
 * @str2: second string
 *
 * Return: 0 if both strings are exactly the same
 */

int _strcmp(char *str1, char *str2)
{
	int i = 0;

	while (*(str1 + i) == *(str2 + i) && *(str1 + i))
		i++;

	if (*(str2 + i))
		return (*(str1 + i) - *(str2 + i));
	else
		return (0);
}
