#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: none
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int c = 0;
	hash_node_t *tmp;

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (c)
				printf(", ");
			tmp = ht->array[i];
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
			c = 1;
		}
		i++;
	}
	printf("}\n");
}
