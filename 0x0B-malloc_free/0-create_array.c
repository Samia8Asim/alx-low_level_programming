#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with c
 *
 * @size: size of array
 * @c: character to be initialized
 *
 * Return: array of chars and NULL if size 0 or fails
 */

char *create_array(unsigned int size, char c)
{
	char *carray = malloc(size);

	if (carray == 0 || size == 0)
		return (0);
	while (size--)
	{
		carray[size] = c;
	}
	return (carray);

}
