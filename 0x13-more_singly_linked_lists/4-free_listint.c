#include "lists.h"
/**
 *free_listint - The function that frees a memory location.
 *@head: the head the linked lists.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)

		return;

	while (head)

	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
