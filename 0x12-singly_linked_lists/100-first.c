#include "lists.h"

void construc(void) __attribute__ ((constructor));
/**
 * construc -  function execur before main
 * Return: void
 */
void construc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
