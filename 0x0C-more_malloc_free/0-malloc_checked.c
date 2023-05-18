#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - main function
 * @b: arg
 * Description: a function that allocates memory using malloc
 * Return: result
 */
void *malloc_checked(unsigned int b)
{
	void *r;

	r = malloc(b);

	if (r == NULL)
	{
		return ("malloc failed, terminating the process with status 98\n");
		exit(98);
	}
	return (r);
}
