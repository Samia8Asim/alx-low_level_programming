#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: input string pointer
 */

void puts2(char *str)
{
	int count = 0, i;

	while (str[count])
		count++;
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0 || i == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
