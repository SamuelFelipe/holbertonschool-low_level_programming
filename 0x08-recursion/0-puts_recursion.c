#include "holberton.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: string to print
 *
 * Return: none
 */

void _puts_recursion(char *s)
{
	if (*s && *(s + 1))
	{
		_putchar(*s);
		_puts_recursion(&(*(s + 1)));
	}
	else if (*s && !*(s + 1))
	{
		_putchar(*s);
		_putchar('\n');
		return;
	}
}
