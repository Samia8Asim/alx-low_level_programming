#include "3-calc.h"

/**
 * main - entry point 
 * @ac: number of argument
 * @av: string array of argument
 *
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int (*op_func)(int, int), a, b;

	if (ac != 4)
		printf("Error\n"), exit(98);
	a = atoi(av[1]);
	b = atoi(av[3]);

	op_func = get_op_func(av[2]);
	if (!op_func)
		printf("Error\n"), exit(99);
	if (!b && (av[2][0] == '/' || av[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(a, b));
	return(0);
}
