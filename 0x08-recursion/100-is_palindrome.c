#include "main.h"

/**
 * last_digit - first function
 * Description: returns the last index
 * of a string (counts the null char)
 * @s: pointer the string
 * Return: int
 */

int last_digit(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_digit(s + 1) + 1;

	return (n);
}

/**
 * check - second function
 * Description: checker for the palindrome
 * @s: string
 * @start: int moves from right to left
 * @end: int moves from left to right
 * @pair: int
 * Return: 0 or 1
 */

int check(char *s, int start, int end, int pair)
{
	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, pair));
}

/**
 * is_palindrome - main function
 * Description: check if a string is a palindrome
 * @s: string to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int end = last_digit(s);

	return (check(s, 0, end - 1, end % 2));
}
