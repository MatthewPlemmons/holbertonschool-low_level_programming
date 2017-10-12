#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list.
 * @head: start of list.
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!*head)
		return;

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
