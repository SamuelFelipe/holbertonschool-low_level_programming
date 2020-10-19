#include "dog.h"

/**
 * init_dog - intialize a structure
 * @d: pointer
 * @name: <=
 * @age: <=
 * @owner: <=
 *
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
