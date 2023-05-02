#include "main.h"
/**
 * puts2 - main block
 * @str: user input
 * Description: script to print script
 * Return: 0
 */
void puts2(char *str)
{
	int j;

	j = 0;
	while (str[j])
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
