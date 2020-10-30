#include "lists.h"

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: head
 * @str: data
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int strl = 0;
	list_t *new;
	list_t *last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (*(str + strl))
		strl++;

	(*new).next = NULL;
	(*new).str = strdup(str);
	(*new).len = strl;

	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}

	while ((*last).next != NULL)
		last = (*last).next;
	(*last).next = new;

	return (new);
}
