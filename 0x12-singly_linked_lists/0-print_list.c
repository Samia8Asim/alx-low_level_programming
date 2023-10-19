#include "lists.h"

/**
 * strLen - find str length
 * @str: input string
 * Return: string length
 */
int strLen(char *str)
{
	int len = 0;

	if (!str)
		return (0);

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * print_list - print a list
 * @h: list node
 * Return: number of nodes in a list
 */
size_t print_list(const list_t *h)
{
	int nodes_num = 0;

	while (h)
	{
		printf("[%d] %s\n", strLen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
