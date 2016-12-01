#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints elements of a list.
 * @h: head of linked list.
 * Return: size_t, number of nodes in list.
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);

}
