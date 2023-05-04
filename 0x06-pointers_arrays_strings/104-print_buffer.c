#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function
 * Description: printing a buffer
 * @b: first arg
 * @size: second arg
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int s, a, w;

	s = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (s < size)
	{
		a = size - s < 10 ? size - s : 10;
		printf("%08x: ", s);
		for (w = 0; w < 10; w++)
		{
			if (w < a)
				printf("%02x", *(b + s + w));
			else
				printf("  ");
			if (w % 2)
			{
				printf(" ");
			}
		}
		for (w = 0; w < a; w++)
		{
			int t = *(b + s + w);

			if (t < 32 || t > 132)
			{
				t = '.';
			}
			printf("%c", t);
		}
		printf("\n");
		s = s + 10;
	}
}
