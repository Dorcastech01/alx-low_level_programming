#include <stdio.h>
/**
 * main - main block
 * Description: script to exclude
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch = 'a' && ch <= 'z' && ch != 'e' && ch != 'q')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
