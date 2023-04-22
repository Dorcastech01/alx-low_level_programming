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

	while (d <= 9)
	{
		putchar(48 + d);
		d++;
		putchar(',');
		putchar(' ');
	}
	return (0);
}
