#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table to print.
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	
	for (i = 0; i < ht->size; i++)
	{
		/* Should probably iterate over each element in the
		   ht->array[], then check if each element is head of a linked
		   list.  If so, follow node->next and print each
		   node->value until you reach NULL end of list.
		   Continue to next element of array.
		*/
		node = ht->array[i];
		while (node->next)
	        {
			printf("%s\n", node->value);
			node = node->next;
		}
		node = NULL;
	}
}
