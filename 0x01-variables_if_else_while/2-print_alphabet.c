#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that use putchar function
 *
 * Return: Alawys 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
