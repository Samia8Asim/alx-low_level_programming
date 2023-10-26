#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input binary number
 *
 * Return: the converted number, or 0 if null or error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	if (!b)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		uint = uint * 2 + (*b++ - '0');
	}
	return (uint);
}
