#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 *
 * @c: input string
 *
 * Return: string after encoding
 */

char *rot13(char *c)
{
	char *ch = c;
	int i;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*c)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*c == input[i])
			{
				*c = output[i];
				break;
			}
		}
		c++;
	}
	return (ch);
}
