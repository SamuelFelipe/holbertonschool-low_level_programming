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

	if (name)
		(*pr).name = name;
	else
		return (NULL);
	if (age)
		(*pr).age = age;
	else
		return (NULL);
	if (owner)
		(*pr).owner = owner;
	else
		return (NULL);
	if (r == NULL)
		return (NULL);

	return (pr);
}
