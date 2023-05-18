#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - main function
 * @s1: first arg
 * @s2: second arg
 * @n: third arg
 * Description:  a function that concatenates two strings
 * Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, concat_len, i;
	char *concatenated;

	s1_len = 0;
	s2_len = 0;
	concat_len = 0;
	i = 0;
	concatenated = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	if (n >= s2_len)
		concat_len = s1_len + s2_len;
	else
		concat_len = s1_len + n;
	concatenated = malloc((concat_len + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		concatenated[i] = s1[i];
	for (i = 0; i < n && s2[i] != '\0'; i++)
		concatenated[s1_len + i] = s2[i];
	concatenated[s1_len + i] = '\0';
	return (concatenated);
}
