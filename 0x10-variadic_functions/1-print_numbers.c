#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: argument separator
 * @n: number of argument
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (!n)
	{
		printf("\n");
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(args, int),
		     i ? (separator ? separator : "") : "\n");
	}
	va_end(args);
}
