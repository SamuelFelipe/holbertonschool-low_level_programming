#include "lists.h"

/**
 * print_dlistint - print dlistint_t values
 * @h: dlistint_t header
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t listl = 0;

	for (; h; listl++)
	{
		printf("%d\n", (*h).n);
		h = h->next;
	}

	return (listl++);
}
