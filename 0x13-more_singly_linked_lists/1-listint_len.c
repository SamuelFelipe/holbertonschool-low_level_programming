#include "lists.h"

/**
 * listint_len - return the number of nodes in a list
 * @h: head
 *
 * Return: number of nodes in a list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int r = 1;

	if (h == NULL)
		return (0);

	if ((*h).next)
		r += listint_len((*h).next);

	return (r);
}
