#include "holberton.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: number of bytes
 *
 * Return: pointer, if fails return 98
 */

void *malloc_checked(unsigned int b)
{
	void *r = NULL;

	r = malloc(b);

	if (r == NULL)
		exit(98);

	return ((void *) r);
}
