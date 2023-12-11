#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: input string pointer
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
