#include "lists.h"

/**
 * free_listint_safe - Free a listint_t linked list.
 * @head: head node of the linked list
 * Return: Size of list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t i, number_of_nodes;

	if (*h == NULL)
		return (98);

	number_of_nodes = detect_loop(*h);
	if (number_of_nodes)
	{
		for (i = 0; i < number_of_nodes; ++i)
		{
			temp = *h;
			*h = temp->next;
			free(temp);
		}
		free(*h);
		return (number_of_nodes);
	}
	for (i = 0; *h; ++i)
	{
		temp = *h;
		*h = temp->next;
		free(temp);
	}
	free(*h);
	return (i);
}
