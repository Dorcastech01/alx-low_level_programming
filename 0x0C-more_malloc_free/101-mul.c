#include <stdio.h>
#include <stdlib.h>
/**
 * multiply - main function
 * @num1: first arg
 * @num2: second arg
 * Description: a program that multiplies
 * two positive numbers
 * Return: result
 */
int multiply(int num1, int num2)
{
	int result;

	result = 0;

	while (num2 > 0)
	{
		if (num2 % 2 == 1)
		{
			result += num1;
		}
		num1 *= 2;
		num2 /= 2;
	}
	return (result);
}
