#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: counter
 * @argv: array
 * Description: multiplying 2 numbers
 * Return: result
 */
int main(int argc, char *argv[])
{
	int a, b, answer;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	answer = a * b;
	printf("%d\n", answer);

	return (0);
}
