#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *node;

	if (!ht)
		return;
	putchar('{');
	for (i = j = 0; i < ht->size; ++i)
	{
		for (node = ht->array[i]; node; node = node->next)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			j = 1;
		}
	}
	printf("}\n");
}
