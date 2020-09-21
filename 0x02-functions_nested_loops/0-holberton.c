#include <stdio.h>
#include "holberton.h"

/**
 * main - print "holberton"
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i;
	char hol[9] = {"Holberton"};
	for (i = 0; i < 9; i++)
		_putchar(hol[i]);

	_putchar('\n');
	return (0);
}
