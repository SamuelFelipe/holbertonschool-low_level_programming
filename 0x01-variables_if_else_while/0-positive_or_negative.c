#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determinate if a number is positive or negative
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("The number is 0\n");

	return (0);
}
