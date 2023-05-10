#include "main.h"

/**
 * _puts_recursion - main function
 * Description: function that prints a string
 * @s: arg
 * Return: void
 */
void _puts_recursion(char *s)
{
	char t;

	t = *s;

	_putchar(t);
	_putchar('\n');
}
