#include "holberton.h"

/**
 * main - print the number multiplication of 2 numbers
 * @argc: length of argv
 * @argv: arguments
 *
 * Return: Always 0 (succes)
 */

int main(int argc, char *argv[])
{
	int f, s;

	(void)argc;

	if (argv[1] && argv[2])
	{
		f = atoi(argv[1]);
		s = atoi(argv[2]);
		printf("%d\n", f * s);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
