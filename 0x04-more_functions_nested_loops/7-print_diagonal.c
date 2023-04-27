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
	int e;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 0; t < n; t++)
		{
			for (e = 0; e < n; e++)
			{
				if (e == t)
				{
					_putchar('\\');
				}
				else if (e < t)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
