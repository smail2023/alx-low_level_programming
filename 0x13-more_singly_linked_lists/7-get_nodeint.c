#include "lists.h"

/**
 * get_nodeint_at_index - returns the Nth node of a listint_t linked lists.
 * @head: head of linked list in the func
 * @index: node index to return in this func
 * Return: node if success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;

	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (0); /*Out of range*/
	}

	return (current);
}
