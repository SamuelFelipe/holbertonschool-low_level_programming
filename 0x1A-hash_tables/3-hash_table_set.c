#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: table to update
 * @key: node key
 * @value: node value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *tmp;

	if (!value || !ht || !key || !strlen(value))
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->next = NULL;
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	if (!ht->array[index])
		ht->array[index] = new;
	else
	{
		tmp = ht->array[index];
		while (tmp->next)
		{
			if (!strcmp(tmp->key), key)
			{
				free(new->value);
				free(tmp->value);
				free(new->key);
				free(new);
				tmp->value = strdup(value);
				if (!tmp->value)
					return (0);
				return (1);
			}
			tmp = tmp->next;
		}
		tmp->next = new;
	}

	return (1);
}
