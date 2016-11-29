#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node to end of list.
 * @head: start of list.
 * @str: string to add to new node.
 * Return: list_t, address of new node.
 * Or NULL, on failure.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t n;

	n = 0;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[n])
		n++;

	new->str = strdup(str);
	new->len = n;
	new->next = NULL;

	if (*head == NULL)
		return (*head = new);

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (*head);
}
