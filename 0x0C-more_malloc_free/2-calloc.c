#include "holberton.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of the elements
 *
 * Return: pointer to allocated space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *r = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	r = malloc(nmemb * size);

	if (r == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(r + i) = 0;

	return (r);
}
