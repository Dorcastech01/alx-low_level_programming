#include "main.h"
/**
 * *string_toupper - function
 * Description: change string to uppercase
 * @q: first arg
 * Return: result
*/

char *string_toupper(char *q)
{
	int n;

	for (n = 0; q[n] != '\0'; n++)
	{
		if (q[n] <= 'z' && q[n] >= 'a')
			q[n] = q[n] - 32;
	}
	return (q);
}
