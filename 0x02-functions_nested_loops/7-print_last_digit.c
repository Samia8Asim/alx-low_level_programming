#include "main.h"

/**
 * print_last_digit - fuction that print last digit of number
 *
 * @n: takes integer input from function
 *
 * Return: the last digit of a number
 */

int print_last_digit(int n)
{
	int last_d;

	if (n < 0)
		last_d = -1 * (n % 10);
	else
		last_d = n % 10;

	_putchar(last_d + '0');
	return (last_d);
}
