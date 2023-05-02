#include "main.h"
/**
 * swap_int - main block
 * @a: first user input
 * @b: second user input
 * Description: swapping values of variables
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a = 42;
	b = a;
	*b = 98;
	a = b;
}
