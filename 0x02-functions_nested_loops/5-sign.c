#include "holberton.h"

/**
 * print_sign - print the sing of the input
 * @n: input integer
 *
 * Return: 1 if c is positive, -1 negative, 0 to zero
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else
	{
		_putchar('-');
		return (-1);
	}

}
