#include "lists.h"

/**
 * add_dnodeint - adds new node to beginning of list
 * @head: double pointer to head of list
 * @n: data to store in node
 * Return: address of the new node, or NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		printf("Error: malloc failed\n");
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head)
	{
		(*head)->prev = new;
		new->next = *head;
	}
	*head = new;
	return (*head);
}
