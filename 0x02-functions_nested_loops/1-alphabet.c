#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_alphabet - contains the block
 * Description: printing of the alphabet in lower case
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
