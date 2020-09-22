#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * _isalpha - input 'c' and return a number according to the char of input
 * @c: input type character
 * Return: 1 if the input is a character otherwise return 0
 */

int _isalpha(char c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
