#include "main.h"
/**
 * print_array - main block
 * @a: user input
 * @n: number of array
 * Description: printing number of array
 * Return: 0
 */
void print_array(int *a, int n)
{
	n = 0;
	while (a[n])
	{
		n++;
	}

	for (n = 0; a[n] != 0; n++)
	{
		printf("a[n]");
		printf(", ");
	}
	putchar('\n');
}
