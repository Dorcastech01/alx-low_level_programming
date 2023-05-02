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

	j = 0;
	while (s[j])
	{
		_putchar(s[j]);
		j++;
	}

	int a;
	int c;

	a = j;
	for (c = a - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
