#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,in lowercase
 */

void print_alphabet_x10(void)
{
	int num = 0;
	char ch = 'a';

	while (num < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		num++;
	}

}
