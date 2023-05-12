#include "main.h"
/**
 * _strlen - main block
 * @s: user input
 * Description: script for strlen
 * Return: 0
 */
int _strlen(char *s)
{
	int e;

	e = 0;
	while (s[e])
	{
		e++;
	}
	return (e);
}
