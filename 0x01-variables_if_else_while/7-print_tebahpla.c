#include <stdio.h>
/**
 * main - main block
 * Description: printing the alphabet backwards
 * Return: 0
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
