#include "holberton.h"

/**
 * _memset - fill the first n bytes before the area pointed
 * @s: start point
 * @b: constant fill byte
 * @n: number of bytes
 *
 * Return: s address
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
