#include <unistd.h>
#include "main.h"

/**
 * _putchar -  print a ch to stdo
 *
 * @ch: string or charcter to be printed
 *
 * Return: 1 when (Success) and -1 when (fail)
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
