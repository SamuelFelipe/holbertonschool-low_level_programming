#include "lists.h"

/**
 * get_nodeint_at_index - gets address of a node
 * @head: list head
 * @index: <=
 *
 * Return: if the node does not exist, return NULL otherwise node addres
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	unsigned int i;
	listint_t *address;

	address = head;

	for (i = 0; i < index; i++)
		if ((*address).next != NULL)
			address = (*address).next;
		else
			return (NULL);

	return (address);
}
