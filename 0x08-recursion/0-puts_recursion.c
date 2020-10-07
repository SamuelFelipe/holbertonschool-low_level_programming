#include "holberton.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: string to print
 *
 * Return: none
 */

void _puts_recursion(char *s)
{
	char *n;

	n = &(*(s + 1));

	if (*s && *(s + 1))
	{
		_putchar(*s);
		_puts_recursion(n);
	}
	else if (*s && !*(s + 1))
	{
		_putchar(*s);
		_putchar('\n');
		return;
	}
	else
		return;
}
