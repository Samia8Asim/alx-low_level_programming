#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: input array
 * @size: input size of array
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *arr_end = array + size - 1;

	if (array && size && action)
	{
		while (array <= arr_end)
			action(*array++);
	}
}
