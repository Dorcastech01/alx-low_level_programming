#include <stdio.h>
/**
 * main - contains the code
 * Description: script to print alphabets
 * Return:0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
