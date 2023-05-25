#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - main function
 * @separator: first arg
 * @n: second arg
 * Description: a function that prints strings
 * Return: result
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *e;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		e = va_arg(list, char*);
		if (e != NULL)
			printf("%s", e);
		else
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(list);
	printf("\n");
}
