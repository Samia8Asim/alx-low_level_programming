#include "main.h"

/**
 * flip_bits - returns the number of bits
 * to flip to get from one number to another
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to flip convert num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int bits = 0;

	while (xor)
	{
		if (xor & 1ul)
			bits++;
		xor >>= 1;
	}
	return (bits);
}
