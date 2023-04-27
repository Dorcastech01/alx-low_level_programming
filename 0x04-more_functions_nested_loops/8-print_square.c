#include "main.h"
/**
 * print_square - main block
 *@size: user input
 *Description: printing a square
 *Return: 0
 */
void print_square(int size)
{
	int t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 1; t <= size; t++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
