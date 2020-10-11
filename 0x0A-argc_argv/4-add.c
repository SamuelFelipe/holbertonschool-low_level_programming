#include "holberton.h"

/**
 * main - print the number of arguments passed into it
 * @argc: length of argv
 * @argv: arguments
 *
 * Return: Always 0 (succes)
 */

int main(int argc, char *argv[])
{
	int i, j, n = -1, r = 0;

	for (i = 1; i < argc; i++)
	for (j = 0; argv[i][j] != '\0'; j++)
		if (argv[i][j] < 48 || argv[i][j] > 57)
		{
			printf("Error\n");
			return (1);
		}

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);
		if ((n == 0 && *argv[i] - '0' != 48) || n < 0)
		{
			n = -1;
			break;
		}
		r += n;
	}
	printf("%d\n", r);
	return (0);
}
