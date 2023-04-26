#include "main.h"
/**
 * print_last_digit - main block
 * @p: user input
 * Description: script to print last digit
 * Return: last digit of number
 */
int print_last_digit(int p)
{
	int a;

	if (p < 0)
		p = p * -1;

	a = p % 10;

	if (a < 0)
		a = a * -1;
	_putchar(a + '0');

	return (a);
}
