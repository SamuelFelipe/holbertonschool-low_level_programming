#include "holberton.h"

/**
* _islower - return a number according to the int of input
* @c: integer input
*
* Return: 1 if the character is an lowercase one otherwise return 0
*/

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
