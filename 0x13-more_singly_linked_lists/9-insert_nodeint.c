#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node in a determinate position
 * @head: list head
 * @idx: index position
 * @n: node data
 *
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *beh;

	if (*head == NULL)
		return (NULL);

	beh = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		(*new).next = *head;
		(*new).n = n;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx - 1; i++)
		if ((*beh).next == NULL)
		{
			beh = (*beh).next;
			break;
		}
		else
			beh = (*beh).next;
	if (beh == NULL && i < idx - 1)
	{
		free(new);
		return (NULL);
	}

	(*new).n = n;
	(*new).next = (*beh).next;
	(*beh).next = new;
	return (new);
}
