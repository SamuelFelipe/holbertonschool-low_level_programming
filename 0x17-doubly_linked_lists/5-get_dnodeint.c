#include "lists.h"

/**
 * get_dnodeint_at_index - return a node direction
 * @head: head of the list
 * @index: <=
 *
 * Return: direction of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *r = head;

	for (i = 0; i < index; i++)
	{
		if(!r)
			return (NULL);
		r = r->next;
	}
	return (r);
}
