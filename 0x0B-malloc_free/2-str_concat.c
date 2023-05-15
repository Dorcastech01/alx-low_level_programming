#include "main.h"
#include <stdlib.h>
/**
 * str_concat - main function
 * @s1: first arg
 * @s2: second arg
 * Description: a function that concatenates two strings
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		concat_str[len1 + i] = s2[i];
	}
	concat_str[len1 + len2] = '\0';
	return (concat_str);
}
