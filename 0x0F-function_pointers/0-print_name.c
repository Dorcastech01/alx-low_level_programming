#include "function_pointers.h"

/**
 * print_name - main function
 * @name: user input
 * @f: void function
 * Description: a function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

