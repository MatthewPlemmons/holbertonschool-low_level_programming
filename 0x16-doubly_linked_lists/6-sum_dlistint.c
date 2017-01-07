#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of linked list.
 * @head: pointer to head of list.
 * Return: sum of data, or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
