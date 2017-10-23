#include "lists.h"

/**
 * detect_loop - Detect infinite loop in linked list.
 * @head: head node of linked list
 * Return: number of nodes in the list if a loop is detected, otherwise 0
 */
size_t detect_loop(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t i;

	i = 1;
	slow = fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		++i;
		if (slow == fast)
		{
			slow = head;
			while (slow->next != fast->next)
			{
				slow = slow->next;
				fast = fast->next;
				++i;
			}
			return (i);
		}
	}
	return (0);
}



/**
 * print_listint_safe - Print a listint_t linked list.
 * @head: head node of the linked list
 * Return: number of nodes in the linked list, otherwise
 *         returns a status code 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, number_of_nodes;

	if (head == NULL)
		return (98);

	number_of_nodes = detect_loop(head);
	if (number_of_nodes)
	{
		for (i = 0; i < number_of_nodes; ++i)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
		return (number_of_nodes);
	}
	for (i = 0; head; ++i)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (i);
}
