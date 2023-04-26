#include "main.h"
/**
 * print_last_digit - main block
 * @a: user input
 * Description: script to print last digit
 * Return: last digit of number
 */
int print_last_digit(int a)
{
	int n;
	int j;

	n = a % 10;
	j = 0;
	while (j < 2)
	{
		_putchar(n);
		j++;
	}
	return (0);
}
