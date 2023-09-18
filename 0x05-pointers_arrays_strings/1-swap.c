#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 *
 * @a: inegert 1 pointer input
 * @b: integer 2 pointer input
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
