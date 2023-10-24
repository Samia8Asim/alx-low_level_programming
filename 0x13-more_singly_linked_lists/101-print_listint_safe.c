#include "lists.h"

/**
 * _realloc - reallocstes memory
 * @old_list: old list
 * @len: size of new list
 * @new_node: new node added ro the list
 *
 * Return: pointer to new list
 */
const listint_t **_realloc(const listint_t **old_list, size_t len,
		const listint_t *new_node)
{
	size_t j = 0;
	const listint_t **new_list = malloc(len * sizeof(listint_t *));

	if (new_list == NULL)
	{
		free(old_list);
		exit(98);
	}
	for (j = 0; j < len - 1; j++)
	{
		new_list[j] = old_list[j];
	}
	new_list[j] = new_node;
	free(old_list);
	return (new_list);
}

/**
 * print_listint_safe -  function that prints a listint_t linked list.
 * @head: the linked list head
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t **plist = NULL;
	size_t i, n = 0;

	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (head == plist[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(plist);
				return (n);
			}
		}
		n++;
		plist = _realloc(plist, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(plist);
	return (n);
}
