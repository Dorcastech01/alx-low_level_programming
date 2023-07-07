#include "main.h"

/**
 * set_bit - this is the main function
 * @n: this is a pointer
 * @index: this is the index, starting from 0
 * of the bit you want to set
 * Description: a function that sets the value of a bit
 * to 1 at a given index.
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int q;


	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	q = 1UL << index;
	*n |= q;
	return (1);
}

