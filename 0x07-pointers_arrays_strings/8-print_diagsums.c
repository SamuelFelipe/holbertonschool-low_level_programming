#include "holberton.h"

/**
 * print_diagsums - print the sum of the diagonal numbers
 * @a: matriz
 * @size: matriz size
 *
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum = 0;

	for (i = 0; i < size; i++)
		sum += *(a + (i + (i * size)));
	printf("%d, ", sum);
	sum = 0;
	for (j = 0, i = size - 1; i >= 0; i--, j++)
		sum += *(a + (j + (i * size)));
	printf("%d\n", sum);
}
