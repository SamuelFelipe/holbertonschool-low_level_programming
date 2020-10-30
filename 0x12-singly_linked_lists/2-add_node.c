#include "lists.h"

/**
 * add_node - add a new node in a linked list
 * @head: first element
 * @str: <=
 *
 * Return: on succes pointer to the new element otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int strl = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	(*new).str = strdup(str);
	while (*(str + strl))
		strl++;
	(*new).len = strl;
	(*new).next = (*head);
	(*head) = new;

	return (new);
}
