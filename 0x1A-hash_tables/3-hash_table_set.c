#include "hash_tables.h"

/**
 * free_node - free a node
 * @node: node to free
 *
 * Return: none
 */

void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

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
	char *aux = NULL;
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
			if (strcmp(tmp->key, key))
				tmp = tmp->next;
			else
				break;

		if (strcmp(tmp->key, key))
			tmp->next = new;
		else
		{
			free_node(new);
			aux = strdup(value);
			if (!aux)
				return (0);
			free(tmp->value);
			tmp->value = aux;
		}
	}

	return (1);
}
