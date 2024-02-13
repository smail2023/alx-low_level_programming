#include "lists.h"

/**
 * pop_listint - deletes  head node of a listint_t linked list
 * @head: head of linked list in the func
 * Return: the head node’s data (n) func.
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int v;

	if (head == NULL)
		return (0);

	current = *head;
	if (current == NULL)
		return (0);

	v = current->n;
	*head = current->next;
	free(current);
	return (v);
}
