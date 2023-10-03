#include "main.h"

/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 *
 * @str: input string
 *
 * Return: string pointer and NULL if str == NULL
 */

char *_strdup(char *str)
{
	int i, slen;
	char *nstr;

	if (str == NULL)
		return (NULL);
	for (slen = 0; str[slen] != '\0'; slen++)
	;
	nstr = malloc(slen * sizeof(*str) + 1);
	if (nstr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < slen; i++)
			nstr[i] = str[i];
	}
	return (nstr);
}
