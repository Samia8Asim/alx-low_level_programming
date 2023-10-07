#include "main.h"

/**
 * _realloc - eallocates a memory block using malloc and free
 * @ptr: pointer to old size
 * @old_size: old size of memory allocated by ptr
 * @new_size: new size of memory
 *
 * Return: pointer with new size and NULL if fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	void *new_ptr;

	if (new_size == 0 && old_siz != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		for (i = 0; i < new_size && i < old_size; i++)
		{
			*((char *)new_ptr + i) = *((char *)ptr + i);
		}
		free(ptr);
		return (new_ptr);
	}
}
