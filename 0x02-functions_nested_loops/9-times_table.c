#include "main.h"
#include <stdio.h>
/**
 * times_table - main block
 * Description: printing 9 times table
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;

	a = 0;
	while (a >= 48 && a <= 57)
	{
		b = 0;
		while (b >= 48 && b <= 57)
		{
			_putchar(a * b);
			_putchar(',');
			_putchar(' ');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
