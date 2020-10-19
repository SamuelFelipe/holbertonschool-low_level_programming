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
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL || !name || !owner)
		return (NULL);

	(*new).name = name;
	(*new).age = age;
	(*new).owner = owner;
	

	return (new);
}
