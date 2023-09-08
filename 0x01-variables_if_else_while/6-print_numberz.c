#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that print number from 0-9 usimg putchar
 *
 * Return: Alawys 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	return (0);
}
