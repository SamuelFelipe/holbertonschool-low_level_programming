#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i, j;
	char *p1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *p2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(str + i) != '\0'; i++)
	{
	for (j = 0; *(p1 + j) != '\0'; j++)
	{
		if (*(str + i) == *(p1 + j))
		{
			*(str + i) = *(p2 + j);
			break;
		}
	}
	}

	return (str);

}
