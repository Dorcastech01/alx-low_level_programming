#include "main.h"

/**
 * _strncpy - main block
 * @dest: first arg
 * @src: second arg
 * @n: third arg
 * Description: copying a string
 * Return: result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (src[a++])
		b++;

	for (a = 0; src[a] && a < n; a++)
		dest[a] = src[a];

	for (a = b; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
