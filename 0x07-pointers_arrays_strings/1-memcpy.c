#include "main.h"
/**
 **_memcpy - main function
 *@dest: first arg
 *@src: second arg
 *@n: third arg
 *Description: function that copies memory area
 *Return: result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
	{
		*(dest + e) = *(src + e);
	}
	return (dest);
}
