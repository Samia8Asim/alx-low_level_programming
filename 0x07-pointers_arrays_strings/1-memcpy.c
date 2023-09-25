#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 *
 * @dest: first string
 * @src: second string
 * @n: bytes from memory area
 *
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
