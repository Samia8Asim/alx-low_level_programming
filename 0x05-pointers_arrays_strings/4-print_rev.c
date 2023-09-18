#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: input string pointer
 */

void print_rev(char *s)
{
	int count;
	int tmp;

	for (count = 0; *s != '\0'; count++)
		s++;
	
	for (tmp = count; *(s + tmp) != *s; tmp--)
	{
		_putchar(*(s + tmp));
	}
	_putchar('\n');
}
