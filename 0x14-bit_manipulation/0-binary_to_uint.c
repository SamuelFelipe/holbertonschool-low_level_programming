#include "holberton.h"

/**
 * _pow - calculate a bit value
 * @p: bit value
 * @e: bit position
 *
 * Return: result
 */

unsigned int _pow(int p, unsigned int e)
{
	unsigned int r = 2, i;

	if (p == 0)
		return (0);
	else if (e == 1)
		return (p);

	for (i = 2; i < e; i++)
		r *= 2;

	return (r);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input string
 *
 * Return: on succes converted number otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0, i, l = 0;

	if (!*b)
		return (0);

	while (*(b + l))
		l++;
	for (i = 1; i <= 8 && l != 0; i++, l--)
	{
		if (*(b + l - 1) >= 48 && *(b + l - 1) <= 57)
			r += _pow((*(b + l - 1) - '0'), i);
		else
			return (0);
	}
	return (r);
}
