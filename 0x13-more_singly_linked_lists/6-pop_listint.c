#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of a list
 * @head : the head of a list
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n_data;
	listint_t *new_head;

	if (!*head || !head)
		return (0);

	new_head = (*head)->next;
	n_data = (*head)->n;
	free(*head);
	*head = new_head;
	return (n_data);
}
