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

	if (a >= 48 && a <= 57)
	{
		t = a * -1;
		_putchar(t);
	}
	else
		_putchar(a);
	return (0);
}
