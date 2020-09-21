#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * islower - return a number according to the char of input
 *
 * Return: 1 if the character is an lowercase one otherwise return 0
 */

int _islower(char c)
{
	if (isupper(c))
		return (0);
	else
		return (1);
}


/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
