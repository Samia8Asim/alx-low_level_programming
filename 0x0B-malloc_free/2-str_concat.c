#include "main.h"

/**
 * _strlen - function to find string length
 *
 * @s: input string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	return (i);
}

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: returned pointer of s1 & s2 and NULL if failuer
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *conc;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	conc = malloc((len1 + len2) * sizeof(char) + 1);

	if (conc == 0)
		return (0);
	for (i = 0; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			conc[i] = s1[i];
		}
		else
			conc[i] = s2[i];
	}
	conc[i] = '\0';
	return (conc);
}
