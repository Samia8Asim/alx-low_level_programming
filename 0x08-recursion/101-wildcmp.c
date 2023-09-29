#include "main.h"

/**
 * bool_match - function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 * @p: input int
 * @c: input int
 *
 * Return: 1 if match and 0 otherwise
 */

int bool_match(char *s1, char *s2, int p, int c)
{
	if (s2[p] == '\0')
		return (s1[c] == '\0');
	else if (s2[p] == '*')
	{
		for (; s1[c] != '\0'; c++)
		{
			if (bool_match(s1, s2, p + 1, c))
				return (1);
		}
		return (bool_match(s1, s2, p + 1, c));
	}
	else
		return (bool_match(s1, s2, p + 1, c + 1));
}

/**
 * wildcmp -  function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if true and 0 if false
 */

int wildcmp(char *s1, char *s2)
{
	return (bool_match(s1, s2, 0, 0));
}
