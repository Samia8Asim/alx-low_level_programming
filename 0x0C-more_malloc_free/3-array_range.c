#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: minimum number input
 * @max: maximum number input
 *
 * Return: pointer to the newly created array and NULL if fails
 */

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = i + min;
	}
	return (ptr);
}
