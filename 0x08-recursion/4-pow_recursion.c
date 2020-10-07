#include "holberton.h"

/**
 * _pow_recursion - calculates the value of x raised y
 * @x: base
 * @y: exponent
 *
 * Return: x raised y on succes otherwise -1
 */

int _pow_recursion(int x, int y)
{
	int d;

	if (y < 0)
		d = -1;
	else if (y == 0)
		d = 1;
	else
	{
		d = x;
		d *= _pow_recursion(x, y - 1);
	}

	return (d);
}
