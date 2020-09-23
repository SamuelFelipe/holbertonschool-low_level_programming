#include "holberton.h"

/**
 * times_table - print the 9 times table, starting with 0
 *
 * Return: none
 */

void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
		r = j * i;

		if (r / 10 == 0)
		{
			if (j != 0)
			_putchar(' ');
		}
		else
		_putchar((r / 10) + '0');

		_putchar((r % 10) + '0');

		if (j < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	}

}
