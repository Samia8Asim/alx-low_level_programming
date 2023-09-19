#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: Zero
 */

int main(void)
{
	int num;
	char c;

	srand(time(NULL));
	while (num <= 2645)
	{
		c = rand() % 128;
		num += c;
		putchar(c);
	}
	putchar(2772 - num);
	return (0);
}
