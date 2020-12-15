#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: head of the list
 *
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = (*head).next, *f;

	free(head);

	while (next)
	{
		f = next;
		next = next->next;
		free(f);
	}
}
