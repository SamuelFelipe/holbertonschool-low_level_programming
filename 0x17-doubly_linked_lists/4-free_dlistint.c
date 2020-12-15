#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: head of the list
 *
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *f = head;

	while (head)
	{
		head = head->next;
		free(f);
		f = head;
	}
	free(f);
}
