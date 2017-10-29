#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table.
 * @ht: hash table to add to.
 * @key: key of new element.
 * @value: value of new element.
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int hash_value;

	if (!ht || !key || !value)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	hash_value = key_index((const unsigned char *)key, ht->size);
	if (ht->array[hash_value])
		new->next = ht->array[hash_value];
	ht->array[hash_value] = new;
	return (1);
}
