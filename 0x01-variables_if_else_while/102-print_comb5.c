#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: script to combine two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int t;
	int y;

	int b;
	int m;
	int w;

	while (a <= 98)
	{
		t = (a / 10 + '0');
		y = (a % 10 + '0');
		b = 0;
		while (b <= 99)
		{
			m = (b / 10 + '0');
			w = (b % 10 + '0');

			if (a < b)
			{
				putchar(t);
				putchar(y);
				putchar(' ');
				putchar(m);
				putchar(w);

				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
