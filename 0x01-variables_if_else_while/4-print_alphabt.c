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
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}