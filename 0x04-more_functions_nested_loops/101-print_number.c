#include "holberton.h"

/**
 * print_number - print a integer
 * @n: input
 *
 * Return: none
 */

void print_number(int n)
{
	int i, aux, lon;

	lon = 0;
	if (n < 0)
	{
		_putchar('-');
		n = (n * -1);
	}
	aux = n;
	while (aux >= 10)
	{
		aux = aux / 10;
		lon++;
	}
	lon++;
	aux = 1;
	for (i = 1; i < lon; i++)
		aux = aux * 10;
	for (i = 1; i < lon; i++)
	{
		_putchar((n / aux) % 10 + '0');
		aux = aux / 10;
	}
	_putchar((n % 10) + '0');
}
