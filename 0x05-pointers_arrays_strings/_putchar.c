#include "main.h"
#include <unistd.h>

/**
 * _putchar - -print character to stdo
 *
 * @c: character to be printed
 *
 * Return: on success 1, on error -1
 */
int _putchar(char c)
{
	return (write(1, $c, 1));
}
