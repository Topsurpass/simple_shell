#include "main.h"

/**
 * _strcpy - copy string from source to destination buffer
 * @dest: the destination buffer
 * @src: The source string
 *
 * Return: the destination buffer
 */
char *_strcpy(char *dest, const char *src)
{
	char *new_str;

	new_str = malloc(sizeof(char) * (_strlen(src) + 1));
	if (new_str == NULL)
		return ("");
	new_str = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (new_str);
}
