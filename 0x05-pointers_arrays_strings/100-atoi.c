#include "main.h"

/**
 * _atoi -  function that convert a string to an integer.
 *
 * @s: input string pointer
 *
 * Return: string covert to ineger
 */

int _atoi(char *s)
{
	int n = 0, i;
	int inte;

	while (s[n])
		n++;

	for (i = 0; i < n; i++)
	{
		inte = inte * 10 + (s[i] - 48);
	}
	return (inte);
}
