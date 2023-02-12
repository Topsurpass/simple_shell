#include "main.h"

/**
 * count_words - count number of words in an array of string
 * @str: the string
 *
 * Return: number of words in a string
 */

int count_words(char **str)
{
	int counter = 0;

	while (str[counter])
		counter++;

	return (counter);
}
