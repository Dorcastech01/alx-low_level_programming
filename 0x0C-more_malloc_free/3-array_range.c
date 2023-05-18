#include "main.h"
#include <stdlib.h>
/**
 * array_range - main function
 * @min: first arg
 * @max: second arg
 * Description: a function that creates an array of integers
 * Return: result
 */
int *array_range(int min, int max)
{
	int *r, size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	r = (int *)malloc(size * sizeof(int));

	if (r == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		r[i] = min++;
	return (r);
}
