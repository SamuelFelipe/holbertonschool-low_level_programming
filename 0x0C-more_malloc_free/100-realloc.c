#include "holberton.h"

/**
 * _realloc - reallocate memory
 * @ptr: pointer to the memory previously allocated
 * @old_size: <=
 * @new_size: <=
 *
 * Return: on succes return pointer to the new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *r;

	if (ptr == NULL)
	{
		r = malloc(new_size);
		if (r == NULL)
			return (NULL);
		return (r);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	r = malloc(new_size);
	if (r == NULL)
		return (NULL);
	free(ptr);
	return (r);
}
