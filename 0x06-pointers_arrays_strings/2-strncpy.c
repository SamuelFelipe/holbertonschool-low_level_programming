#include "holberton.h"

/**
 * _strncpy - copy a string into dest
 * @dest: target
 * @src: source
 * @n: number of bytes
 *
 * Return: result of the copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, l = 0, l1 = 0;

	while (*(dest + l) != '\0')
		l++;
	while (*(src + l1) != '\0')
		l1++;
	for (i = 0; i < l && i < n; i++)
	{
		if (*(src + i) == '\0')
		{
			*(dest + i) = '\0';
			break;
		}
		else
			*(dest + i) = *(src + i);
	}
	for (i = l1; i < n; i++)
		*(dest +i) = '\0';
	
	return (dest);
}
