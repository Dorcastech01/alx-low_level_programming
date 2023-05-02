#include "main.h"
/**
 * puts_half - main block
 * @str: user input
 * Description: printing half of string
 * Return: 0
 */
void puts_half(char *str)
{
	int j, a, q;

	j = 0;
	while (str[j] != 0)
	{
		j++;
	}

	if (j % 2 == 0)
	{
		for (a = j / 2; str[a] != 0; a++)
		{
			_putchar(str[a]);
		}
	}
	else if (j % 2)
	{
		for (q = (j - 1) / 2; q < j - 1; q++)
		{
			_putchar(str[q + 1]);
		}
	}
	_putchar('\n');
}
