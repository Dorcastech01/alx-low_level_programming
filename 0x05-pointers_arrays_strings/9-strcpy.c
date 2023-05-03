#include "main.h"
/**
 * _strcpy - main block
 * @dest: input
 * @src: input
 * Descrition: copying a string
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{

	int r, y;

	r = 0;

	while (src[r] != '\0')
	{
		r++;
	}

	for (y = 0; y < r; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';

	return (dest);
}


