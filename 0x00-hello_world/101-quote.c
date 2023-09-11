#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A program that print a String to the standard error.
 *
 * Return: 1 to the standard error.
 */

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, q, 59);
	return (1);
}
