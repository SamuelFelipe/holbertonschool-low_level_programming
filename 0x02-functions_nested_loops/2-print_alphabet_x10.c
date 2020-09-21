#include <stdio.h">
#include "holberton.h"

/**
 * print_alphabet - print the alphabet
 *
 * Return: none
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');

	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet_x10();

	return (0);
}
