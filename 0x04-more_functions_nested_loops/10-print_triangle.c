#include "main.h"
/**
 * print_triangle - main block
 *@size: user input
 *Description: printing a triangle
 *Return: 0
 */
void print_triangle(int size)
{
	int t;
	int e;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 1; t <= size; t++)
		{
			for (e = t; e < size; e++)
			{
				_putchar(' ');
			}
			for (e = 1; e <= t; e++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
