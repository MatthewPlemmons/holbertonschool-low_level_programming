#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given index.
 * @h: double pointer to head of list.
 * @idx: index to insert node.
 * @n: data to store in node.
 * Return: address of the new node, or NULL on error.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new, *curr;
	unsigned int i;

	curr = *h;
	for (i = 0; curr->next; i++)
	{
		if (i == idx)
			break;
		curr = curr->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (i + 1 == idx)
	{
		curr->next = new;
		new->prev = curr;
		new->next = NULL;
		return (new);
	}
	if (i != idx)
		return (NULL);
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	tmp = curr->prev;
	tmp->next = new;
	curr->prev = new;
	new->prev = tmp;
	new->next = curr;
	return (new);
}
