#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @a: 1st arg
 * @b: 2nd arg
 * Return: rsult
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: 1st arg
 * @b: 2nd arg
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: 1st arg
 * @b: 2nd arg
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: 1st arg
 * @b: 2nd arg
 * Return: result
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modulo
 * @a: 1st arg
 * @b: 2nd arg
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}

