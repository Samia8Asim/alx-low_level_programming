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
	char c1 = 'a';
	char c2 = 'A';

	while (c1 <= 'z')
	{
		putchar(c1);
		c1++;
	}
	while (c2 <= 'Z')
	{
		putchar(c2);
		c2++;
	}
	putchar('\n');
	return (0);
}
