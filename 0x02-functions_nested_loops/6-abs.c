#include "main.h"
/**
 * _abs - main block
 * @a: user input
 * Description: script to print absolute numbers
 * Return: 0
 */
int _abs(int a)
{
	int t;

	t = a * -1;
	if (a <= 0)
		_putchar(t);
	else
		_putchar(a);
	return (0);
}
