#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: printing numbers with comma
 * Return: 0
 */
int main(void)
{
	int d = 0;

	for (d = 0; d < 10; d++)
	{
		putchar(48 + d);
		if (d != 9)
		{
			putchar(',');
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
