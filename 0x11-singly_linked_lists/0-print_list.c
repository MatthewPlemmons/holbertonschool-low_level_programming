#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a list.
 * @h: pointer to list.
 * Return: size_t, number of nodes in list.
 */

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
