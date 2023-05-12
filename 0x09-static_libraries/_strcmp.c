#include "main.h"

/**
 * _strcmp - function
 * @s1: user input 1
 * @s2: user input 2
 * Description: comparing two strings
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
