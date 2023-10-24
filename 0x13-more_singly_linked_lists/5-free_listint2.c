#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: the head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *copy_head, *temp_node;

	if (!head)
		return;

	copy_head = *head;
	while (copy_head)
	{
		temp_node = copy_head;
		copy_head = copy_head->next;
		free(temp_node);
	}
	*head = NULL;
}
