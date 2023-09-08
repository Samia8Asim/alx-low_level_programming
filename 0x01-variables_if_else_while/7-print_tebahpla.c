#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints letters from z-a
 *
 * Return: Alawys 0 (Success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
