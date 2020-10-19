#ifndef DOG_H
#define DOG_H


#include <stdio.h>


/**
 * struct dog - dos data
 * @name: <=
 * @age: <=
 * @owner: <=
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *d);


#endif
