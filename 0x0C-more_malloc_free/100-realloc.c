#include "main.h"
#include <stdlib.h>
/**
 * _realloc - main function
 * @ptr: first arg
 * @old_size: second arg
 * @new_size: third arg
 * Description: a function that reallocates a memory block
 * using malloc and free
 * Return: result
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size, i;
	unsigned char *src, *dest;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	copy_size = old_size < new_size ? old_size : new_size;
	src = (unsigned char *)ptr;
	dest = (unsigned char *)new_ptr;

	for (i = 0; i < copy_size; i++)
		dest[i] = src[i];
	free(ptr);
	return (new_ptr);
}
