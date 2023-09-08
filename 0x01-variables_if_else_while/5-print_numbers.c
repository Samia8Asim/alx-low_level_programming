#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that print first 10 digits
 *
 * Return: Alawys 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");
	return (0);
}
