#include "function_pointers.h"

/**
 * array_iterator - execute a funtion per each element in an array
 * @array: array
 * @size: size of the array
 * @action: funtion to use
 *
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
		action(*(array + i));
}
