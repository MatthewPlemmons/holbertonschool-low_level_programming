#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table.
 * @ht: hash table to add to.
 * @key: key of new element.
 * @value: value of new element.
 * Return: 0 on success, 1 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int hash_value;
	const unsigned char *k;

	if (!ht || !key || !value)
		return (1);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (1);
	k = (const unsigned char *) strdup(key);
	new->key = strdup(key);
	new->value = strdup(value);

	hash_value = hash_djb2(k) % ht->size;

	if (ht->array[hash_value])
		new->next = ht->array[hash_value];
	ht->array[hash_value] = new;
	return (0);
}
