#include "lists.h"

/**
 * get_dnodeint_at_index - returns node specified by index.
 * @head: pointer to head of list.
 * @index: index of node to find.
 * Return: address of node at index, else NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
