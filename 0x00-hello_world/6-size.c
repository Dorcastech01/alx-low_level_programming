#include <stdio.h>
/**
 * main - contains a void function
 * Description : script to print sizes
 * Return: 0
 */
int main(void)
{
	printf("Sizeof a char:%lu\n", sizeof(char));
	printf("Size of an int:%lu\n", sizeof(int));
	printf("Size of a long int:%lu\n", sizeof(long));
	printf("Size of a long long int:%lu\n", sizeof(long long));
	printf("Size of a float:%lu\n", sizeof(float));
	return (0);
}
