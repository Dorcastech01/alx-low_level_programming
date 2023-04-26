#include "main.h"
/**
 * jack_bauer - main block
 * Description: printing time
 * Return: void
 */
void jack_bauer(void)
{
	int j;
	int b;

	j = 0;
	while (j < 24)
	{
		b = 0;
		while (b < 60)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		j++;
	}
}
