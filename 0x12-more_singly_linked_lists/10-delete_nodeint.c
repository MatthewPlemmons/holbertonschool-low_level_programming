#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index.
 * @head: start of list.
 * @index: index of node to delete.
 * Return: 1, on success.
 *         -1, on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node;
	unsigned int i;

	temp = node = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		node = NULL;
		return (1);
	}
	for (i = 1; node; i++)
	{
		if (index == i)
		{
			temp = node;
			node = node->next;
			if (node == NULL)
				return (-1);
			temp->next = node->next;
			free(node);
			node = NULL;
			return (1);
		}
		node = node->next;
	}
	return (-1);
}
