#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: script to combine 3 numbers
 * Return: 0
 */
int main(void)
{
	int a;
	int t;
	int m = 0;

	while (m < 10)
	{
		t = 0;
		while (t < 10)
		{
			a = 0;
			while (a < 10)
			{
				if (a != t && t != m && m < t && t < a)
				{
					putchar('0' + m);
					putchar('0' + t);
					putchar('0' + a);

					if (a + t + m != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				a++;
			}
			t++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
