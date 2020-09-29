#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: none
 */

void rev_string(char *s)
{
	char c;
	int i, l = 0;

	while (*(s + l) != '\0')
		l++;
	if (l % 2 == 0)
		for (i = 0; i < (l / 2); i++)
		{
			c = *(s + i);
			*(s + i) = *(s + (l - 1 - i));
			*(s + (l - 1 - i)) = c;
		}
	else
		for (i = 0; i < (l / 2) + 1; i++)
		{
			c = *(s + i);
			*(s + i) = *(s + (l - 1 - i));
			*(s + (l - 1 - i)) = c;
		}
}
