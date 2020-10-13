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
	int i = 0, j, l = 0, l1 = 0;
	char *fs;

	while (*(s1 + l))
		l++;
	while (*(s2 + l1))
		l1++;
	if (l == 0 && l1 == 0)
		return (NULL);

	fs = malloc((l + l1) * sizeof(char) + 1);

	if (fs == NULL)
		return (NULL);

	for (i = 0; *(s1 + i); i++)
		*(fs + i) = *(s1 + i);
	for (j = 0; i < l + l1; i++, j++)
		*(fs + i) = *(s2 + j);
	fs[l + l1] = '\0';
	return (fs);
}
