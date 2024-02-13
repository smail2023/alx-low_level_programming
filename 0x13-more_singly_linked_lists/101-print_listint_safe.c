#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates memory for an array of pointers in the func
 * to the nodes in a linked lists
 * @list: the old list to be appended
 * @size: size of the new list (always one morein the new list)
 * @new: new node to be added in the list.
 *
 * Return: pointer to the new list if success.
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t k;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (k = 0; k < size - 1; k++)
		newlist[k] = list[k];
	newlist[k] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of the list in the func.
 *
 * Return: the number of nodes in the lists.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t k, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (k = 0; k < num; k++)
		{
			if (head == list[k])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
