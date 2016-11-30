#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds new node to beginning of list.
 * @head: start of list.
 * @n: int input.
 * Return: listint_t, address of new node.
 *         Or NULL, if failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
