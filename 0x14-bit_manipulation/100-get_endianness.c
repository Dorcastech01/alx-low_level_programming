#include "main.h"

/**
 * get_endianness - this is the main function
 * Description: a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int id;
	char *eri;

	id = 1;
	eri = (char *)&id;

	return ((int)*eri);
}
