#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n;
	char *endianness = (char *)&n;

	if (*endianness == 1)
		return (1);
	return (0);
}
