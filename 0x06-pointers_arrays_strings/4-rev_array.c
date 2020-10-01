#include "holberton.h"

/**
 * reverse_array - reverse n int array
 * @a: array
 * @n: elements of a
 *
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int i, aux;

	for (i = 0; i < n / 2; i++)
	{
		aux = *(a + i);
		*(a + i) = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = aux;
	}

}
