#include "main.h"

/**
 * leng - find length of string
 *
 * @st: start of s
 * @endofs: end of s
 * @m: modulas
 * @s: input string
 *
 * Return: length of string
 */
int check_is_palindrome(char *s, int st, int endofs, int m);
int is_palindrome(char *s);
int leng(char *s)
{
	int n = 0;

	if (*s > '\0')
		return (n += leng(s + 1) + 1);
}

/**
 * is_palindrome - function that returns 1 if a string is palindrom & 0 if not
 *
 * @s: input string
 *
 * Return: 1 if a string is palindrom and 0 if not
 */

int is_palindrome(char *s)
{
	int endofs = leng(s);

	return (check_is_palindrome(s, 0, endofs - 1, endofs % 2));
}

/**
 * check_is_palindrome - check if string is palindrom or not
 *
 * @s: input string
 * @st: start of string
 * @endofs: end of string
 * @m: modulas
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int check_is_palindrome(char *s, int st, int endofs, int m)
{
	if ((st == endofs && m != 0) || (st == endofs + 1 && m == 0))
		return (1);
	else if (s[st] != s[endofs])
		return (0);
	else
		return (check_is_palindrome(s, st + 1, endofs - 1, m));
}

