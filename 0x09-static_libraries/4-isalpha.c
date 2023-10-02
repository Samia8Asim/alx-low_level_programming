#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: takes input to the function
 *
 * Return: 1 if alphabetic character and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	return (0);

}
