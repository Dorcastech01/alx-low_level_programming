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

	if (a <= 0)
	{
		a = a * -1;
		while (j < 2)
		{
			return (n);
			j++;
		}
	}
	else if (a > 0)
	{
		while (j < 2)
		{
			return (n);
			j++;
		}
	}
	return (n);
}
