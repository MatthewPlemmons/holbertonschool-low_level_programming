#include "heap.h"

/**
 * heap_create - Create heap data structure.
 *
 * @data_cmp: function to compare data in nodes
 * Return: pointer to new heap
 */
heap_t *heap_create(int (*data_cmp)(void *, void *))
{
	heap_t *heap;

	if (!data_cmp)
		return (NULL);

	heap = malloc(sizeof(heap_t));
	if (!heap)
		return (NULL);

	heap->size = 0;
	heap->root = NULL;
	return (heap);
}
