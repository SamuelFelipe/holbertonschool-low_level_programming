#include "holberton.h"

/**
 * create_array - create and initializes an array
 * @size: size
 * @c: intializer
 *
 * Return: if size is higher than 1 and succes return pointer to the string
 * othewise NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *r;

	if (size == 0)
		return (NULL);
	r = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		*(r + i) = c;
	}
	return (r);
}
