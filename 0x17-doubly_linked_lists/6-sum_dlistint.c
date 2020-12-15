#include "lists.h"

/**
 * sum_dlistint - do the sum of the list data
 * @head: header of the lists
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += (*head).n;
	return (sum);
}
