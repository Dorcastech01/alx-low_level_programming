#include "function_pointers.h"
/**
 * array_iterator - main function
 * @array: first arg
 * @size: second arg
 * @action: pointer
 * Return: result
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (array && size && action)
	{
		for (p = 0; p < size; p++)
		{
			(*action)(array[p]);
		}
	}
}

