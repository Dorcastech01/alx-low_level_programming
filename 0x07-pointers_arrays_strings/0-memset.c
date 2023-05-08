#include "main.h"
/**
 **_memset - main function
 *@s: first arg
 *@b: second arg
 *@n: third arg
 *Description: function that fills memory with
 *a constant byte
 *Return: result
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(s + j) = b;
	}
	return (s);
}
