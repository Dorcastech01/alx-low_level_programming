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
	int swpp;

	swpp = *a;
	*a = *b;
	*b = swpp;
}
