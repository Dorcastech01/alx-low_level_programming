#include <stdio.h>
/**
 * main - main function
 * @argc: counter
 * @argv: array
 * Description: printing all arguments
 * Return: result
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
