#include "variadic_functions.h"
#include <stdarg.h>

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
	va_list j;

	va_start(j, n);

	k = 0;

	for (i = 0; i <= n; i++)
		k += va_arg(j, int);
	va_end(j);
	return (k);
}
