#include "variadic_functions.h"

/**
 * charf - char format
 * @s: seprator
 * @argp: argument pointer
 */
void charf(char *s, va_list argp)
{
	printf("%s%c", s, va_arg(argp, int));
}

/**
 * intf - int format
 * @s: seprator
 * @argp: argument pointer
 */
void intf(char *s, va_list argp)
{
	printf("%s%d", s, va_arg(argp, int));
}

/**
 * floatf - float format
 * @s: seprator
 * @argp: argument pointer
 */
void floatf(char *s, va_list argp)
{
	printf("%s%f", s, va_arg(argp, double);
}

/**
 * strf - format_string
 * @s: seprator
 * @argp: argument pointer
 */
void strf(char *s, va_list argp)
{
	char *str = va_arg(argp, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";
	printf("%s%s", s, str);
}

/**
 * print_all -  function that prints anything.
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	char *sep = "";
	int i = 0, j;
	va_list argp;
	token_t tokens[] = {
		{"c", charf},
		{"i", intf},
		{"f", floatf},
		{"s", strf},
		{NULL, NULL}
	};

	va_start(argp, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(sep, argp);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(argp);
}
