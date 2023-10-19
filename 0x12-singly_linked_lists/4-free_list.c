#include "lists.h"

/**
 * free_list -  function that frees a list_t list.
 * @head: head of list
 */

void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	if (!head)
		return;
	current_node = head;

	while (current_node)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}
