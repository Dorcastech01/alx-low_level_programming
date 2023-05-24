#include "function_pointers.h"

/**
 * print_name - main function
 * @name: user's input
 * @f: user's input
 * Description: a function that prints a name
 * Return: result
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
