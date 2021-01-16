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
	char *aux;
	hash_node_t *new, *tmp;

	if (!value || !ht || !key || !strlen(value))
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
		if (!strcmp(tmp->key, key))
		{
			aux = strdup(value);
			if (!aux)
				return (0);
			free(tmp->value);
			tmp->value = aux;
			return (1);
		}
		else
			tmp = tmp->next;
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->next = ht->array[index];
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
	ht->array[index] = new;
	return (1);
}
