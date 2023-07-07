#include "main.h"

/**
 * print_binary - this is the main function
 * @n: the int arg for the function
 * Description: a function that prints the binary representation
 * of a number
 * Return: the result
 */

void print_binary(unsigned long int n)
{
	int p;
	unsigned long int q;

	p = 1;
	q = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (q > 0)
	{
		if ((n & q) != 0)
		{
			p = 0;
			_putchar('1');
		}
		else if (!p)
			_putchar('0');

		q >>= 1;
	}
	if (p)
		_putchar('0');
}

