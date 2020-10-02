#include "holberton.h"

/**
 * cap_string - capitalize a string
 * @str: string
 *
 * Return: string capitalized
 */

char *cap_string(char *str)
{
	int l = 0, i;

	while (*(str + l) != '\0')
		l++;

	for (i = 0; i < l; i++)
	{
	if (*str <= 122 && *str >= 97)
		*str -= 32;
	switch (*(str + i))
	{
		case 9:
		case 10:
		case 32:
		case 33:
		case 34:
		case 44:
		case 46:
		case 58:
		case 59:
		case 40:
		case 41:
		case 123:
		case 125:
			if (*(str + i + 1) >= 97 && *(str + i + 1) <= 122)
				*(str + i + 1) -= 32;
	}
	}


	return (str);
}
