#include "main.h"

/**
 * _setm : set 0 in the allocted places
 * @s: input pointer
 * @ch: charater to  set
 * @n: number of places
 */

char *_setm(char *s, char ch, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = ch;
	return (ptr);
}

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of bytes
 * @size: input size
 *
 * Return: pointer and NULL if fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == 0)
	{
		return (NULL);
	}
	_setm(ptr, 0, sizeof(int) * nmemb);
	return (ptr);
}
