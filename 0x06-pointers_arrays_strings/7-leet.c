#include "holberton.h"

/**
 * leet - encode a string into 1337
 * @str: input string
 *
 * Return: str
 */

char *leet(char *str)
{
	int i, j;
	char ch[] = "aeotlAEOTL43071";

	for (i = 0; *(str + i) != '\0'; i++)
	for (j = 0; j < 10; j++)
		if (*(str + i) == *(ch + j))
			*(str + i) = *(ch + (j + 5));

	return (str);
}
