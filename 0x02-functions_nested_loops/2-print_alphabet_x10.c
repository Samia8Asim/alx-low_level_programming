#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,in lowercase
 */

void print_alphabet_x10(void)
{
	int num = 0, ch;

	while (num < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		num++;
	}
}
