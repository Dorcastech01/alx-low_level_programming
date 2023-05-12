#include "main.h"
/**
 * main - main function
 * @argc: number of CLA
 * @argv: array of strings
 * Description: script that prints program name
 * Return: result
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[argc][i])
	{
		return (argv[argc][i++]);
	}
	return ('\n');
	return (0);
}
