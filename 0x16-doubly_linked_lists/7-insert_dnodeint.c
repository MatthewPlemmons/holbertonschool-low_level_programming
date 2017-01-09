#include "lists.h"

/**
 * insert_dnodeint_at_idx - inserts new node at given index.
 * @head: double pointer to head of list.
 * @idx: index to insert node.
 * @n: data to store in node.
 * Return: address of the new node, or NULL on error.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new, *curr;
	unsigned int i;

	curr = *h;
	for (i = 0; curr; i++)
	{
		if (i == idx)
			break;
		curr = curr->next;
	}
	if (i != idx)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	tmp = curr->prev;
	tmp->next = new;
	curr->prev = new;
	new->prev = tmp;
	new->next = curr;
	return (new);
}
