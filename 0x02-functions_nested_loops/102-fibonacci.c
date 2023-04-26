#include "main.h"
#include <stdio.h>
/**
 * main - main block
 * Description: printing first 50 fibonacci nos
 * Return: 0
 */

int main(void)
{
	long int e;
	long int l;
	long int n;
	long int i;

	l = 1;
	n = 2;

	for (e = 1; e <= 50; ++e)
	{
		if (l != 20365011074)
		{
			printf("%ld, ", l);
		}
		else
		{
			printf("%ld\n", l);
		}
		i = l + n;
		l = n;
		n = i;
	}
	return (0);
}
