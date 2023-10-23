#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of linked list
 * @idx: new node index
 * @n: data inside node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node_idx;
	listint_t temp1, temp2;

	temp1 = malloc(sizeof(listint_t);
	if (!temp1 || !head)
		return (NULL);

	temp1->next = NULL;
	temp1->n = n;
	if (!node_idx)
	{
		temp1 = *head;
		*head = temp1;
		return (temp1);
	}
	temp2 = *head;
	while (temp2)
	{
		if (node_idx == idx - 1)
		{
			temp1 = temp2->next;
			temp2 = temp1;
			return (temp1);
		}
		node_idx++;
		temp2 = temp2->next;
	}
	free(temp1);
	return (NULL);
}
