#include "holberton.h"

/**
 * _puts - print a string followed by a new line
 * @str: string to print
 *
 * Return: none
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
