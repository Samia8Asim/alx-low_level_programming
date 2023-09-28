#include "main.h"
#include <unistd.h>

/** 
 * putchar - print character to stdo
 *
 * @c: input character
 *
 * Return: display character on the screen
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
