#include "holberton.h"

/**
 * _strncat - concatenate two strings with almost n bytes from src
 * @dest: target string
 * @src: string to add
 * @n: number of bytes
 *
 * Return: concatenate result
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, l = 0, l1 = 0;

	while (*(dest + l) != '\0')
		l++;
	while (*(src + l1) != '\0')
		l1++;
	for (i = 0; i < l1 && i < n; i++)
		*(dest + (l + i)) = *(src + i);

	return (dest);
}
