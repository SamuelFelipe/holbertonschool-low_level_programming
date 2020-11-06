#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input string
 *
 * Return: on succes converted number otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, r = 0, bit;

	for (i = 0; *(b + i); i++)
	{
		if (*(b + i) != 48 && *(b + i) != 49)
			return (0);
		bit = *(b + i) - '0';
		r = (r * 2) + bit;
	}

	return (r);
}
