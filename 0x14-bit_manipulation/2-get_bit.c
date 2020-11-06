#include "holberton.h"

/**
 * get_bit - get the value of the bit in the index
 * @n: number
 * @index: <=
 *
 * Return: on succes bit value, otherwise -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int r = 1;

	r <<= index;

	if (r > n)
		return (-1);

	r = r & n;

	if (r == 0)
		return (0);
	else
		return (1);
	return (-1);
}
