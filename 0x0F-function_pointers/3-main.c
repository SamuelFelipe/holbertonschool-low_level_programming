#include "3-calc.h"

/**
 * main - print the respective result from the input numbers
 * @argc: elements in argv
 * @argv: input numbers
 *
 * Return: on succes always 0
 */

int main(int argc, char **argv)
{
	int (*i)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	i = get_op_func(argv[2]);
	if (!i || argv[2][1] != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", i(a, b));

	return (0);
}
