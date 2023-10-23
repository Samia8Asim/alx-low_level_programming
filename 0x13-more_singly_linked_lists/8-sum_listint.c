#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of linked list
 * @head: head of linked list
 *
 * Return: the sum of all the data of linked list
 */
int sum_listint(listint_t *head)
{
	int data_sum = 0;

	while (head)
	{
		data_sum += head->n;
		head = head->next;
	}
	return (data_sum);
}
