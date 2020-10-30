#include "lists.h"

/**
 * list_len - print the number of elements in a linked list
 * @h: list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int r = 0;

	if ((*h).next)
	{
		r++;
		r += list_len((*h).next);
	}

	return (r);
}
