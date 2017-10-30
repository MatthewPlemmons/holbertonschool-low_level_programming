#include "hash_tables.h"

/**
 * shash_table_create - create sorted hash table.
 * @size: size of table
 * Return: pointer to hash table, or NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}


/**
 * shash_table_set - add element to sorted hash table.
 * @ht: hash table to add too
 * @key: key to add
 * @value: value to add
 * Return: 0 on failure, otherwise 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *temp, *curr;
	unsigned long int hash;

	if (!ht || !key || !value)
		return (0);
	hash = key_index((unsigned char *)key, ht->size);
	curr = ht->array[hash];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			return (1);
		}
		curr = curr->next;
	}
	temp = malloc(sizeof(hash_node_t));
	if (!temp)
		return (0);
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = ht->array[hash];
	ht->array[hash] = temp;
	return (1);
}


/**
 * shash_table_get - retrieve a value from the hash table.
 * @ht: hash table to retrieve from
 * @key: key value to find
 * Return: value associated with the key, otherwise NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (!ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (!node)
		return (NULL);
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}


void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node;

	if (!ht)
		return;
	node = ht->shead;
	putchar('{');
	while (node)
	{
		if (i == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		i = 1;
		node = node->snext;
	}
	printf("}\n");

}


void shash_table_print_rev(const shash_table_t *ht)
{
        unsigned long int i;
        shash_node_t *node;

        if (!ht)
                return;
        node = ht->stail;
        putchar('{');
        while (node)
        {
                if (i == 1)
                        printf(", ");
                printf("'%s': '%s'", node->key, node->value);
                i = 1;
                node = node->sprev;
        }
        printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *curr, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; ++i)
	{
		curr = ht->array[i];
		while (curr)
		{
			temp = curr;
			curr = curr->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);

}
