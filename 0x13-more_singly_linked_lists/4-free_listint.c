#include "lists.h"

/**
 * free_listint - free the list
 * @head: list head
 *
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *last;

	while ((*head).next)
	{
		last = (*head).next;
		free(head);
		head = last;
	}

	free(head);
}
