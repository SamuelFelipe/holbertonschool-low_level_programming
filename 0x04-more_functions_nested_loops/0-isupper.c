#include "holberton.h"

/**
* _isupper - checks if the input is uppercase
* @c: input to evaluate
*
* Return: 1 if the input is an uppercase otherwise return 0
**/

int _isupper(int c)
{
	int i;

	if (c >= 65 && c <= 90)
		i = 1;
	else if (c >= 97 && c <= 122)
		i = 0;

	return (i);
}
