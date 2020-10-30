#include "lists.h"

/**
 * print_list - print all the elements of a list
 * @h: list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int unsigned r = 1;
	
	if (h == NULL)
		return (0);

	if (!(*h).str)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", (*h).len, (*h).str);

	if ((*h).next)
		r += print_list((*h).next);

	return (r);
}
