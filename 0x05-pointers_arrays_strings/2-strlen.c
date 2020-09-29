#include "holberton.h"

/**
 * _strlen - print the lenght of a string
 * @s: input string
 *
 * Return: length
 */


int _strlen(char *s)
{

	unsigned int l = 0;

	while (*(s + l) != '\0')
		l++;

	return (l);
}
