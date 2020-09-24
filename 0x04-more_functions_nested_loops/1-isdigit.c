#include "holberton.h"

/**
 * _isdigit - checks if the imput is a number
 * @c: input to check
 *
 * Return: 1 if @c is a digit otherwise return 0
 */

int _isdigit(int c)
{
	int i;

	if (c >= 48 && c <= 57)
		i = 1;
	else
		i = 0;

	return (i);
}
