#include "holberton.h"

/**
 * string_toupper - pass every character to an uppercase one
 * @str: string to convert
 *
 * Return: result string
 */

char *string_toupper(char *str)
{
	int l = 0, i;

	while (*(str + l) != '\0')
		l++;

	for (i = 0; i < l; i++)
		if (*(str + i) - '0' >= 49 && *(str + i) - '0' <= 74)
			*(str + i) = ((*(str + i) - '0') - 32) + '0';

	return (str);
}
