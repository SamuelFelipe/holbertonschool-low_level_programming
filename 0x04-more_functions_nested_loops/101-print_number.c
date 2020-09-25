#include "holberton.h"

/**
 * print_number - print a integer
 * @n: input
 *
 * Return: none
 */

void print_number(int n)
{
	int i, k, l, c;

	l = 0;
	c = 1;
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	k = n;
	while (k >= 10)
	{
		k = k / 10;
		l++;
	}
	l++;
	for (i = 1; i < l; i++)
		c = c * 10;
	for (i = 1; i < l; i++)
	{
		_putchar((n / c) % 10 + '0');
		c = c / 10;
	}
	_putchar((n % 10) + '0');
}
