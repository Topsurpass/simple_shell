#include "main.h"

/**
 * _strcat - concatenate 2 strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to a newly allocated space in memory which
 * contain dest followed by src
 */
char *_strcat(char *dest, const char *src)
{
	char *new_str;

	new_str = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (new_str);
}
