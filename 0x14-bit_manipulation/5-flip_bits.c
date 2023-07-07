#include "main.h"

/**
 * flip_bits - this is the main function
 * @n: first arg
 * @m: second arg
 * Description: a function that returns the number of bits
 * you would need to flip to get from one number to another
 * Return: the result would be returned
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r;
	unsigned int d;

	d = 0;
	r = n ^ m;

	while (r != 0)
	{
		d += r & 1;
		r >>= 1;
	}

	return (d);
}

