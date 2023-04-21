#include <stdio.h>
/**
 * main - main block
 * Description: script to exclude
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			ch--;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
