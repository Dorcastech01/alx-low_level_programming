#include "main.h"
/**
 * _islower - main block
 * Description: printing 1 if its lowercase
 * @c: character entered
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c <= 'z')
		return (1);
	else
		return (0);
}
