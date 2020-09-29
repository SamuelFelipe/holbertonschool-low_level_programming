#include "holberton.h"

/**
 * _strcpy - copie the string pointed including the terminating null byte
 * @dest: target
 * @src: origin
 *
 * Return: target already modified
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0, i;

	while (*(src + l) != '\0')
		l++;
	for (i = 0; i <= l; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
