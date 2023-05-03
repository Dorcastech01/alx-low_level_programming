#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: generating random valid passwords
 * Return: 0
 */
int main(void)
{
	int p;
	char d;

	srand(time(NULL));
	while (p <= 2645)
	{
		d = rand() % 128;
		p += d;
		putchar(d);
	}
	putchar(2772 - p);
	return (0);
}
