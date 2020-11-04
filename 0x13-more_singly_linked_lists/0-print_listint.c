#include "lists.h"

/**
 * print_listint - print all the elements of a list
 * @h: list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int r = 1;

	if (h == NULL)
		return (0);

	printf("%d\n", (*h).n);

	if ((*h).next)
		r += print_listint((*h).next);

	return (r);
}
