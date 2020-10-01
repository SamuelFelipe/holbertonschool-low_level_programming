#include "holberton.h"

/**
 * _strcat - concatenate two strings
 * @dest: first part of the returned string
 * @src: second part of the returned string
 *
 * Return: string concatenated
 */

char *_strcat(char *dest, char *src)
{
	int l = 0, l1 = 0, i;

	while (*(dest + l) != '\0')
		l++;
	while (*(src + l1) != '\0')
		l1++;
	for (i = 0; i < l1; i++)
		*(dest + (l + i))  = *(src + i);

	return (dest);
}
