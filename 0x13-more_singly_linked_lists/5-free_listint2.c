#include "lists.h"

/**
 * free_listint2 - free the list and sets the head to NULL
 * @head: list head
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		new = *head;
		*head = (*head)->next;
		free(new);
	}
}
