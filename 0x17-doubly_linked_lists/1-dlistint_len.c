#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a
 * linked dlistint_t list
 * @h: list head
 *
 * Return: return the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t listl = 0;

	for (; h ; listl++)
		h = h->next;
	return (listl);
}
