#include "main.h"
/**
 * _strspn - main function
 * @s: first arg
 * @accept: second arg
 * Description: function that gets the length
 * of a prefix substring
 * Return: result
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int r;
	int d;

	r = 0;

	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
			if (accept[d] == *s)
			{
				r++;
				break;
			}
			else if ((accept[d + 1]) == '\0')
			{
				return (r);
			}
		}
		s++;
	}
	return (r);
}
