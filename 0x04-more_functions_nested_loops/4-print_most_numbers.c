#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2 & 4
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num == 2 || num == 4)
			num++;
		else
		{
			_putchar(num + 48);
			num++;
		}
	}
	_putchar('\n');
}
