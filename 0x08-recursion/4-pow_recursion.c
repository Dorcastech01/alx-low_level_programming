#include "main.h"

/**
 * _pow_recursion - main function
 * @x: first arg
 * @y: second arg
 * Description: exponential
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
