#include "holberton.h"

/**
 * _strstr - locate a substring
 * @haystack: target
 * @needle: string to find
 *
 * Return: if match pointer to the beginning of the located substring else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int m = 0, l = 0, i, j;

	while (*(needle + l) != '\0')
		l++;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
	for (j = 0; *(needle + j) != '\0'; j++)
	{
		if (*(needle + j) == *(haystack + (i + j)))
			m++;
		else if (m == l)
			break;
		else if (i)
		{
			m = 0;
			break;
		}
	}
	if (m == l)
		break;
	}

	if (m == l)
		return (&haystack[i]);
	else
		return (NULL);
}
