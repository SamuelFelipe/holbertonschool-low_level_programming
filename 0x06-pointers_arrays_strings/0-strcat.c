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
	int l = 1, i = 1, j;

	while (*(dest + l) != '\0')
		l++;
	while (*(src + i) != '\0')
		i++;

	char *ret = (char *)malloc((l + i) * sizeof(char));

	for (j = 0; j < l; j++)
	{
		if (*(dest + j) != '\0')
			*(ret + j) = *(dest + j);
		else
			*(ret + j) = ' ';
	}
	for (j = 0; j < i; j++)
	{
		*(ret + (l + j)) = *(src + j);
		*(dest + (l + j)) = *(src + j);
	}

	return (ret);
}
