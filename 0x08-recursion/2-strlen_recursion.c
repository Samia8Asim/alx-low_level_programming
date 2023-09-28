#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: input string
 *
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
	int leng = 0;

	if (*s > '\0')
	{
		leng +=  _strlen_recursion(s + 1) + 1;
	}
	return (leng);
}
