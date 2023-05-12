#include <stdio.h>
/**
 * main - main function
 * @argc: counter
 * @argv: array
 * Description: printing number of arg passed
 * Return: result
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
