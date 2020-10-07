#include "holberton.h"

/**
 * _strlen_recursion - print the length of a string
 * @s: string
 *
 * Return; lenght
 */

int _strlen_recursion(char *s)
{
	int r, c;
	if (*s)
	{
		c = 1;
		r = _strlen_recursion(s + 1);
		r += c;
	}
	else
		r = 0;

	return (r);
}
