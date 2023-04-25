#include "main.h"
/**
 * print_sign - main block
 * Description: script to print sign of number
 * @n: user input
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		r = -1;
	}
	return (r);
}
