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
	unsigned int i;
	int j = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		j += va_arg(list, int);

	va_end(list);

	return (j);
}
