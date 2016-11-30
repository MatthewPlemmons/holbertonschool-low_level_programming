#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns number of nodes in a linked list.
 * @h: start of list.
 * Return: size_t, number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
