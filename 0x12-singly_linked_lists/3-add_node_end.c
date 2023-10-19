#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head node of list
 * @str: the string for the enf node
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node = malloc(sizeof(list_t));
	list_t *node_temp = *head;

	if (!end_node || !head)
		return (NULL);

	if (str)
	{
		end_node->str = strdup(str);
		if (!end_node->str)
		{
			free(end_node);
			return (NULL);
		}
		end_node->len = strLen(end_node->str);
	}
	if (node_temp)
	{
		while (node_temp->next)
			node_temp = node_temp->next;
		node_temp = end_node;
	}
	else
		*head = end_node;
	return (end_node);
}
