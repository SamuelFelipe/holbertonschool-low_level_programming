#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all the elements
 * @n: element
 *
 * Return: 0 if n == 0, otherwise sum result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int r = 0, i;

	if (n == 0)
		return (0);

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
		r += va_arg(arg, int);
	va_end (arg);
	return (r);
}
