#include "main.h"

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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			continue;
		}

		if (isDelimiter(str[i]))
		{
			++i;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			continue;
		}
	}
	return (str);
}
