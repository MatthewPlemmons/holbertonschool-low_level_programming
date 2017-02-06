#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with key.
 * @ht: hash table to retrieve from.
 * @key: key to look for.
 * Return: value associated with key, or NULL on failure.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (!node)
		return (NULL);
	return (node->value);
}
