#include "holberton.h"

/**
 * _strspn - get the leght of a prefix subtring
 * @s: input
 * @accept: accepted characters
 *
 * Return: leght
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, m, r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		m = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				m = 1;
				break;
			}
		}

		if (m == 1)
			r += 1;
		else
			break;
	}
	return (r);
}
