#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: pointer to head node
 * Return: pointer to first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	prev = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
