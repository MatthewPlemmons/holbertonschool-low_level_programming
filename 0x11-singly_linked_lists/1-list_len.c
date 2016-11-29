#include <stdio.h>
#include "lists.h"

/**
 * list_len - number of nodes in a list.
 * @h: list.
 * Return: size_t, number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
