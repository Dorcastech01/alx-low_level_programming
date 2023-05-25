#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - main function
 * @separator: first arg
 * @n: second arg
 * Description: a function that prints numbers
 * Return: result
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(list, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
