#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: first string input
 * @s2: second string input
 * @n: input number of pytes
 *
 * Return: pointer  to new string and NULL if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *sp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	sp = malloc(sizeof(char) * (1 + len1));

	if (sp == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		sp[len1++] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		sp[len1++] = s2[j];
	}
	sp[len1] = '\0';
	return (sp);
}
