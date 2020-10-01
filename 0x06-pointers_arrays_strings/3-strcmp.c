#include "holberton.h"

/**
 * _strcmp - compare tow string and return != 0 value if they are
 * diferent
 * @s1: first string
 * @s2: second string
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0, i, l = 0, l1 = 0;

	while (*(s1 + l) != '\0')
		l++;
	while (*(s2 + l1) != '\0')
		l1++;

	for (i = 0; i < l || i < l1; i++)
		if (*(s1 + i) != *(s2 + i))
		{
			n = ((*(s1 + i) - '0') - ((*s2 + i) - '0'));
			break;
		}
	return (n);
}
