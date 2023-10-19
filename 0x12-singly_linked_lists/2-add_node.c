#include "lists.h"

/**
 * add_node - add a new node at the beginning
 * @head: current head
 * @str: new head value
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *head_new = malloc(sizeof(list_t));

	if (!head_new || !head)
		return (NULL);

	if (str)
	{
		head_new->str = strdup(str);
		if (!head_new->str)
		{
			free(head_new);
			return (NULL);
		}
		head_new->len = strLen(head_new->str);
	}
	head_new->next = *head;
	*head = head_new;
	return (head_new);
}
