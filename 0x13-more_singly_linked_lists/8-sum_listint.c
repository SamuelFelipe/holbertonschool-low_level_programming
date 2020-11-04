#include "lists.h"

/**
 * sum_listint - the sum of all the data (n) of a listint_t linked list
 * @head: list head
 *
 * Return: if the list is empty, return 0 otherwise sum result
 */

int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	listint_t *new;
	int r = 0;

	new = head;

	for (; new;)
	{
		r += (*new).n;
		new = (*new).next;
	}

	return (r);
}
