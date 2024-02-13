#include "lists.h"

/**
 **add_nodeint_end - adds a node at beginning of the func.
 *@head: head of the func.
 *@n: int used in the func.
 *Return: null or address  new elements.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;

	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (new);
}
