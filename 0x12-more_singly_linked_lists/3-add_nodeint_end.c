#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of list.
 * @head: start of list.
 * @n: input int.
 * Return: listint_t, address of new node.
 *         Or NULL, on failure.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		return (*head = new);
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (*head);
}
