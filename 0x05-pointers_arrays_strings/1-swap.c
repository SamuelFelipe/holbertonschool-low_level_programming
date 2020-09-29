#include "holberton.h"

/**
 * swap_int - swap the value of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
