#include "holberton.h"

/**
 * main - print numbers between 1 and 100,
 * but mutiples of 3 and 5 print fizz and buzz respectibe
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%i ", i);
	}
	putchar('\n');

	return (0);
}
