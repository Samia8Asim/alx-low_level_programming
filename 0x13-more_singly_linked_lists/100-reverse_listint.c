#include "lists.h"

/**
 * reverse_listint - function to reverses a listint_t linked list.
 * @head: head of a linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t now_node, next_node;

	now_node = NULL;
	next_node = NULL;

	if (!head || !*head)
		return (NULL);
	now_node = *head;
	*head = NULL;

	while (now_node)
	{
		next_node = now_node->next;
		now_nose->next = *head;
		*head = now_node;
		now_node = next_node;
	}
	return (*head);
}
