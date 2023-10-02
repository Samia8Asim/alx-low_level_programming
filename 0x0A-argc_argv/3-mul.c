#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 *
 * @argc: number of argument
 * @argv: array list string of argument
 *
 * Return: 0 (Success) and 1 (Failure)
 */

int main(int argc, char **argv)
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
