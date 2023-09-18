#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: input string pointer
 */

void print_rev(char *s)
{
	int count = 0, tmp;

	while (*s != '\n')
	{
		count++;
		s++;

	}

	tmp = count;

	while (*(s + tmp) != *s)
	{
		_putchar(*(s + tmp));
		tmp--;
	}
	_putchar('\n');
}
