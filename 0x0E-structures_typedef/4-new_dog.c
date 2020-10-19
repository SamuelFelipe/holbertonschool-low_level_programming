#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: <=
 * @age: <=
 * @owner: <=
 *
 * Return: on succes pointer, otherwise null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog r;
	struct dog *pr = &r;

		(*pr).name = name;
		(*pr).age = age;
		(*pr).owner = owner;
	if (pr == NULL)
		return (NULL);

	return (pr);
}
