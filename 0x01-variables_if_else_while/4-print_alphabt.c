#include <stdio.h>

/**
 * main - print the alphabet in with out q and e, one line
 *
 * Return: Always 0 (Succes)
 **/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');


	return (0);

}
