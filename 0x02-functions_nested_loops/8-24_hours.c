#include "holberton.h"

/**
 * jack_bauer - print all posible combination of hours
 *
 * Return: none
 */

void jack_bauer(void)
{

	int i, j, k, l;

	for (i = 0; i < 3; i++)
	{
	for (j = 0; j < 10; j++)
	{
	for (k = 0; k < 6; k++)
	{
	for (l = 0; l < 10; l++)
	{
		if (i != 2 || j != 3 || k != 5 || l != 9)
		{
		_putchar(i + '0');
		_putchar(j + '0');
		_putchar(':');
		_putchar(k + '0');
		_putchar(l + '0');
		_putchar('\n');
		}
		else{
		_putchar('2');
		_putchar('3');
		_putchar(':');
		_putchar('5');
		_putchar('9');
		_putchar('\n');
			break;
		}
	}
	if (i == 2 && j == 3 && k == 5 && l == 9)
		break;
	}
	if (i == 2 && j == 3 && k == 5 && l == 9)
		break;
	}
	if (i == 2 && j == 3 && k == 5 && l == 9)
		break;
	}

}
