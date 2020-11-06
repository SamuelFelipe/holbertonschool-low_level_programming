#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: bit to change
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int r = 1;

	if (index > 63)
		return (-1);
	r <<= index;

	*n = *n | r;

	return (1);
}
