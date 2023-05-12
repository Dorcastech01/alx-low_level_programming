#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: number of CLA
 * @argv: array of strings
 * Description: script that prints program name
 * Return: result
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
