#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a lists
 * @head: list head
 * @n: int
 *
 * Return: on succes address to the new node, otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	(*new).n = n;
	(*new).next = NULL;

	if (*head == NULL)
		(*head) = new;
	else
	{
		while ((*last).next)
			last = (*last).next;
		(*last).next = new;
	}
	return (new);
}
