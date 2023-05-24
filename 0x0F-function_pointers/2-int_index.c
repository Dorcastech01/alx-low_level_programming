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
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}

