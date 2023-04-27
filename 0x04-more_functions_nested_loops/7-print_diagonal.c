#include "main.h"
/**
 * print_diagonal - main block
 *@n: user input
 *Description: printing a diagonal
 *Return: 0
 */
void print_diagonal(int n)
{
	int t;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 0; t <= n; t++)
		{
			if (t == n)
			{
				_putchar('\\');
			}
			else if (t < i)
			{
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
