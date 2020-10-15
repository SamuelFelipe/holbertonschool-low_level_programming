#include "holberton.h"

/**
 * array_range - create an array from min to max integer numbers
 * @min: start point
 * @max: end
 *
 * Return: on succes pointer to an array, otherwise NULL
 */

int *array_range(int min, int max)
{
	int i, j;
	int *r;

	if (min > max)
		return (NULL);
	r = malloc((max - min + 1) * sizeof(int));
	if (r == NULL)
		return (NULL);

	for (j = 0, i = min; i <= max; i++, j++)
		*(r + j) = i;

	return (r);
}
