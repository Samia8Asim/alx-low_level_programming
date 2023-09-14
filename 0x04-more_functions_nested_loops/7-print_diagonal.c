#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n:  the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int r, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= n; r++)
		{
			for (s = 1; s <= r; s++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
