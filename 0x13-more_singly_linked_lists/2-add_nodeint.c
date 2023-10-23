#include "lists.h"

/**
 * add_nodeint -  function that adds a new node at the beginning of a list
 * @head: the head node
 * @n: data valuse inside node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (!*new_head || !*head)
		return (NULL);

	new_head->next = NULL;
	new_head->n = n;
	while (*head)
	{
		new_head->next = *head;
		*head = new_head;
	}
	return (new_head);
}
