#include "holberton.h"

/**
 * more_numbers - print 10 times the number from 0 to 14,
 * followed by a new line each time
 *
 * Return: none
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i / 10 != 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
