#include "holberton.h"

/**
 * print_triangle - print a triangle with le leght of the input
 * @size - size of the triangle
 *
 * Return - none
 */


void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
	for (j = size - i; j > 0; j--)
		_putchar(' ');
	for (k = 1; k <= 0 + i; k++)
		_putchar('#');
	_putchar('\n');
	}

}
