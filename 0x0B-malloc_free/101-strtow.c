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
		{
			e = 0;
		}
		else if (e == 0)
		{
			e = 1;
			i++;
		}
	}
	return (i);
}

/**
 * strtow - test function
 * @str: arg
 * Description: a function that splits a string into words
 * Return: result
 */
char **strtow(char *str)
{
	int a, b, i;
	int u, x, y, z;
	char **table, *lmn;

	i = 0;
	b = 0;

	while (*(str + u))
	{
		u++;
	}
	x = word_count(str);

	if (x == 0)
	{
		return (NULL);
	}
	table = (char **) malloc(sizeof(char *) * (x + 1));

	if (table == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= u; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (i)
			{
				z = a;
				lmn = (char *) malloc(sizeof(char) * (i + 1));

				if (lmn == NULL)
				{
					return (NULL);
				}
				while (y < z)
				{
					*lmn++ = str[y++];
				}
				*lmn = '\0';

				table[b] = lmn - i;
				b++;
				i = 0;
			}
		}
		else if (i++ == 0)
		{
			y = a;
		}
	}
		table[b] = NULL;
		return (table);
}
