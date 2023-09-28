#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: input number
 *
 * Return: The natural square root of a number
 */

int _sqr(int n, int num);

int _sqrt_recursion(int n)
{
	return (_sqr(n, 1));
}

/**
 * _sqr - checks if a given number is perfct square root
 *
 * @n: input number
 * @num: number to check if number is perfct square root start from 1
 *
 * Return: the square root of n
 */

int _sqr(int n, int num)
{
	if (num * num == n)
		return (num);
	else if (num * num < n)
		return (_sqr(n, num + 1));
	else
		return (-1);
}
