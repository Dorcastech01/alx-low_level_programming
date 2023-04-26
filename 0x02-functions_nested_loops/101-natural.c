#include <stdio.h>
#include "main.h"
/**
 * main - main block
 * Description: sum of multiples of 3 and 5
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	int result;

	a = 0;
	b = 0;
	result = 0;

	for (c = 0; c < 1024; c++)
	{
		if ((c % 3) == 0)
		{
			a = a + c;
		}

		else if ((c % 5) == 0)
		{
			b = b + c;
		}
	}
	result = a + b;
	printf("%d\n", result);
	return (0);
}
