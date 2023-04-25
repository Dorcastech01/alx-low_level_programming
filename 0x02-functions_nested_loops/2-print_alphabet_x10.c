#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_alphabet_x10 - main block
 * Description: printing the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	i = 0;

	while (i < 27)
	{
		ch = 'a';

		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	}
	_putchar('\n');
	i++;
}
