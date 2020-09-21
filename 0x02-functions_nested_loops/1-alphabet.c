#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - print the alphabet
 *
 * Return: none
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();
	_putchar ('\n');
	return (0);
}
