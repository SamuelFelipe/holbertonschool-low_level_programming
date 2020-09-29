#include "holberton.h"

/**
 * _atoi - return the first integer in an string
 * @s: input string
 *
 * Return: first integer
 */

int _atoi(char *s)
{
	unsigned int i = 0, j, aux = 1, l = 0, lnum, k;
	int num = 0;

	while (*(s + l) != '\0')
		l++;
	for (i = 0; i < l; i++)
		if (*(s + i) - '0' <= 9 && *(s + i) - '0' >= 0)
			break;

	for (j = i; j < l; j++)
		if (*(s + j) - '0' <= 9 && *(s + j) - '0' >= 0)
			;
		else
			break;
	lnum = j - i;

	for (k = 1; k < lnum; k++)
		aux *= 10;

	for (k = 0; k < lnum; k++)
	{
		num += (aux * (*(s + (i + k)) - '0'));
		aux /= 10;
	}

	if (*(s + i - 1) == '-')
		num *= -1;

	return (num);
}
