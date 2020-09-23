#include "holberton.h"

/**
 * print_times_table - print n times table, starting with 0
 * @n: input / how many times display the table
 * Return: none
 */

void print_times_table(int n)
{
	int i, j, r, c;

	if (n < 15 && n > 0)
	for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= n; j++)
	{
		r = j * i;
		if (i != 0 && j != 0)
		{
			if (r / 100 == 0 && r / 10 == 0)
			{
				for (c = 0; c < 3; c++)
					_putchar(' ');
				_putchar(r + '0'); }
			else if (r / 100 == 0)
			{
				for (c = 0; c < 2; c++)
					_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0'); }
			else
			{
				_putchar(' ');
				_putchar((r / 100) + '0');
				_putchar(((r / 10) % 10) + '0');
				_putchar((r % 10) + '0');
			}}
		else if (i == 0)
		{
			if (j <= n && j > 0)
			for (c = 0; c < 3; c++)
				_putchar(' ');
			_putchar('0'); }
		else
			_putchar('0');
		if (j < n)
			_putchar(','); }
	_putchar('\n');	}}
