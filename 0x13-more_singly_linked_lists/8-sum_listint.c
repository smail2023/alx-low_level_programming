#include "lists.h"

/**
 * sum_listint - returns  sum of all the data (n) of a listint_t linked lists.
 * @head: head of linked list in this func
 * Return: sum if success
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
