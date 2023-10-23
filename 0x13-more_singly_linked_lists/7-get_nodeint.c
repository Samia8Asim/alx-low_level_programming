#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: head of the linked list
 * @index: index of nth node
 *
 * Return: the nth node of a linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_index = 0;
	listint_t temp_node = head;

	while (node_index < index && temp_node)
	{
		temp_node = temp_node->next;
		node_index += 1;
	}
	return (temp_node);
}
