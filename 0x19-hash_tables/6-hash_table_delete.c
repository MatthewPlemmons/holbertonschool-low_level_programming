#include "hash_tables.h"

/**
 * hash_table_delete - Function for deleting a hash table.
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr, *temp;
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
