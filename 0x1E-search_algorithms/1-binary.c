#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: array to use
 * @size: array size
 * @value: value to find
 *
 * Return: on succes value index othewhise return -1
 */

int binary_search(int *array, size_t size, int value)
{
		int L, R, m = 0;

		if (!array)
				return (-1);

		L = 0;
		R = (int) size - 1;

		while (1)
		{
				if (L > R)
						return (-1);

				print_array(array, L, R);
				m = (L + R) / 2;

				if (array[m] < value)
						L = m + 1;
				else if (array[m] > value)
						R = m - 1;
				else
						return (m);
		}
}


/**
 * print_array - print the actual array
 *
 * @array: array to print
 * @L: array position
 * @R: array position
 *
 * Return: none
 */


void print_array(int *array, int L, int R)
{
		int i;

		printf("Searching in array: ");

		for (i = L; i < R; i++)
		{
				printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
}
