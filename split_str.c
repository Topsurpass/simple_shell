#include "main.h"

/**
 * split_str - Split a string into words using strtok
 * @str: the string to be splited into words
 *
 * Return: array of strings i.e each of the splitted words
 */

char **split_str(char *str)
{
	char **each_wrd = NULL;
	char *token = strtok(str, " ");
	int counter = 0;

	while (token)
	{
		each_wrd = realloc(each_wrd, sizeof(char *) * (counter + 1));
		each_wrd[counter] = malloc(strlen(token) + 1);
		strcpy(each_wrd[counter], token);
		token = strtok(NULL, " ");
		counter++;
	}
	each_wrd = realloc(each_wrd, sizeof(char *) * (counter + 1));
	each_wrd[counter] = NULL;

	return (each_wrd);
}
