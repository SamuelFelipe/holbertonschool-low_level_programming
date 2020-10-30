#include "lists.h"

/**
 * print_len - print the number of elements in a linked list
 * @h: list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int unsigned r = 1;

	if ((*h).next)
		r += list_len((*h).next);

	return (r);
}
