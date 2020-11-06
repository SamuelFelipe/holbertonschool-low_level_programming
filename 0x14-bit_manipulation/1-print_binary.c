#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Return: none
 */

void print_binary(unsigned long int n)
{
	long int j, i, a;
	unsigned long int aux;

	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}

	for (aux = n, i = 0; aux != 1; aux /= 2, i++)
		;
	for (a = i, aux = n; a > 0; a--)
	{
		i = a;
		for (; i > 0; i--, n /= 2)
			j = (n / 2) % 2;
		_putchar(j + '0');
		n = aux;
	}

	j = n % 2;
	_putchar(j + '0');
}
