#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: argument separator
 * @n: number of argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list args;

	if (!n)
	{
		printf("\n");
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s%s", s = va_arg(args, char*) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	}
	va_end(args);
}
