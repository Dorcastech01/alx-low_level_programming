#include "main.h"
/**
 * print_line - main block
 *@n: user input
 *Description: printing a straight line
 *Return: 0
 */
void print_line(int n)
{
	int t;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 1; t <= n; t++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
