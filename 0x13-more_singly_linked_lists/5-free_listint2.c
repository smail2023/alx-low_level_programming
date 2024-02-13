#include "lists.h"

/**
 * free_listint2 - frees a listint_t lists
 * Description: at the end, the head points to NULL.
 * So, we know the tail always points to NULL, will
 * be moving a temp pointer, free its memory if not NULL
 * Untll we reach the tail.
 * @head: head of linked list in the func
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

}
