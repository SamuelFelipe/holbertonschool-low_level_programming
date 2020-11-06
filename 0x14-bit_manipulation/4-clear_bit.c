#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: bit to change
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int r = 1;

	if (index > 63)
		return (-1);
	r <<= index;

	if (!(r ^ *n))
		*n = r ^ *n;

	return (1);
}
