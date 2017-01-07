#include "lists.h"

/**
 * dlistint_len - returns number of nodes in a linked dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
