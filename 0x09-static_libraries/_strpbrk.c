#include "main.h"
/**
 * _strpbrk - main function
 * @s: first arg
 * @accept: second arg
 * Description: function that searches
 * a string for any of a set of bytes
 * Return: result
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *q = accept;

		while (*q != '\0')
		{
			if (*s == *q)
			{
				return (s);
			}
			q++;
		}
		s++;
	}
	return (NULL);
}
