#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of the list
 * @head: head of the list
 * @n: node data
 *
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	(*new).next = NULL;
	(*new).prev = NULL;
	(*new).n = n;
	if (!tmp)
	{
		*head = new;
		return (new);
	}

	while ((*tmp).next)
		tmp = (*tmp).next;
	(*tmp).next = new;
	(*new).prev = tmp;

	return (new);
}
