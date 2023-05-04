#include "main.h"

/**
 * reverse_array - function
 * Description: reverses the content of an array of integers
 * @a: first arg
 * @n: second arg
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c;
	int q;
	int b;

	q = n - 1;

	for (c = 0; c < n / 2; c++)
	{
		b = a[c];
		a[c] = a[q];
		a[q--] = b;
	}
}
