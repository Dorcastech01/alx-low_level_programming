#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_WORD_LENGTH 100
/**
 * word_count - test function
 * @str: arg
 * Description: a function that splits a string into words
 * Return: result
 */
int word_count(char *str)
{
	int e, r, i;

	e = 0;
	i = 0;

	for (r = 0; str[r] != '\0'; r++)
	{
		if (str[r] == ' ')
			e = 0;
		else if (e == 0)
		{
			e = 1;
			i++;
		}
	}

	return (i);
}
/**
 * strtow - main function
 * @str: arg
 * Description: a function that splits a string into words
 * Return: result
 */
char **strtow(char *str)
{
	char **m, *n;
	int a, b = 0, w = 0, x, r = 0, y, z;

	while (*(str + w))
		w++;
	x = word_count(str);
	if (x == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (x + 1));
	if (m == NULL)
		return (NULL);

	for (a = 0; a <= w; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (r)
			{
				z = a;
				n = (char *) malloc(sizeof(char) * (r + 1));
				if (n == NULL)
					return (NULL);
				while (y < z)
					*n++ = str[y++];
				*n = '\0';
				m[b] = n - r;
				b++;
				r = 0;
			}
		}
		else if (r++ == 0)
			y = a;
	}

	m[b] = NULL;

	return (m);
}
