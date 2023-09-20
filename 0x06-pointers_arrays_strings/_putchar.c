#include "main.h"

/**
 * _putchar - write a chrarcter to the stdo
 *
 * @c: input character
 *
 * Return: 1 on success, and -1 on error
 */

int putchar(char c)
{
      return (write(1, &c, 1));
}
