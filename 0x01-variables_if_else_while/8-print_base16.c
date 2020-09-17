#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Succes)
 **/

int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	for (c = 'a'; c < 'g'; c++)
	putchar(c);

	putchar('\n');

	return (0);

}
