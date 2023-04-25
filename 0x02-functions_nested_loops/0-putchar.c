#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * main - main block
 * Description: a program to print a function
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char ch[9] = "_putchar";

	while (i <= 8)
		putchar(ch[i]);
		i++;

	putchar('\n');
	return (0);
}
