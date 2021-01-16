#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: hash table
 * @key: node key
 *
 * Return: associated value with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (!ht)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (!ht->array[index] || !key)
		return (NULL);

	tmp = ht->array[index];

	while (tmp)
	{
		if (!strcmp(tmp->key, key))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
