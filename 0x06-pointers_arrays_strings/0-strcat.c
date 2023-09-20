#include "main.h"

/**
 * _strcat -  function that concatenates two strings.
 *
 * @dest: first string input
 * @src: second string input
 *
 * Return: the concatenation of the two strings
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);

}
