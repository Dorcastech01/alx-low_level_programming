#include "variadic_functions.h"

/**
 * sum_them_all - main function
 * @n: user input
 * Description: a function that returns
 * the sum of all its parameters
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	int k;
	unsigned int i;

	if (n == 0)
		return (0);
	k = 0;

	for (i = 1; i <= n; i++)
		k += i;
	return (k);
}
