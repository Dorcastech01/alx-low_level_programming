#include "main.h"

/**
 * is_prime_number - main function
 * @n: input
 * Description: printing prime numbers
 * Return: result
 */
int is_prime_helper(int n, int i);
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 2));
	}
}

/**
 * is_prime_helper - helper function
 * @n: input
 * @i: another input
 * Description: printiong prime numbers
 * Return: result
 */
int is_prime_helper(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (is_prime_helper(n, (i + 1)));
	}
}
