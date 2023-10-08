#include "main.h"

/**
 * _put_string - print a string to stdo
 * @s: input string
 */

void _put_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
}

/**
 * to_int - convert a string to integer
 * @s: input string
 *
 * Return: integer number
 */
int to_int(const char *s)
{
	unsigned long int result = 0, num = 0, i;
	int sign = 1;

	while (!(s[num] >= 48 && s[num] <= 57))
	{
		if (s[num] == '-')
			sign *= -1;
		num++;
	}
	i = num;
	while (s[i] >= 48 && s[i] <= 57)
	{
		result *= 10;
		result += (s[i] - 48);
		i++;
	}
	return (result * sign);
}

/**
 * print_num - print a number to screen
 * @num: input number
 */

void print_num(unsigned long int num)
{
	unsigned long int div = 1, re, i;

	for (i = 0; (num / div) > 9; div *= 10, i++)
		;
	for (; div > 0; num %= div, div /= 10)
	{
		re = num / div;
		_putchar(re + '0');
	}
}

/**
 * main - program that multiplies 2 numbers
 * @ac: Argument number
 * @av: string araay of argument
 *
 * Return: Always 0.
 */
int main(int ac, char const **av)
{
	(void)ac;

	if (ac != 3)
	{
		_put_string("Error");
		exit(98);
	}
	print_num(to_int(av[1]) * to_int(av[2]));
	_putchar('\n');
	return (0);
}
