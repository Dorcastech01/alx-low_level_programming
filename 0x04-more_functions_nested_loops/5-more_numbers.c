#include "main.h"

/**
 * more_numbers - main block
 * Description: printing numbers 10x
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
