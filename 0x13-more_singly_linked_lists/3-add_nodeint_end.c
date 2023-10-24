#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: the head node
 * @n: the data value inside node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_node, *end_node = malloc(sizeof(listint_t));

	if (!head || !end_node)
		return (NULL);

	end_node->next = NULL;
	end_node->n = n;
	if (!*head)
		*head = end_node;
	else
	{
		temp_node = *head;
		while (temp_node->next)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = end_node;
	}
	return (end_node);
}
