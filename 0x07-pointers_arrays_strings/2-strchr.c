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
	int i = 0, m = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			m = 1;
			break;
		}
		i++;
	}
	if (m == 1)
		return (&s[i]);
	else
		return ('\0');
}
