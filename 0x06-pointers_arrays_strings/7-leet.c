#include "holberton.h"

/**
 * leet - encode a string into 1337
 * @str: input string
 *
 * Return: str
 */

char *leet(char *str)
{
	int l = 0, i, j;
	char *ch = {"aeotlAEOTL43071"};

	while (*(str + l) != '\0')
		l++;
	for (i = 0; i < l; i++)
	for (j = 0; j < 10; j++)
		if (*(str + i) == *(ch + j))
			*(str + i) = *(ch + (j + 5));

	return (str);
}
