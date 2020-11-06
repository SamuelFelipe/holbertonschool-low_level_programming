#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Return: none
 */

void print_binary(unsigned long int n)
{
	unsigned long int r = 4294967296, m = 0;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	for (; r > 0; r >>= 1)
		if (r & n)
		{
			_putchar(49);
			m = 1;
		}
		else if (m == 1)
			_putchar(48);
}
