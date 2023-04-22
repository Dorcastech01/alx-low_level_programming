#include <stdio.h>
/**
 * main - main block
 * Description: printing base 16 characters
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	int t = 0;

	for (t = 0; t <= 9; t++)
		putchar(48 + t);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
