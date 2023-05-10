#include "main.h"

/**
 * _print_rev_recursion - main function
 * @s: arg
 * Description: printing a string in reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
