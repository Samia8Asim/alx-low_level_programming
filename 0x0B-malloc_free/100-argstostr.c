#include "main.h"

/**
 * _strlen - find string length
 * @s: string input
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
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of argument
 * @av: string pointer of the argument
 *
 * Return: string pointer and NULL if failuer
 */

char *argstostr(int ac, char **av)
{
	int size = 1, i, j;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		size += _strlen(av[i]);
	}
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (i > 0)
			*s = '\n';
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[i] = av[i][j];
		}
	}
	*s = '\0';
	return (s);
}
