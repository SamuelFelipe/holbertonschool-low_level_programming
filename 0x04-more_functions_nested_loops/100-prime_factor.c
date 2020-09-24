#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{

	int prime;
	long int a;

	a = 612852475143;

	for (prime = 2; prime < a; prime++)
		if (a % prime == 0)
			a = a / prime;

	printf("%d\n", prime);

	return (0);
}
