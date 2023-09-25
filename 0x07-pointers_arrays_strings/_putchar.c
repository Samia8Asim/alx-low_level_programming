#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character to stdo
 *
 * @c: input character
 *
 * Return: Ascii character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
