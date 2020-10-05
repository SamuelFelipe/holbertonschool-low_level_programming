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
	int i = 0;
	char *f = NULL;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			f = s + i;
			break;
		}
		i++;
	}

	return (f);
}
