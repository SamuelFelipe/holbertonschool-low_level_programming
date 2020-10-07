#include "holberton.h"

/**
 * step - return the next integer of the input
 * @s: input
 *
 * Return: next int
 */

int stp(int s, int n)
{
	int a;

	a = s;

	if (s * s < n)
		a  = stp(s + 1, n);
	else if (s * s > n)
		a = -1;
	return (a);
}

/**
 * _sqrt_recursion - natural square of a number
 * @n: input number
 *
 * Return: 0 for natural squares otherwise n square
 */

int _sqrt_recursion(int n)
{
	int s = 0, r;

	r = stp(s, n);

	return (r);
}
