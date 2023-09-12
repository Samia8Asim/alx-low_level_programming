#include "main.h"

/**
 * main - Enrty point
 *
 * Description: A program that prints _putchar
 *
 * Return: Alawys 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int ch = 0;

	while (ch < 8)
	{
		_putchar(str[ch]);
		ch++;
	}

	_putchar('\n');

	return (0);
}
