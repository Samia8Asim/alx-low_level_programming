#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 *
 * @c: input string
 *
 * Return: result string
 */

char *leet(char *c)
{
	unsigned int i;
	char *ch = c;
	char keys[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {4, 3, 0, 7, 1};

	while (*c)
	{
		for (i = 0; i < (sizeof(keys) / sizeof(char)); i++)
		{
			if (*c == keys[i] || *c == keys[i] + 32)
				*c = val[i] + 48;
		}
		c++;
	}
	return (ch);
}
