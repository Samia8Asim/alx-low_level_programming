#include "lists.h"

/**
 * list_len - find the length of a list
 * @h: head of list
 * Return: list length
 */
size_t list_len(const list_t *h)
{
	int num_nodes = 0;

	while (h)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
