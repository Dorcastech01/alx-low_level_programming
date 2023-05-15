#include "main.h"
#include <stdlib.h>
/**
 * _strdup - main function
 * @str: arg
 * Description: a function that returns a pointer to a newly allocated
 * space in memory,which contains a copy of the string given as a parameter
 * Return: result
 */

char *_strdup(char *str)
{
	int len;
	char *dup_str;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	dup_str = malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}
	dup_str[len] = '\0';
	return (dup_str);
}
