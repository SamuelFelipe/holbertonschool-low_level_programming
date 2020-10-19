#include "dog.h"

/**
 * duplicate - clone a string
 * @s: input
 *
 * Return: pointer to a string
 */

char *duplicate(char *s)
{
	int i;
	char *r;

	for (i = 0; *(s + i); i++)
		;
	r = malloc(i * sizeof(char) + 1);
	if (r == NULL)
		return (NULL);
	for (i = 0; *(s + i); i++)
		*(r + i) = *(s + i);
	*(r + i) = '\0';
	return (r);
}

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

	(*new).name = duplicate(name);
	if ((*new).name == NULL)
	{
		free(new);
		return (NULL);
	}
	(*new).age = age;
	(*new).owner = duplicate(owner);
	if ((*new).owner == NULL)
	{
		free((*new).name);
		free(new);
		return (NULL);
	}

	return (new);
}
