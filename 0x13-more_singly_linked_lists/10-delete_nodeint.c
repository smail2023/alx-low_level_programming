#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes node at a given position in the func.
 * @head: head of linked lists of the func
 * @index: index to be delete in the func
 * Return: 1 if it success, -1 if a fail.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *tmp;

	if (head == NULL || (*head) == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(current);
		return (1);
	}

	while (index != 1)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
		--index;
	}
	tmp = current->next;
	if (current->next->next)
		current->next = current->next->next;
	else
		current->next = NULL;
	free(tmp);

	return (1);
}
