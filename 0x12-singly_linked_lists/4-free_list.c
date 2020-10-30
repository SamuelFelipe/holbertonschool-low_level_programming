#include "lists.h"

/**
 * free_list - frees a list
 * @head: list head
 *
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *next;

	while ((*head).next)
	{
		next = (*head).next;
		free((*head).str);
		free(head);
		head = next;
	}
	free((*head).str);
	free(head);
}
