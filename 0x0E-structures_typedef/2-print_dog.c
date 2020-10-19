#include "dog.h"

/**
 * print_dog - print the data in de dog contruct
 * @d: struct info addres
 *
 * Return: none
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name?(*d).name:"(nil)");
		printf("Age: %s\n", (*d).age);
		printf("Owner: %s\n", (*d).owner?(*d).owner:"(nil)");
	}
}
