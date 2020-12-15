#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node
 * @h: list header
 * @idx: node of index
 * @n: node data
 *
 * Return: node address
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *prev = *h, *next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	(*new).n = n;

	for (i = 0; i < idx - 1 && prev; i++)
		prev = prev->next;
	if (i < idx -1)
	{
		free(new);
		return (NULL);
	}

	next = prev->next;
	if (!next)
		return (add_dnodeint_end(h, n));

	(*new).next = next;
	(*next).prev = new;
	(*new).prev = prev;
	(*prev).next = new;

	return (new);
}
