#include "function_pointers.h"

/**
 * int_index - return the position of the first match
 * @array: array to evaluate
 * @size: size of the array
 * @cmp: funtion how evaluate
 *
 * Return: index of the first match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(*(array + i)))
			return (i);
	return (-1);
}
