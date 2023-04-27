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
		for (t = 0; t < size; t++)
		{
			for (e = 0; e < size; e++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
