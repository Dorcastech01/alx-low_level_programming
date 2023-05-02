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
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		j++;
	}
	_putchar('\n');
}
