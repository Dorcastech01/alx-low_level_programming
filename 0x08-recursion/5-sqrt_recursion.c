#include "main.h"

/**
 * sqrt_helper - helper function
 * @n: user input
 * @low: arg 1
 * @high: arg 2
 * Description: finding the squareroot
 * of a natural number
 * Return: result
 */
int sqrt_helper(int n, int low, int high);

/**
 * _sqrt_recursion - main function
 * @n: user input
 * Description for _sqrt_recursion: finding the squareroot
 * of a natural number
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (sqrt_helper(n, 1, n));
	}
}

/**
 * sqrt_helper - helper function
 * @n: user input
 * @low: arg 1
 * @high: arg 2
 * Description: finding the squareroot
 * of a natural number
 * Return: result
 */
int sqrt_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;

	if (mid == n / mid && n % mid == 0)
	{
		return (mid);
	}
	else if ((mid < n) / mid)
	{
		return (sqrt_helper(n, (mid + 1), high));
	}
	else
	{
		return (sqrt_helper(n, low, (mid - 1)));
	}
}
