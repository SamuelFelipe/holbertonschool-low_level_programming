#include "lists.h"

/**
 * pop_listint - delete the list head an return the data
 * @head: list head
 *
 * Return: if the linked list is empty return 0 otherwise data value
 */

int pop_listint(listint_t **head)
{
	int r;
	listint_t *new;

	if (*head == NULL)
		return (0);

	new = *head;
	r = (*new).n;
	*head = (*new).next;
	free(new);
	return (r);
}
