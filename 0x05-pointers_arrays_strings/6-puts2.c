#include "holberton.h"

/**
 * puts2 - print the par chars of a string
 * @str: string to print
 *
 * Return: none
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
	if (i % 2 == 0)
		_putchar(*(str + i));
	i++;
	}
	_putchar('\n');
}
