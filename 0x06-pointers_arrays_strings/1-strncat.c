#include "main.h"

/**
 * _strncat -  function that concatenates two strings useing at most n byte
 *
 * @dest: fist input string
 * @src: second input string
 *@n: n bytes from src
 *
 * Return: dest after concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
