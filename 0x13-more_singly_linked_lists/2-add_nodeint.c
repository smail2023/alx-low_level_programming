#include "lists.h"

/**
 **add_nodeint - adds a node at the beginning of the func
 *@head: head of the func
 *@n: int used
 *Return: null or address new element on success.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
