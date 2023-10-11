#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: input array
 * @size: array size
 * @cmp: function pointer
 *
 * Return: index of the first element and -1 if empty or no matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && size && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]))
				return (x);
		}
	}
	return (-1);
}
