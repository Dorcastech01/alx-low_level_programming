#include "main.h"

/**
 * *_strcat - main block
 * @dest: user input 1
 * @src: user input 2
 * Return: result
 */
char *_strcat(char *dest, char *src)
{
	int first = 0;
	int second = 0;

	while (dest[first++])
		second++;
	for (first = 0; src[first]; first++)
		dest[second++] = src[first];
	return (dest);
}

