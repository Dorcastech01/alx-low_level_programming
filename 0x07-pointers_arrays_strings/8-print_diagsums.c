#include "main.h"
/**
 * print_diagsums - main function
 * @a: first arg
 * @size: second arg
 * Description: function that prints the sum of
 * the two diagonals of a square matrix of integers
 * Return: result
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *(a + i * size + j);
			}
			if (i + j == size - 1)
			{
				sum2 += *(a + i * size + j);
			}
		}
	}
	printf("Sum of diagonal from top-left to bottom-right: %d\n", sum1);
	printf("Sum of diagonal from top-right to bottom-left: %d\n", sum2);
}
