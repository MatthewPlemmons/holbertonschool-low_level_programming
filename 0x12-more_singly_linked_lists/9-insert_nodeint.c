#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: start of list.
 * @index: index where new node should be added.
 * @n: int to store in node.
 * Return: listint_t, address of new node.
 *         NULL, on failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (index == 0)
	{
		new->next = temp;
		return (new);
	}
	for (i = 1; temp; i++)
	{
		if (temp->next == NULL)
		{
			new->next = NULL;
			temp->next = new;
			return (new);
		}
		if (i == index)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
	}
	free(new);
	return (NULL);
}
