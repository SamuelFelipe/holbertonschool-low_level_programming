#include "hash_tables.h"

/**
 * key_index - return the index of the node
 * @key: key of the node
 * @size: size of the array
 *
 * Return: node index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
