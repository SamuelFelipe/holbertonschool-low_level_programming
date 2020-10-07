#include "holberton.h"

/**
 * factorial - factorial of a number
 * @n: number
 *
 * Return: succes result otherwise -1
 */

int factorial(int n)
{
	int r = n;
	if (n > 1)
		r *= factorial(n - 1);
	else if (n == 0)
		r = 1;
	if (n < 0)
		return (-1);
	else
		return (r);
}
