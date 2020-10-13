#include "holberton.h"

/**
 * main - print the file name
 * @argc: counter of argv
 * @argv: arguments
 *
 * Return: Always 0 (Succes)
 */

int main(int argc, char *argv[])
{
	int ca, ci;

	if (argc == 2)
	{
	ca = atoi(argv[1]);
		if (ca <= 0)
		{
		printf("0\n");
		}
		else
		{
		for (ci = 0; ca != 0; ci++)
		{
			if (ca >= 25)
				ca -= 25;
			else if (ca >= 10)
				ca -= 10;
			else if (ca >= 5)
				ca -= 5;
			else if (ca >= 2)
				ca -= 2;
			else
				ca -= 1;
		}
		printf("%d\n", ci);
		}
	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
