#include <stdio.h>
/**
 * main - main function
 * @argc: number of CLA
 * @argv: array of strings
 * Description: script that prints program name
 * Return: result
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
