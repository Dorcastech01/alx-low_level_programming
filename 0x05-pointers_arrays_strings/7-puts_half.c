#include "main.h"
/**
 * puts_half - main block
 * @str: user input
 * Description: printing half of string
 * Return: 0
 */
void puts_half(char *str)
{
	int j, a;

	j = 0;
	while (str[j])
	{
		j++;
		if (str % 2 == 0)
		{
			a = str % 2;
			for (a = str % 2; a <= j; a++)
			{
				_putchar(str[a]);
			}
		}
		else if (j % 2 != 0)
		{
			a = j % 2;
			_putchar(str[a]);
		}
	}
}
