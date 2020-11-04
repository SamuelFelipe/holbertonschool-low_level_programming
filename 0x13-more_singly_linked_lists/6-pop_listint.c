#include "lists.h"

/**
 * pop_listint - delete the list head an return the data
 * @head: list head
 *
 * Return: if the linked list is empty return 0 otherwise data value
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	int r;
	listint_t *new;

	r = (*head)->n;
	new = *head;
	*head = (*new).next;
	free(new);
	return (r);
}
