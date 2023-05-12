#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: counter
 * @argv: array
 * Description: printing minimum
 * number of coins
 * Return: reslt
 */
int main(int argc, char *argv[])
{
	int money, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;

	coins += money / 25;
	money %= 25;

	coins += money / 10;
	money %= 10;

	coins += money / 5;
	money %= 5;

	coins += money / 2;
	money %= 2;

	coins += money;
	printf("%d\n", coins);
	return (0);
}
