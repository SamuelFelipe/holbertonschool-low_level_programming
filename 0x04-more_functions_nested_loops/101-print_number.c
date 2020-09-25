#include "holberton.h"

/**
 * print_number - print a integer
 * @n: input
 *
 * Return: none
 */

void print_number(int n)
{
	int j, i, l;

	if (n < 0)
	{
		_putchar('-');
		j = n * -1;
	}
	else
		j = n;

	l = 1;
	i = j;

	while (i > 9)
	{
		l *= 10;
		i /= 10;
	}

	for (; l >= 1; l /= 10)
		_putchar((j / l) % 10 + '0');	
}
