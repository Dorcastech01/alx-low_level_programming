#include "main.h"

/**
 * binary_to_uint - this is the main function
 * @b: this is a pointer to a string of chars(0 and 1)
 * Description: a function that converts a binary number
 * to an unsigned int
 * Return: the converted number, or 0 ifthere is one or more chars
 * in the string b that is not 0 or 1
 * or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted;
	size_t counter;

	if (b == NULL)
		return (0);

	converted = 0;
	counter = 0;

	for (counter = 0; b[counter] != '\0'; counter++)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);

		converted <<= 1;

		converted += (b[counter] - '0');
	}
	return (converted);
}

