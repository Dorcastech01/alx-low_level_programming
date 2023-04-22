#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: script to combine numbers
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 0;

	for (c = 0; d < 10; d++)
	{
		for (c < 10; d < 10; c++)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);
				if ((c + d) != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
