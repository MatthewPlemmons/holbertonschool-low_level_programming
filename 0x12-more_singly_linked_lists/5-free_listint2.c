#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list.
 * @head:
 * Return:
 */

void free_listint2(listint_t **head)
{
	listint_t *temp0;

	temp0 = *head;
	while (head)
	{
		*head = temp0;
		temp0 = temp0->next;
		*head = NULL;
		free(*head);
	}
}
