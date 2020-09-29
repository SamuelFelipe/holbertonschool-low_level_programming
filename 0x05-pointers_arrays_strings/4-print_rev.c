#include "holberton.h"

/**
 * print_rev - print a string in reverse followed by a new line
 * @s: string to reverse
 *
 * Return: none
 */

void print_rev(char *s)
{
	int l = 0;

	while (*(s + l + 1) != '\0')
		l++;

	while (*(s + l) != '\0')
	{
		_putchar(*(s + l));
		l--;
	}
	_putchar('\n');
}
