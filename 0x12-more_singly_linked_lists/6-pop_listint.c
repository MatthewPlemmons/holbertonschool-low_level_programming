#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes head node of list and returns it's data.
 * @head: start of list.
 * Return: int, data in head node.
 *         Or 0, if list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = (temp)->n;
	free(temp);
	temp = NULL;
	return (n);
}
