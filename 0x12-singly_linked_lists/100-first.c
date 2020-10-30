#include <stdio.h>

/**
 * pre_main - run after the main funccion
 *
 * Return: none
 */

__attribute__((constructor))
void pre_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
