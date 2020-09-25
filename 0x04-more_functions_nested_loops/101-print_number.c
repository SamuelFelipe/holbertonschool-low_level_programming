#include "holberton.h"

/**
 * print_number - print a integer
 * @n: input
 *
 * Return: none
 */

void print_number(int n)
{
	int i, k, l;

	l = 0;
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
	k = 1;
	for (i = 1; i < l; i++)
		k = k * 10;
	for (i = 1; i < l; i++)
	{
		_putchar((n / k) % 10 + '0');
		k = k / 10;
	}
	_putchar((n % 10) + '0');
}
