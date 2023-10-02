#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: input string pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
