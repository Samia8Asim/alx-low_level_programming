#include "main.h"

/**
 * lower - checks if lowercase
 *
 * @ch: input character
 *
 * Return: i if true and 0 if false
 */
int lower(char ch)
{
	return (ch >= 97 && ch <= 122);
}

/**
 * isDelimiter - checks for delimiters in a string
 *
 * @c: input string
 *
 * Return: 1 if true and 0 if false
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = "\n\t,.;!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string.
 *
 * @cstr: input string
 *
 * Return: capitalized string
 */

char *cap_string(char *cstr)
{
	int i = 1;
	char *str = cstr;

	while (*cstr)
	{
		if (isDelimiter(*cstr))
			i = 1;
		else if (lower(*cstr) && i)
		{
			*cstr -= 32;
			i = 0;
		}
		else
			i = 0;
		cstr++;
	}
	return (str);
}
