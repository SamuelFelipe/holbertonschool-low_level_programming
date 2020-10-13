#include "holberton.h"

/**
 * str_concat - concadenates two strings
 * @s1: first string
 * @s2: second dtring
 *
 * Return: pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, l = 0, l1 = 0;
	char *fs;

	while (*(s1 + l))
		l++;
	while (*(s2 + l1))
		l1++;
	fs = malloc((l + l1) * sizeof(char));
	for (i = 0; i < l; i++)
		*(fs + i) = *(s1 + i);
	for (j = 0; i < l + l1; i++, j++)
		*(fs + i) = *(s2 + j);
	return (fs);
}
