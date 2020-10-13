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
	unsigned int i = 0, j, l = 0, l1 = 0;
	char *fs;

	if (s1 != NULL)
	while (*(s1 + l))
		l++;

	if (s2 != NULL)
	while (*(s2 + l1))
		l1++;

	fs = malloc((sizeof(char) * (l + l1)) + 1);

	if (fs == NULL)
		return (NULL);

	for (i = 0; *(s1 + i); i++)
		*(fs + i) = *(s1 + i);
	for (j = 0; i < l + l1; i++, j++)
		*(fs + i) = *(s2 + j);

	fs[i + j] = '\0';

	return (fs);
}
