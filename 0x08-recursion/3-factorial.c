#include "main.h"

/**
 * factorial - main function
 * @n: user input
 * Description: finding the factorial of n
 * Return: result
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}