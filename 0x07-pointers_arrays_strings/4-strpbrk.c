#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: target string
 * @accept: accepted characters
 *
 * Return: pointer to the first ocurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int i, m = 0, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
			if (*(s + i) == *(accept + j))
			{
				m = 1;
				break;
			}
		if (m == 1)
			break;
	}

	return (&s[i]);
}
