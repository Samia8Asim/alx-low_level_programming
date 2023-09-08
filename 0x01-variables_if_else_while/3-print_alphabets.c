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

	while (c1 <= 'z' && c2 <= 'Z')
	{
		putchar(c1);
		putchar(c2);
		c1++;
		c2++;
	}
	putchar('\n');
	return (0);
}
