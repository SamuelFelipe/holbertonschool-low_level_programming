#include "holberton.h"

/**
 * flip_bits - number of bits you would need to
 * flip to get from one number to another
 * @n: input 1
 * @m: input 2
 *
 * Return: read up
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r = ULONG_MAX, d = 0;
	unsigned int c = 0;

	r <<= 63;
	if (n == m)
		return (0);
	d = n ^ m;

	for (; r > 0; r >>= 1)
		if (r & d)
			c++;
	return (c);
}
