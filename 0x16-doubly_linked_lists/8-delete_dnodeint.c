#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index.
 * @head: double pointer to head of list.
 * @index: index of node to delete.
 * Return: 1 if succeeded, or -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *new, *curr;
	unsigned int i;

	if (!*head)
		return (-1);

	curr = *head;
	for (i = 0; curr->next; i++)
	{
		if (i == index)
			break;
		curr = curr->next;
	}
	if (i + 1 == index)
	{
		tmp = curr->prev;
		tmp->next = curr->next;
		free(curr);
		return (1);
	}
	if (i != index)
		return (-1);
	if (index == 0)
	{
		if (curr->next == NULL)
		{
			*head = NULL;
			free(*head);
			free(curr);
			return (1);
		}
		tmp = curr->next;
		tmp->prev = NULL;
		*head = tmp;
		free(curr);
		return (1);
	}
	tmp = curr->prev;
	new = curr->next;
	new->prev = tmp;
	tmp->next = new;
	free(curr);
	return (1);
}
