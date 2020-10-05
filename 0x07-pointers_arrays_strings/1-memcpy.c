#include "holberton.h"

/**
 * _memcpy - copy n bytes of a memory area
 * @dest: target
 * @src: source
 * @n: number of bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
