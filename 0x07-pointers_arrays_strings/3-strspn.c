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
	unsigned int i, j, c = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	for (j = 0; *(accept + j) != '\0'; j++)
		if (*(accept + j) == *(s + i))
		{
			c++;
			break;
		}

	return (c);
}
