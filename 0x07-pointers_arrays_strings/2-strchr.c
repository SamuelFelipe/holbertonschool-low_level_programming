#include "holberton.h"

/**
 * _strchr - locate a character in a string
 * @s: target
 * @c: char to find
 *
 * Return: pointer to the first match char, if any one match return NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0, j, m = 0;

	while (*(s + i) != '\0')
		i++;
	for (j = 0; j <= i; j++)
	{
		if (*(s + j) == c)
		{
			m = 1;
			break;
		}
	}
	if (m == 1)
		return (&s[j]);
	else
		return ('\0');
}
