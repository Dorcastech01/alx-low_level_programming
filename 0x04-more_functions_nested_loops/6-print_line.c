#include "main.h"
/**
 * print_line - main block
 *@n: user input
 *Description: printing a straight line
 */
void print_line(int n)
{
	int t;

	t = 0;
	for (t = 0; t <= n; t++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
