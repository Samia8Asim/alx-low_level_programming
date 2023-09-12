#include "main.h"

/**
 * times_table - function that prints the 9 times table
 */

void times_table(void)
{
	int n, m, p;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (m = 1; m <= 9; m++)
		{
			p = n * m;
			_putchar(',');
			_putchar(' ');

			if (p <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((p / 10) + 48);
			_putchar((p % 10) + 48);
		}
		_putchar('\n');
	}
}
