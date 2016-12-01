#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum of all data in linked list.
 * @head: start of list.
 * Return: int, sum of data.
 *         0, if empty list.
 */

int sum_listint(listint_t *head)
{
	int n;

	n = 0;
	if (head == NULL)
		return (0);
	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
