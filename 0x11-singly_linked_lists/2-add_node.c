#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at beginning of list.
 * @head: head of list.
 * @str: string to add to new list.
 * Return: list_t, address of the new element.
 * On failure, NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n;

	n = 0;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[n])
		n++;

	new->str = strdup(str);
	new->len = n;
	new->next = *head;
	*head = new;

	return (new);
}
