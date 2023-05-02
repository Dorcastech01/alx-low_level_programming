#include "main.h"
/**
 * _puts - main block
 * @str: user input
 * Description: printing to stdout
 * Return: 0
 */
void _puts(char *str)
{
	int e;

	e = 0;
	while (str[e])
	{
		_putchar(str[e]);
		e++;
	}
	_putchar('\n');
}
