#include "hash_tables.h"

/**
 * hash_table_delete - delete all the table
 * @ht: hash table
 *
 * Return: none
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp, *aux = NULL;

	if (!ht)
		return;
	if (!ht->array)
		return;

	while (i < ht->size)
	{
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				aux = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = aux;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
