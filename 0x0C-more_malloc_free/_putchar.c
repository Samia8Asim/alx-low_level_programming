#include "main.h"
#include <unistd.h>

/**
 * _putchar - function to print character to screen
 * @ch: input character
 *
 * Return: character
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
