#include "main.h"

/**
  * print_number - function
  * Description: printing an integer
  * @n: integer params
  * Return: 0
 **/

void print_number(int n)
{
	unsigned int eri;

	eri = n;

	if (n < 0)
	{
		_putchar('-');
		eri = -n;
	}

	if (eri / 10 != 0)
	{
		print_number(eri / 10);
	}
	_putchar((eri % 10) + '0');
}
