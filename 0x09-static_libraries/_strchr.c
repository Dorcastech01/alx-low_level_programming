#include "main.h"
/**
 * _strchr - main function
 * @s: first arg
 * @c: second arg
 * Description: function that locates
 * a character in a string
 * Return: result or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
