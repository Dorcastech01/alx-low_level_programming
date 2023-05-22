#include <stdio.h>
/**
 * main - main block
 * Description: a program that prints
 * the name of the file it was compiled from
 * Return: result
 */
int main(void)
{
	printf("Compiled from file: %s\n", __FILE__);
	return (0);
}
