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
	unsigned int l = 0, ml = 0, i, j, c = 0;

	while (*(s + l) != '\0')
		l++;
	while (*(accept + ml) != '\0')
		ml++;

	for (i = 0; i < l; i++)
	for (j = 0; j < ml; j++)
		if (*(accept + j) == *(s + i))
			c++;
	return (l - c);
}
