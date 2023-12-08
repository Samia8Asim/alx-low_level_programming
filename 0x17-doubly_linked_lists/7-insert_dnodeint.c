#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at given index
 * @h: head
 * @idx: index
 * @n: number int data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *prev = NULL, *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*h == NULL && idx == 0)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}

	while (current != NULL && count < idx)
	{
		prev = current;
		current = current->next;
		count++;
	}
	if (count < idx || current == NULL)
	{
		free(new);
		return (NULL);
	}

	new->prev = prev;
	new->next = current;
	if (prev != NULL)
		prev->next = new;
	if (current != NULL)
		current->prev = new;
	return (new);
}
