#include "main.h"

/**
 * get_bit - this is the main function
 * @n: this is an arg
 * @index: this is the index, starting from 0 of the bit
 * you want to get
 * Description: a function that returns the value of a bit
 * at a given index
 * Return: the value of the bit at a specified
 * index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}

