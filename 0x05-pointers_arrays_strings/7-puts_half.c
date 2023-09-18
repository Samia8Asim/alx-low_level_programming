#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: input string pointer
 */

void puts_half(char *str)
{
	int count = 0, i;

	while (str[count])
		count++;
	for (i = count / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	
	_putchar('\n');
}
