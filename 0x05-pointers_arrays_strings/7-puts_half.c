#include "holberton.h"

/**
 * puts_half - print the second half of a string
 * @str: input
 *
 * Return: none
 */

void puts_half(char *str)
{
	unsigned int l = 0, i;

	while (*(str + l) != '\0')
		l++;

	if (l % 2 == 0)
	{
		l /= 2;
		for (i = 0; i < l; i++)
			_putchar(*(str + l + i));
	}
	else
	{
		l = (l - 1) / 2;
		for (i = 0; i < l; i++)
			_putchar(*(str + l + i));
	}
	_putchar('\n');
}
