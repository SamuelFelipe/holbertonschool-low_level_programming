#include "holberton.h"

/**
 * string_nconcat - concatenate the first string
 * with the n first bytes of the second one
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: on succes, pointer to the new array, othewise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1 = 0, l2 = 0;
	char *r;

	while (*(s1 + l1))
		l1++;
	while (*(s2 + l2))
		l2++;

	if (l2 < n)
		r = malloc(l1 + l2 + 1);
	else if (n < l2)
		r = malloc(l1 + n + 1);

	if (r == NULL)
		return (NULL);
	for (i = 0; *(s1 + i); i++)
		*(r +  i) = *(s1 + i);
	for (j = 0; j < n && *(s2 + j); i++, j++)
		*(r + i) = *(s2 + j);
	*(r + i) = '\0';

	return (r);
}
