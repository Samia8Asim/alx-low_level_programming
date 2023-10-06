#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: input integer
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == 0)
		exit(98);
	return (ptr);
}
