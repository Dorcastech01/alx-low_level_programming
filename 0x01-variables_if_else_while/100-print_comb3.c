#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: script to combine numbers
 * Return: 0
 */
int main(void)
{
	int a;
	int t = 0;

	while (t < 10)
	{
		a = 0;
		while (a < 10)
		{
			if (t != a && t < a)
			{
				putchar('0' + t);
				putchar('0' + a);

				if (a + t != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			a++;
		}
		t++;
	}
	putchar('\n');
	return (0);
}
