#include "main.h"

/**
 * rev_string -  function that reverses a string.
 *
 * @s: input string pointer
 */

void rev_string(char *s)
{
	int count = 0, i;
	char tmp;

	while (s[count])
		count++;
	for (i = 0; i < count / 2 ; i++)
	{
		tmp = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = tmp;
	}
}
