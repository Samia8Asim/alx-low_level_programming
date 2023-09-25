#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: input string
 * @b: filling  chracter
 * @n: bytes of the memory area
 *
 * Return: s filled with b
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
