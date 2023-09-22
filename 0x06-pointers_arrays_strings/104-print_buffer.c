# include "main.h"

/**
 * isAscii - determines if ch is ascii character
 *
 * @n: input character
 *
 * Return: 1 is true ,0 if false
 */

int isAscii(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexa - print hexa valuse of string
 *
 * @a: string to print
 * @start: starting position
 * @end: ending position
 */

void printHexa(char *a, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
		printf("%02x", *(a + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printAscii - print ascii value
 *
 * @c: string to print
 * @start: starting position
 * @end: ending position
 */

void printAscii(char *c, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(c + start + i);
		if (isAscii(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer -  function that prints a buffer.
 *
 * @b: string input
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexa(b, start, end);
			printAscii(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
