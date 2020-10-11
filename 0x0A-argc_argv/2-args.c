#include "holberton.h"

/**
 * main - prints all the arguments it receives
 * @argc: lenght of argv
 * @argv: arguments
 *
 * Return: Always 0 (succes)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
