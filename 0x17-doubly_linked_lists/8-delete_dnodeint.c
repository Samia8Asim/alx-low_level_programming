#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node
 * @head: head list
 * @index: index of node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *prev = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	while (count < index)
	{
		prev = current;
		current = current->next;
		count++;
	}
	if (count != index)
		return (-1);
	if (prev != NULL)
		prev->next = current->next;
	else
		*head = current->next;

	if (current->next != NULL)
		current->next->prev = prev;
	free(current);
	return (1);
}
