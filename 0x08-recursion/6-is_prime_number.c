#include "main.h"

/**
 * is_prime_number - checks if number is prime
 *
 * @i: start from 2
 * @n: input number
 *
 * Return: 1 if prime and 0 otherwise
 */

int check_prime(int n, int i);

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - checks if number is prime
 *
 * @n: input number
 * @i: start from 2
 *
 * Return: 1 if prime and 0 otherwise
 */

int check_prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, i + 1));
}
