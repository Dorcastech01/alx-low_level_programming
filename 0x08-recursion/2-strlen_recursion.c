#include "main.h"

/**
 * _strlen_recursion - main function
 * @s: arg
 * Description: function that prints string length
 * Return: result
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
