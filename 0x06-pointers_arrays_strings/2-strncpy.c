#include "main.h"

/**
 * _strncpy - function that copies a string.
 *
 * @dest: copy of src string
 * @src: string to be copied
 * @n: number of bytes
 *
 * Return: dest wich is copy of src
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
