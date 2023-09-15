#include <stdio.h>

/**
 * _sqrt - finds the square root of number
 *
 * @n: number input
 *
 * Return: square root of n
 */

double _sqrt(double n)
{
	float s, t;

	s = n / 2;
	t = 0;

	while (s != t)
	{
		t = s;
		s = (n / t + t) / 2;
	}
	return (s);
}

/**
 * largest_prime_number - print largest prime number of num
 *
 * @num: input number
 */

void  largest_prime_number(long int num)
{
	int pn, lar;

	while (num % 2 == 0)
		num = num / 2;

	for (pn = 3; pn <= _sqrt(num); pn += 2)
	{
		while (num % pn == 0)
		{
			num = num / pn;
			lar = pn;
		}

	}

	if (num > 2)
		lar = num;
	printf("%d\n", lar);
}

/**
 * main - Entry point
 *
 * Description: problem of distinguishing prime numbers from composite numbers
 *
 * Return: Alawys 0 (Success)
 */
int main(void)
{
	largest_prime_number(612852475143);

	return (0);
}
