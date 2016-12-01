#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of linked list.
 * @head: start of list.
 * @index: index of node to return.
 * Return: listint_t, node located at index.
 *         NULL, if node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
