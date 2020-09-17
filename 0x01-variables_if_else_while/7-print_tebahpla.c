#include <stdio.h>

/**
 * main - print the alphabet in one line
 *
 * Return: Always 0 (Succes)
 **/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');


	return (0);

}
