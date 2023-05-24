#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - main function
 * @array: first arg
 * @size: second arg
 * @cmp: third arg
 * Decsription: a function that searches for an integer
 * Return: result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int e;

	if (size <= 0)
	{
		return (-1);
	}

	for (e = 0; e < size; e++)
	{
		if (cmp(array[e]) != 0)
		{
			return (e);
		}
	}
	return (-1);
}

