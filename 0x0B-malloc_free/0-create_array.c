#include "main.h"
#include <stdlib.h>

/**
 * create_array - main function
 * @size: first arg
 * @c: second arg
 * Description: creating an array of chars,
 * and initializes it with a specific char
 * Return: result
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
