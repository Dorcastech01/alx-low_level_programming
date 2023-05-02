#include "main.h"
/**
 * print_rev - main block
 * @s: user input
 * Description: printing in reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int j;

	j = -1;
	while (s[j])
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
