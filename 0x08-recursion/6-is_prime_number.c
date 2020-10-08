#include "holberton.h"

/**
 * aux - auxiliar function
 * @s: 2
 * @n: input of is_prime_number
 *
 * Return: 1 if n is prime otherwise 0
 */

int aux(int s, int n)
{
	int r;

	if (s < n && n % s != 0)
	{
		r = aux(s + 1, n);
	}
	else if (s == n)
		r = 1;
	else
		r = 0;
	return (r);
}


/**
 * is_prime_number - determinate if the input is a prime number
 * @n: input
 *
 * Return: if n is prime 1 otherwise 0
 */

int is_prime_number(int n)
{
	int s, r;

	s = 2;
	r = aux(s, n);

	return (r);
}
