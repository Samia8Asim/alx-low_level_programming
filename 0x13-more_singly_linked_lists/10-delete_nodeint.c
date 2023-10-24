#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @head: the head node of a linked list
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int now_idx;
	listint_t *now_node, *prev_node;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		now_node = *head;
		*head = (*head)->next;
		free(now_node);
		return (1);
	}
	now_node = *head;
	while (now_node)
	{
		if (now_idx == index)
		{
			prev_node->next = now_node->next;
			free(now_node);
			return (1);
		}
		prev_node = now_node;
		now_node = now_node->next;
		now_idx++;
	}
	return (-1);
}
