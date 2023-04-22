#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description - print integers with putchar
 * Return: 0
 */
int main(void)
{
	int a = 0;

	for (a = 0; a <= 9; a++)
		putchar(48 + a);
	putchar('\n');
	return (0);
}
