#include "main.h"
#include <unistd.h>
/**
 * print_numbers - main block
 * Description: printing numbers
 * Return: void
 */
void print_numbers(void)
{
	int g;

	for (g = 0; g < 10; g++)
		_putchar(g);
	_putchar('\n');
}
