#include "holberton.h"

/**
 * _strdup - return a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: input string
 *
 * Return: NULL if str = NULL otherwise pointer to the new str
 */

char *_strdup(char *str)
{
	int i, l = 0;
	char *r;

	if (str == NULL)
		return (NULL);

	while (*(str + l))
		l++;

	r = malloc(l * sizeof(char));
	if (r == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		*(r + i) = *(str + i);
	return (r);
}
