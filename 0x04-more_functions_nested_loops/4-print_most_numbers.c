#include "main.h"
/**
 * print_most_numbers - main block
 * Description: printing numbers but omitting 2 and 4
 */
void print_most_numbers(void)
{
	int y;

	y = 0;
	for (y = 0; y < 10; y++)
	{
		if (y != 2 && y != 4)
		{
			_putchar(y + '0');
		}
	}
	_putchar('\n');
}
