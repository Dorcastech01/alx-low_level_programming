#include "main.h"
#include <stdlib.h>
/**
 * _calloc - main function
 * @nmemb: first arg
 * @size: second arg
 * Description: a function that allocates memory for an array
 * Return: result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *r;
	unsigned int total_size, i;
	unsigned char *byte_r;

	total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	r = malloc(total_size);

	if (r == NULL)
		return (NULL);

	byte_r = (unsigned char *)r;

	for (i = 0; i < total_size; i++)
		byte_r[i] = 0;

	return (r);
}
