#include "function_pointers.h"

/**
 * main - check school student code
 * @ac: number of argumenr
 * @av: array list of argument 
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	char *ptr = (char *)main;
	int a;

	if (ac != 2)
		printf("Error\n"), exit(1);
	a = atoi(av[1]);
	if (a < 0)
		printf("Error\n"), exit(2);
	while (a--)
		printf("%02hhx%s", *ptr++, a ? " " : "\n");
	return (0);
}
