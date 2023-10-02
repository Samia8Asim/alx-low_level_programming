#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 *
 * @argc: number of argument
 * @argv: array list string of argument
 *
 * Return: 0 (Success)
 */

int main(int argc, char const **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
