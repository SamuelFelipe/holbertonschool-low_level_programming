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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
