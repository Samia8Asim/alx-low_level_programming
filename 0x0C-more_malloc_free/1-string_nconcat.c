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
	int i, j, len1, len2;
	char *sp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	sp = malloc(len1 + n + 1);

	if (sp == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		sp[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		sp[i] = s2[j];
		i++;
	}
	sp[i] = '\0';
	return (sp);
}
